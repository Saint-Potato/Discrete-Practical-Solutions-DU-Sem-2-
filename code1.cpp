#include <iostream>
#include <cmath>
using namespace std;
void check(char arr[], int n, char key)
{
    bool c = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element is present in this set at position " << i << endl;
            c = true;
        }
    }
    if (!c)
        cout << "Element aren't present in this set" << endl;
}
void powerset(char arr[], int n)
{
    cout << "Power Set of a set -> " << endl;
    int powerSetSize = pow(2, n);

    for (int i = 0; i < powerSetSize; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << arr[j];
        }
        cout << endl;
    }
}
int main()
{
    int size;
    cout << "Size of set -> ";
    cin >> size;
    char set[size];
    cout << "Enter elements of an set -> ";
    for (int i = 0; i < size; i++)
    {
        cin >> set[i];
    }
    char key;
    cout << "Which element you have to check -> ";
    cin >> key;

   
    check(set, size, key);
    powerset(set, size);

    return 0;
}
