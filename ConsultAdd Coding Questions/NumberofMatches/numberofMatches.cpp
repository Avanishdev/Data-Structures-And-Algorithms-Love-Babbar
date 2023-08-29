#include <iostream>
#include <vector>
using namespace std;
vector<int> findNum(vector<int> &A, vector<int> &B)
{
    vector<int> ans;
    int j = 0; // B
    while (j < B.size())
    {
        int count = 0;
        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] <= B[j])
            {
                count++;
            }
        }
        ans.push_back(count);
        j++;
    }
    return ans;
}
int main()
{
    vector<int> A = {1,4,2,4};
    vector<int> B = {3,5};
    vector<int> ans;
    ans = findNum(A, B);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}