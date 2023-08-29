#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    // int E[] = {7, 0, 5, 1, 3};
    // int L[] = {1, 2, 1, 3, 4};
    int E[] = {3, 5, 2, 0};
    int L[] = {0, 2, 4, 4};
    int num = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < T; i++)
    {
        // entry
        num += E[i];
        // exit
        num = num - L[i];
        // ternary opeartor
        maxi = num > maxi ? num : maxi;
    }
    cout << maxi << endl;
    return 0;
}