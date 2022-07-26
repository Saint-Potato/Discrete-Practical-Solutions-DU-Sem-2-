#include <iostream>
#include "code3.cpp"
using namespace std;
class Q4 : public Q3
{
};

int main()
{
    int s;
    cout << "Enter cardinality of set :";
    cin >> s;
    Q3 ob(s);
    ob.inputArr();
    ob.setSize();
    ob.display();
    ob.inputRel();
    ob.dispM();
    while (true)
    {
        char yn = 'a';
        int cc = 2;
        int swi;
        cout << "1.Equivalance; 2.Poset; 3.None" << endl;
        cin >> swi;
        switch (swi)
        {
        case 1:
            if (ob.checkRefl() && ob.checkSymm() && ob.checkTrans())
                cout << "Relation is Equivalance" << endl;
            else
            {
                cout << "Relation is not Equivanance because ";
                if (!ob.checkRefl())
                    cout << "it is not Reflexvive ";
                if (!ob.checkSymm())
                    cout << "it is not Symmetric ";
                if (!ob.checkTrans())
                    cout << "it is not Transitive ";
                cout << endl;
            }
            break;
        case 2:
            if (ob.checkRefl() && ob.checkAntiSymm() && ob.checkTrans())
                cout << "Relation is Poset" << endl;
            else
            {
                cout << "Relation is not a Poset because ";
                if (!ob.checkRefl())
                    cout << "it is not Reflexvive ";
                if (!ob.checkAntiSymm())
                    cout << "it is not Anti-Symmetric ";
                if (!ob.checkTrans())
                    cout << "it is not Transitive ";
                cout << endl;
            }
            break;
        case 3:
            if (!ob.checkRefl() && !ob.checkTrans() && ((!ob.checkAntiSymm() || !ob.checkSymm())))
                cout << "Relation is None" << endl;
            else
            {
                cout << "Relation is not None because ";
                if (ob.checkRefl() && ob.checkAntiSymm() && ob.checkTrans())
                    cout << "it is a Poset ";
                if (ob.checkRefl() && ob.checkSymm() && ob.checkTrans())
                    cout << "it is an Equivalance relation ";
                cout << endl;
            }
            break;
        default:
            cout << "Wrong Choice!" << endl;
        }

        while (true)
        {
            cout << "Do you want to continue?(Y/N)" << endl;
            cin >> yn;
            if (yn == 'N' || yn == 'n')
            {
                cc = 0;
                break;
            }
            else if (yn == 'Y' || yn == 'y')
            {
                cc == 1;
                break;
            }
            else
            {
                cout << "Invalid input" << endl;
                continue;
            }
        }
        if (cc == 0)
            break;
    }
    return 0;
}