#include <iostream>
using namespace std;
int binarySearch(int arr[], int key, int i, int j)
{
    int mid = i + (j - i) / 2;
    // base condition
    if (i > j)
        return -1;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        binarySearch(arr, key, i, mid - 1);
    else if (arr[mid] < key)
        binarySearch(arr, key, mid + 1, j);
}
int main()
{
    int n = 5;
    int arr[n] = {12, 52, 96, 152, 529};
    cout << binarySearch(arr, 152, 0, n - 1);

    return 0;
}