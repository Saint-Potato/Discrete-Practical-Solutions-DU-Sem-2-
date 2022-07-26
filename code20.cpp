#include <iostream>
using namespace std;
int main()
{
    int i, m, l;
    cout << "Value of m -> ";
    cin >> m;
    cout << "No. of internal nodes -> ";
    cin >> i;
    cout << "No. of leaf nodes -> " << (i * (m - 1) + 1) << endl;

    return 0;
}