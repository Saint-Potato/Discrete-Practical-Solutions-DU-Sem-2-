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
    void degree(){
        int inDeg[m] = {0};
        int outDeg[m] = {0};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // sum of rows = in degree(end)
                // sum of columns = out degree(start)
            }
            
        }
        
    }
};
int main()
{
    completeGraph c;
    c.input();
    c.matrix();

    return 0;
}