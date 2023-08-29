#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Count unique elements from sorted array
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 7};
    int size = nums.size();
    int count = 1;//first element will be unique always
    for (int i = 0; i < size - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}