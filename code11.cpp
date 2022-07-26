#include <iostream>
using namespace std;
int fact(int n)
{
    // base condition
    if (n == 0 || n == 1)
        return 1;
    // recursive relation
    return n * fact(n - 1);
}
int main()
{
    int p, c, r, n;
    cout << "Value of n (number of terms) -> ";
    cin >> n;
    cout << "Value of r (number of objects to be selected) -> ";
    cin >> r;
    // permutation formula
    p = fact(n) / fact(n - r);
    // combination formula
    c = p / fact(r);
    cout << "Permutation of " << n << " P " << r << " -> " << p << endl;
    cout << "Combination of " << n << " C " << r << " -> " << c << endl;

    return 0;
}