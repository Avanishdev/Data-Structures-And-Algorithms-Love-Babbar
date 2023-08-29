#include<bits/stdc++.h>
using namespace std;
int main(){
    int A;
    cin>>A;
    int B;
    cin>>B;
    //fact A to B
    int fact=1;
    for(int i=A;i<=B;i++){
        fact*=i;
    }
    // C=D*10^E
    int E=0;
    while(1){
        if(fact%10!=0){
            break;
        }
        else{
            E++;
        }
        fact=fact/10;
    }
    cout<<fact<<" * 10^"<<E<<endl;
return 0;
}