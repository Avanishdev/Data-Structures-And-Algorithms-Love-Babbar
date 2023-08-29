#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
int findUnique(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int count=1;
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr =   {  1   , 3,   3  ,  4  ,  3 ,   3};
    cout<<findUnique(arr)<<endl;
    return 0;
}