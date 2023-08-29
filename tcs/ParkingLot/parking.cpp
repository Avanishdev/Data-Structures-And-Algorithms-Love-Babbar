#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;
    vector<vector<int>> matrix = {
        {0, 1, 0},
        {1, 1, 0},
        {1, 1, 1}};
    int maxOnes = INT_MIN;
    int indx;
    for (int i = 0; i < row; i++)
    {
        int countOnes = 0;
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 1)
            {
                countOnes++;
            }
        }
        if (countOnes > maxOnes)
        {
            maxOnes = countOnes;
            indx = i;
        }
    }
    cout << maxOnes << " " << indx << endl;
    return 0;
}