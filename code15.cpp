#include <iostream>
#include <cmath>
using namespace std;
class polynomial
{
public:
    int degree;
    // declare array
    int cofficient[];
    void input()
    {
        cout << "Degree of polynomial -> ";
        cin >> degree;
        // gave size to array
        cofficient[degree + 1];
        for (int i = degree; i > -1; i--)
        {
            cout << "Cofficient for x^" << i << " ";
            cin >> cofficient[i];
        }
    }
    void display()
    {
        cout << "Polynomial -> ";
        for (int i = degree; i > -1; i--)
        {
            if (i == 0)
                cout << cofficient[i];
            else if (cofficient[i] > 0)
            {
                cout << cofficient[i] << "x^" << i;
                cout << " + ";
            }
            else if (cofficient[i] < 0)
            {
                cout << cofficient[i] << "x^" << i;
                cout << " - ";
            }
        }
        cout<<endl;
    }
    void evaluate(int x)
    {
        double ans = 0;
        for (int i = degree; i > -1; i--)
        {
            ans += cofficient[i] * pow(x, i);
        }
        cout << "Result -> " << ans;
    }
};
int main()
{
    polynomial p;
    p.input();
    p.display();
    p.evaluate(5);

    return 0;
}
