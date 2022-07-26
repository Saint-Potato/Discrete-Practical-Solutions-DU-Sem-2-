#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of vertices: ";
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int deg, c = 0;
    for (int i = 0; i < n; i++)
    {
        deg = 0;
        for (int j = 0; j < n; j++)
        {
            deg = deg + mat[i][j];
        }
        if (deg % 2 != 0)
        {
            c++;
        }
    }
    if (c == 0)
    {
        cout << "Graph has an Eulerian circuit.";
    }
    else if (c <= 2)
    {
        cout << "Graph has an Eulerian Path.\n";
    }
    else
        cout << "Graph has neither a Eulerian circuit nor path.\n";
}