#include <iostream>
#include <vector>
using namespace std;
bool isSafePlace(int n, vector<string> &nQueens, int row, int col)
{
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (nQueens[i][j] == 'Q')
        {
            return false;
        }
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (nQueens[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}
void solveNQueens(int n, vector<vector<string>> &output, vector<string> &nQueens, int row)
{
    if (row == n)
    {
        output.push_back(nQueens);
        return;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafePlace(n, nQueens, row, col))
        {
            nQueens[row][col] = 'Q';
            solveNQueens(n, output, nQueens, row + 1);
        }
    }
}
vector<vector<string>> solve(int n)
{
    vector<vector<string>> output;
    vector<string> nQueens(n, string(n, '.'));
    solveNQueens(n, output, nQueens, 0);
    return output;
}
int main()
{
    int N = 4;
    vector<vector<string>> ans = solve(N);
    for (int i = 0; i < ans.size(); i++)
    {
        for (auto str : ans[i])
        {
            cout << str <<endl;
        }
        // cout<<endl;
    }
    
    return 0;
}