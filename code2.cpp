#include <iostream>
using namespace std;
class Q2
{
public:
    int *arr1;
    int *arr2;
    int *arr;
    int *un;
    int l1, l2, l3;
    Q2(int x, int y)
    {
        l1 = x;
        l2 = y;
        l3 = l1 + l2;
        arr1 = new int[l1];
        arr2 = new int[l2];
        un = new int[l3];
        arr = new int[l3];
    }
    ~Q2()
    {
        delete[] arr1;
        delete[] arr2;
        delete[] arr;
        delete[] un;
    }
    void input();
    void subset();
    void findUnion();
    void Intersection();
    void Complement();
    void Difference();
};
void Q2::input()
{
    cout << "Enter " << l1 << " elements in 1st Set" << endl;
    for (int i = 0; i < l1; i++)
        cin >> arr1[i];
    cout << "Enter " << l2 << " elements in 2nd Set" << endl;
    for (int i = 0; i < l2; i++)
        cin >> arr2[i];
}
void Q2::subset()
{
    int c = 0;
    bool f = false;
    if (l1 <= l2)
    {
        for (int i; i < l1; i++)
        {
            for (int j = 0; j < l2; j++)
            {
                if (arr1[i] == arr2[j])
                    c++;
            }
        }
        if (c == l1)
        {
            cout << "Set 1 is a subset of Set 2" << endl;
            f = true;
        }
    }
    else
    {
        for (int i; i < l2; i++)
        {
            for (int j = 0; j < l1; j++)
            {
                if (arr1[j] == arr2[i])
                    c++;
            }
        }
        if (c == l2)
        {
            cout << "Set 2 is a subset of Set 1" << endl;
            f = true;
        }
    }
    if (!f)
        cout << "No set is a subset of anyone" << endl;
}
void Q2::findUnion()
{
    for (int i = 0; i < l1; i++)
        arr[i] = arr1[i];
    for (int i = 0; i < l2; i++)
        arr[i + l1] = arr2[i];

    int c = 0;
    for (int i = 0; i < l3; i++)
    {
        int f = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i] == un[j])
            {
                f = 1;
            }
        }
        if (f == 0)
        {
            un[c] = arr[i];
            c++;
        }
    }
    delete[] arr;
    arr = new int[c];
    for (int i = 0; i < c; i++)
        arr[i] = un[i];
    delete[] un;
    l3 = c;
    cout << "Union of Set 1 and Set 2" << endl;
    cout << "{";
    for (int i = 0; i < l3; i++)
        cout << arr[i] << ", ";
    cout << "}";
}
void Q2::Intersection()
{
    int size = (l1 + l2) - l3;
    delete[] arr;
    arr = new int[size];
    int c = 0;
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (arr1[i] == arr2[j])
                arr[c++] = arr1[i];
        }
    }
    cout << "{";
    for (int i = 0; i < c; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "}";
}
void Q2::Complement()
{
    delete[] arr;
    int size;
    bool f = false;
    cout << "Enter size of a universal set: ";
    cin >> size;
    arr = new int[size];
    cout << "Enter elements in the Uni Set" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Complement of Set 1: " << endl;
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        f = false;
        for (int j = 0; j < l1; j++)
        {
            if (arr[i] == arr1[j])
            {
                f = true;
            }
        }
        if (f == false)
            cout << arr[i] << ", ";
    }
    cout << "}" << endl;

    cout << "Complement of Set 2: " << endl;
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        f = false;
        for (int j = 0; j < l2; j++)
        {
            if (arr[i] == arr2[j])
            {
                f = true;
            }
        }
        if (!f)
            cout << arr[i] << ", ";
    }
    cout << "}";
}

int main()
{
    int size1, size2;
    cout << "Enter size of Set 1: ";
    cin >> size1;
    cout << "Enter size of Set 2: ";
    cin >> size2;
    Q2 ob(size1, size2);
    ob.input();

    while (true)
    {
        cout << "1 to check subset, 2 to Find Union, 3 to check Intersection, 4 to find Complement and 0 to end program" << endl;
        int c = 0;
        cin >> c;
        if (c == 1)
            ob.subset();
        else if (c == 2)
            ob.findUnion();
        else if (c == 3)
            ob.Intersection();
        else if (c == 4)
            ob.Complement();
        else if (c == 0)
            break;
        else
            cout << "Enter correct choice" << endl;
    }
}