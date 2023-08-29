// decimal to binary
#include <bits/stdc++.h>
using namespace std;
int getBinary(int n)
{
    // By Division Method
    // int i = 0;
    // int ans = 0;
    // while (n > 0)
    // {
    //     int digit = n % 2;//is Divisible or not.
    //     ans = digit * pow(10, i) + ans;
    //     i++;
    //     n = n / 2;
    // }
    // return ans;

    // By Bitwise Method
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1; // Or rem store karke bit nikalo
        ans = bit * pow(10, i) + ans;
        i++;
        n = n >> 1; // right shift ==> divide by 2
    }
    return ans;
}
int getDecimal(int n)
{
    // By Division Method
    // int ans = 0;
    // int i = 0;
    // while (n)
    // {
    //     int digit = n % 10; // right-most significant bit
    //     ans = ans + digit * pow(2, i++);
    //     n = n / 10;
    // }
    // return ans;

    // By Bitwise Method
    // int ans = 0;
    // int i = 0;
    // while (n > 0)
    // {

    //     if (n % 10 == 1)
    //     {
    //         int dec=1<<i;
    //         cout<<dec<<endl;
    //         ans = ans + dec;

    //     }
    //     i++;
    //     n = n / 10;
    // }
    // return ans;

    // Homework
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;

        ans = ans + bit * (pow(2, i));

        i++;

        n = n / 10; // divide by 10
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    // cout << getBinary(n) << endl;
    cout << getDecimal(n) << endl;

    return 0;
}
