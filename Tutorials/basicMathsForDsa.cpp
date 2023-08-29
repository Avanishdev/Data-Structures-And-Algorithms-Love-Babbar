// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     void printVector(vector<bool> arr)
//     {
//         for (int i = 0; i < arr.size(); i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
//     {
//         vector<bool> ans(candies.size());
//         // maximum element
//         int maxi = INT_MIN;
//         for (int i = 0; i < candies.size(); i++)
//         {
//             if (maxi < candies[i])
//             {
//                 maxi = candies[i];
//             }
//         }

//         for (int i = 0; i < candies.size(); i++)
//         {
//             if (candies[i] + extraCandies >= maxi)
//             {
//                 ans[i] = true;
//             }
//             else
//             {
//                 ans[i] = false;
//             }
//         }
//         printVector(ans);
//         return ans;
//     }
// };

// int main()
// {
//     vector<int> candies = {2, 3, 5, 1, 3};
//     int extraCandies = 3;
//     Solution obj;
//     obj.kidsWithCandies(candies, extraCandies);
// }

