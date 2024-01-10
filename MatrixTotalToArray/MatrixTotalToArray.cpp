/*
In this code, we will collect the rows of matrix A and assign them to array B as elements.

Developer. Barış Someroğlu
Date: 10.01.2024 / 3:50 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Please Enter Size of Matrix: ";
    cin >> n;

    cout << "\n";

    vector<int> B(n);
    vector<vector<int>> A(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Please Enter A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

        cout << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        B[i] = 0;

        for (int j = 0; j < n; j++)
        {
            B[i] += A[i][j];
        }

        cout << "Sum of row " << i << ": " << B[i] << "\n";
    }

    return 0;
}
