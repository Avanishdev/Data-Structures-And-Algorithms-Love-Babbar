#include<iostream>
#include<vector>
using namespace std;
int main(){
    //count occurence
    int value=3;
    vector<int> nums={3,2,2,3};
    int size=nums.size();
    int count=0;
    for(int i=0;i<size;i++){
        if(nums[i]==value){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}