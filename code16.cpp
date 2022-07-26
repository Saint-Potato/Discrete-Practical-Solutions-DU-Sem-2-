#include <iostream>
using namespace std;
class completeGraph
{
public:
    int m = 0;
    // declare & initalize 2d array to 1
    int arr[1][1] = {0};
    void input()
    {
        cout << "Enter number of vertices -> ";
        cin >> m;
        // initalizing the 2d array to value m
        arr[m][m];
    }
    void matrix()
    {
        // taking input of matrix
        cout << "Enter the matrix ->" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        // printing the matrix
        cout << "Your Entered matrix -> " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    void checkComplete()
    {
        bool check = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // check all value of matrix except diagonal values
                if (i != j)
                {
                    if (arr[i][j] != 1)
                    {
                        check = 0;
                        break;
                    }
                }
                // check diagonal values of matrix
                else
                {
                    if (arr[i][j] != 0)
                    {
                        check = 0;
                        break;
                    }
                }
            }
        }
        string ans = (check==1)?"Given graph is complete graph":"Given graph isn't complete graph";
        cout<<ans;
    }
};
int main()
{
    completeGraph c;
    c.input();
    c.matrix();
    c.checkComplete();

    return 0;
}