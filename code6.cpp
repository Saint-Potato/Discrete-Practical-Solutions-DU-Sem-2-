#include <iostream>
using namespace std;
void towerOfHanoi(int n, string src, string helper, string dest)
{
    // base condition
    if (n == 1)
    {
        cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    // recursive relation
    towerOfHanoi(n - 1, src, dest, helper);
    cout << "Transfer disk " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, src, dest);
};
int main()
{
    towerOfHanoi(3, "S", "H", "D");

    return 0;
}
