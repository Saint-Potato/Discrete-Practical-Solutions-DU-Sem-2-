// Declare 2D array
// Take the the size of the array as input
// Input 1 set of the size entered by user
// Input the number of elements in relation (ne)
// Now, enter the 'ne' elements ain form of a,b
// Print the relation in the form of a matrix
#include <iostream>
using namespace std;
class Q3
{
    int size;
    int ne;
    int a, b, aa, bb;
    int *arr;
    int **Rel;

public:
    void inputArr();
    void setSize();
    void inputRel();
    void display();
    void dispM();
    bool checkSymm();
    bool checkRefl();
    bool checkAntiSymm();
    bool checkTrans();
    Q3(int x)
    {
        size = x;
        arr = new int[size];
        Rel = new int *[size];
        for (int i = 0; i < size; i++)
        {
            Rel[i] = new int[size];
        }
    }
    ~Q3()
    {
        for (int i = 0; i < size; i++)
        {
            delete Rel[i];
        }
        delete[] Rel;
        delete[] arr;
        // cout << "Destructor called";
    }
};
bool Q3::checkSymm()
{
    bool f = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (Rel[i][j] != Rel[j][i])
            {
                f = false;
                break;
            }
    }
    return f;
}
bool Q3::checkAntiSymm()
{
    bool f = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            if (Rel[i][j] == Rel[j][i])
            {
                if (i != j)
                {
                    f = false;
                    break;
                }
            }
    }
    return f;
}
bool Q3::checkRefl()
{
    bool f = true;
    for (int i = 0; i < size; i++)
    {
        if (Rel[i][i] != 1)
        {
            f = false;
            break;
        }
    }
    return f;
}
bool Q3::checkTrans()
{
    bool f = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (Rel[i][j] == 1 && Rel[j][k] == 1)
                {
                    if (Rel[i][k] != 1)
                    {
                        f = false;
                        break;
                    }
                }
            }
            if (!f)
                break;
        }
        if (!f)
            break;
    }
    return f;
}
void Q3::setSize()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            Rel[i][j] = 0;
        }
    }
}
void Q3::inputArr()
{

    cout << "Enter the elements of the set" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << endl;
}

void Q3::inputRel()
{
    cout << "Enter number of elements in the relation" << endl;
    cin >> ne;
    cout << "Enter the elements of the Relation" << endl;
    for (int k = 0; k < ne; k++)
    {
        cin >> a;
        cin >> b;
        for (int j = 0; j < size; j++)
        {
            if (a == arr[j])
                aa = j;
            if (b == arr[j])
                bb = j;
        }
        Rel[aa][bb] = 1;
    }
}
void Q3::display()
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << "}";
    cout << endl;
}
void Q3::dispM()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << Rel[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int s;
    cout << "Enter cardinality of set :";
    cin >> s;
    Q3 ob(s);

    ob.inputArr();
    ob.setSize();
    ob.display();
    ob.inputRel();
    ob.dispM();
    while (true)
    {
        char yn = 'a';
        int cc = 2;
        int swi;
        cout << "1.Reflexivity; 2.Symmetricity; 3.Anti-Symm; 4.Transitivity" << endl;
        cin >> swi;
        switch (swi)
        {
        case 1:
            if (ob.checkRefl())
                cout << "Relation is Reflexive" << endl;
            else
                cout << "Relation is not Reflexive" << endl;
            break;
        case 2:
            if (ob.checkSymm())
                cout << "Relation is Symmetric" << endl;
            else
                cout << "Relation is not Symmetric" << endl;
            break;
        case 3:
            if (ob.checkAntiSymm())
                cout << "Relation is Anti-Symmetric" << endl;
            else
                cout << "Relation is not Anti-Symmetric" << endl;
            break;
        case 4:
            if (ob.checkTrans())
                cout << "Relation is Transitive" << endl;
            else
                cout << "Relation is not Transitive" << endl;
            break;
        default:
            cout << "Wrong Choice!" << endl;
        }

        while (true)
        {
            cout << "Do you want to continue?(Y/N)" << endl;
            cin >> yn;
            if (yn == 'N' || yn == 'n')
            {
                cc = 0;
                break;
            }
            else if (yn == 'Y' || yn == 'y')
            {
                cc == 1;
                break;
            }
            else
            {
                cout << "Invalid input" << endl;
                continue;
            }
        }
        if (cc == 0)
            break;
    }
    return 0;
}