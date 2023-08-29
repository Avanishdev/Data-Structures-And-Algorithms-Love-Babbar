// #include <iostream>
// #include <limits.h>
// using namespace std;
// int longestSubarrayLength(int arr[])
// {
//     int maxi = INT_MIN;
//     int maxim = INT_MIN;
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int countZeros = 0;
//             int countOnes = 0;
//             for (int k = arr[i]; k <= arr[j]; k++)
//             {
//                 // if (arr[k] == 0)
//                 // {
//                 //     countOnes++;
//                 // }
//                 // if (arr[k] == 1)
//                 // {
//                 //     countOnes++;
//                 // }
//                 cout<<arr[k]<<endl;
//             }
//             // if (countZeros == countOnes)
//             // {
//             //     maxim = countOnes + countZeros;
//             // }
//         }
//         // if (maxim > maxi)
//         // {
//         //     maxi = maxim;
//         // }
//     }
//     return maxi;
// }
// int main()
// {
//     int arr[] = {0, 1, 1, 0, 1, 1, 1, 0};
//     cout << longestSubarrayLength(arr) << endl;
//     return 0;
// }