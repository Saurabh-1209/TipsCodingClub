#include <iostream>
using namespace std;

int main()
{
    int i{}, j{};
    cout << "Enter rows and columns of matrix:\n";
    int rows{}, columns{};
    cin >> rows >> columns;
    int arr[rows][columns], transposed[columns][rows], temp = columns - 1;
    cout << "Enter " << rows * columns << " elements:\n";
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            cin >> arr[i][j];

    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            transposed[j][i] = arr[i][j];
    cout << "Input array" << endl;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            cout << arr[i][j]<<" ";
            if (j == columns-1)
                cout << endl;
        }
    }
    cout << "Transposed" << endl;
    ;

    for (i = 0; i < columns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            cout << transposed[i][j]<<" ";
            if (j == rows-1)
                cout << endl;
        }
    }
}
