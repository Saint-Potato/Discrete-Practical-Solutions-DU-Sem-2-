#include <iostream>
using namespace std;
class Q12
{
public:
    int *x;
    int l;
    int summ;
    void sum(int, int, int);
    void display();
    Q12(int size, int sss)
    {
        summ = sss;
        l = size;
        x = new int[size];
    }
};
void Q12::sum(int n, int c, int s)
{
    if (s == n - 1)
    {
        x[s] = c;
        display();
    }
    else
    {
        for (int i = 0; i <= c; i++)
        {
            x[s] = i;
            sum(n, c - i, s + 1);
        }
    }
}
void Q12::display()
{

    for (int i = 0; i < l; i++)
    {
        cout << x[i] << "+";
    }
    cout << "=" << summ << endl;
}
int main()
{
    cout << "Enter n: ";
    int nn;
    cin >> nn;
    cout << "Enter sum: ";
    int ss;
    cin >> ss;
    Q12 ob(nn, ss);
    ob.sum(nn, ss, 0);
}