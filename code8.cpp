#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 5;
    int arr[n] = {15, 59, 9, 23, 1};

    int tc = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int c = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                c++;
                tc++;
            }
        }
        cout << "After Pass -> " << i + 1<<" array -> ";
        printArray(arr, n);
        cout << "Total Comparison after pass " << i + 1 << " -> " << c<<endl;
    }
    cout << "Total Comparison -> " << tc << endl;

    return 0;
}