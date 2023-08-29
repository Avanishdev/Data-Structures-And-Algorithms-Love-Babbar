#include <iostream>
#include <vector>
#include <string.h >
using namespace std;
// void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
//     cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
//     towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); // fix
// }
// int main()
// {
//     int n;
//     cin >> n;
//     towerOfHanoi(n, 'A', 'C', 'B');
//     return 0;
// }

// bool isSafePlace(int n, vector<string> &nQueens, int row, int col)
// {
//     for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
//     {
//         if (nQueens[i][j] == 'Q')
//         {
//             return false;
//         }
//     }
//     for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
//     {
//         if (nQueens[i][j] == 'Q')
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void solveNQueens(int n, vector<vector<string>> &output, vector<string> &nQueens, int row)
// {
//     if (row == n)
//     {
//         output.push_back(nQueens);
//         return;
//     }
//     for (int col = 0; col < n; col++)
//     {
//         if (isSafePlace(n, nQueens, row, col))
//         {
//             nQueens[row][col] = 'Q';
//             solveNQueens(n, output, nQueens, row + 1);
//         }
//     }
// }
// vector<vector<string>> solve(int n)
// {
//     vector<vector<string>> output;
//     vector<string> nQueens(n, string(n, '.'));
//     solveNQueens(n, output, nQueens, 0);
//     return output;
// }

// int main()
// {
//     vector<vector<string>> ans = solve(4);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[0].size(); j++)
//         {
//             cout << ans[i][j];
//             cout << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// void replacePi(char input[]) {
//     //bc
// 	if(input[0] == '\0'){
//         return;
//     }
//     //processing
//     if(input[0] == 'p' && input[1] == 'i'){
//         int n = strlen(input);
//         int i = 2;
//         for(i = n+1; i >= 2; i--){
//             input[i] = input[i-2];
//         }
//         input[n+2] = '\0';
//         input[0] = '3';
//         input[1] = '.';
//         input[2] = '1';
//         input[3] = '4';
//         replacePi(input + 3);
//     }
//     else
//     replacePi(input + 1);
// }
// int main(){
//     char ch[]="2pir";
//     cout<<ch<<endl;
//     replacePi(ch);
//     cout<<ch<<endl;
//     return 0;
// }

// int rec(char input[],int n){
//     if(input[0] == '\0')
//         return n;
//     n = n * 10 + input[0]-48;
//     return rec(input + 1, n);
// }

// int stringToNumber(char input[]) {
//     int n = 0;
//     return rec(input, n);
// }

// int main(){
//     char ch[]="123";
//     cout<<stringToNumber(ch);
//     return 0;
// }

// int multiplyNumbers(int m, int n) {
//     if(n <= 0 )
//         return 0;
//     return m + multiplyNumbers(m,n-1);
// }
// int main(){
//     cout<<multiplyNumbers(6,2)<<endl;
//     return 0;
// }

