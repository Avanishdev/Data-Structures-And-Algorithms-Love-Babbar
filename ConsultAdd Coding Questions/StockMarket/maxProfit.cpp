#include <bits/stdc++.h>
using namespace std;
int getMaxProfit(vector<int> &P)
{
    // int maxProfit=INT_MIN;
    // for(int i=0;i<P.size();i++){
    //     int profit=0;
    //     for(int j=i+1;j<P.size();j++){
    //         profit=P[j]-P[i];
    //         if(profit<0){
    //             continue;
    //         }
    //         if(profit>maxProfit){
    //             maxProfit=profit;
    //         }
    //     }
    // }
    // return maxProfit==INT_MIN?-1:maxProfit;
    // OPTIMAL
    int mini = INT_MAX;
    int maxProfit = INT_MIN;
    int profit = 0;
    for (int i = 0; i < P.size(); i++)
    {
        if (P[i] < mini)
        {
            mini = P[i];
        }
        profit = P[i] - mini; // set min CP or mini
        if (profit > maxProfit)
        {
            maxProfit = profit;
        }
    }
    return maxProfit==INT_MIN?-1:maxProfit;
}
int main()
{
    // vector<int> P = {1,6,2};
    vector<int> P = {7,1,5,3,6,4};
    cout << getMaxProfit(P) << endl;
    return 0;
}