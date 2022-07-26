#include <iostream>
using namespace std;

int fibo(int n)
{
    // base condition
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    // recursive relation
    return fibo(n - 1) + fibo(n - 2);
};

int main()
{
    int num;
    cout << "Enter Number -> ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << fibo(i) << endl;
    }

    return 0;
}
