#include <iostream>
using namespace std;
class Q13
{
public:
    int l;
    int *x;
    int *y;
    int *conj_arr;
    int *disj_arr;
    int *xOR_arr;
    int *xnor_arr;
    int *cond_arr;
    int *bicond_arr;
    int *negation_arr1;
    int *negation_arr2;
    int *nand_arr;
    int *nor_arr;
    int c;
    Q13(int len)
    {
        l = len;
        x = new int[l];
        y = new int[l];
        conj_arr = new int[l];
        disj_arr = new int[l];
        xOR_arr = new int[l];
        xnor_arr = new int[l];
        cond_arr = new int[l];
        bicond_arr = new int[l];
        negation_arr1 = new int[l];
        negation_arr2 = new int[l];
        nand_arr = new int[l];
        nor_arr = new int[l];
    }
    ~Q13()
    {
        delete[] x;
        delete[] y;
        delete[] conj_arr;
        delete[] disj_arr;
        delete[] xOR_arr;
        delete[] xnor_arr;
        delete[] cond_arr;
        delete[] bicond_arr;
        delete[] negation_arr1;
        delete[] negation_arr2;
        delete[] nand_arr;
delete[] nor_arr;
    }
    void input();
    void conj();     // and
    void disj();     // or
    void xOR();      // xor
    void xnor();     // xnor
    void cond();     // ~PvQ
    void bicond();   // (~PvQ)^(~QvP)
    void negation(); // not
    void nand();     //!(A&B)
    void nor();      //!(A|B)
    void display();
};

void Q13::input()
{
    cout << "Enter the values in first array" << endl;
    for (int i = 0; i < l; i++)
    {
        cin >> x[i];
    }
    cout << "Enter the values in second array" << endl;
    for (int i = 0; i < l; i++)
    {
        cin >> y[i];
    }
}
void Q13::conj()
{
    for (int i = 0; i < l; i++)
        conj_arr[i] = x[i] & y[i];
}
void Q13::nand()
{
    for (int i = 0; i < l; i++)
        nand_arr[i] = !(x[i] & y[i]);
}
void Q13::disj()
{
    for (int i = 0; i < l; i++)
        disj_arr[i] = x[i] | y[i];
}
void Q13::nor()
{
    for (int i = 0; i < l; i++)
        nor_arr[i] = !(x[i] | y[i]);
}
void Q13::xOR()
{
    for (int i = 0; i < l; i++)
        xOR_arr[i] = (!x[i] & y[i]) | (!y[i] & x[i]);
}
void Q13::xnor()
{
    for (int i = 0; i < l; i++)
        xnor_arr[i] = !(!x[i] & y[i]) | (!y[i] & x[i]);
}
void Q13::cond()
{
    for (int i = 0; i < l; i++)
        cond_arr[i] = (!x[i] | y[i]);
}
void Q13::bicond()
{
    for (int i = 0; i < l; i++)
        bicond_arr[i] = (!x[i] | y[i]) & (!y[i] | x[i]);
}
void Q13::negation()
{
    for (int i = 0; i < l; i++)
    {
        negation_arr1[i] = !x[i];
        negation_arr2[i] = !y[i];
    }
}
void Q13::display()
{
    cout << "X\tY\tConj\tDisj\tXOR\tCond\tBi-Cond\tXNOR\tNeg x\tNeg y\tNAND\tNOR\n";
    for (int i = 0; i < l; i++)
        cout << x[i] << "\t" << y[i] << "\t" << conj_arr[i] << "\t" << disj_arr[i] << "\t" << xOR_arr[i] << "\t" << cond_arr[i] << "\t" << bicond_arr[i] << "\t" << xnor_arr[i] << "\t" << negation_arr1[i] << "\t" << negation_arr2[i] << "\t " << nand_arr[i] << "\t " << nor_arr[i] << "\t "
             << "\n";
}
int main()
{
    int num;
    cout << "Enter number of elements to be accepted: ";
    cin >> num;
    Q13 ob(num);
    ob.input();
    ob.conj();
    ob.disj();
    ob.xOR();
    ob.xnor();
    ob.cond();
    ob.bicond();
    ob.negation();
    ob.nand();
    ob.nor();
    ob.display();
}