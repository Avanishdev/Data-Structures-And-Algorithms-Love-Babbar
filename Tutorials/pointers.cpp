// //Basic Maths And Pointers
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// vector<bool> sieve(int N){
//     vector<bool> sieve(N+1,true);//N+1 size ki vector banao or sabko true mark kardo
//     sieve[0]=sieve[1]=false;
//     for(int i=2;i*i<=N;i++){//N included
//     if(sieve[i]){
//         int j=i*i;//optimized
//         while(j<=N){
//             sieve[j]=false;
//             j+=i;// for i=2 j=4 j=4+2=6
//         }
//     }
//     }
//     return sieve;
// }
// vector<bool> segSieve(int L,int R){
    
//     vector<bool> Sieve=sieve(sqrt(R));
//     vector<int> basePrimes;
//     for(int i=0;i<Sieve.size();i++){
//         if(Sieve[i]){
//             basePrimes.push_back(i);
//         }
//     }

//     vector<bool> segsieve(R-L+1,true);
//     if(L==0 ||L==1){
//         segsieve[L]=false;
//     }

//     for(auto prime:basePrimes){
//         int first_Multiple=(L/prime)*prime;
//         if(first_Multiple<L){
//             first_Multiple+=prime;
//         }
//         int j=max(prime*prime,first_Multiple);
//         while(j<=R){
//             segsieve[j-L]=false;//logic=>110-->0
//             j+=prime;
//         }
//     }
    

//     return segsieve;
// }
// int main(){
//     int L=110;
//     int R=130;
//     vector<bool> primeNo;
//     primeNo=segSieve(L,R);
//     for(int i=0;i<primeNo.size();i++){
//         if(primeNo[i]){
//              cout<<i+L<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }




// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++
// // #define mod 1000000007
// class Solution{
// public:
//     vector<bool> Sieve(int n){
//         vector<bool> sieve(n+1,true);//vector of size n+1 and initially marked as true
//         //which indicates all numbers within 0-(n+1) are primenos
        
//         sieve[0]=sieve[1]=false;//these aren't prime nos
        
//         for(int i=2;i*i<=n;i++){//sqrt(n) bhi prime ho sakta he isliye equalto or optimization
        
//             if(sieve[i]){//if primeno
//                 int j=i*i;//optimized tarika
                
//                 while(j<=n){
//                     sieve[j]=false;//jitne bhi multiples h i ke unko false mark kardo equalto n tak
//                     j+=i;//i=2 j=4 j=4+2=6//prime
//                 }
//             }
//         }
//         return sieve;
//     }
//     vector<bool> segSieve(long long L, long long R){
//         vector<bool> sieve=Sieve(sqrt(R));//R hi end hai
//         vector<int> basePrimes;//basePrimes ko ek sath karo
        
//         for(int i=0;i<sieve.size();i++){
//             if(sieve[i]){
//                 basePrimes.push_back(i);//sieve[i]-->true/false
//             }
//         }
        
//         vector<bool> Segsieve(R-L+1,true);//range me he 10^6
        
//         if(L==0 || L==1){
//             Segsieve[L]=false;
//         }
        
//         for(auto prime:basePrimes){
//           int firstMultiple=(L/prime)*prime;//i*i
        
        
//         if(firstMultiple<L){
//             firstMultiple+=prime;//prime=3 firstMultiple=111 exceptional case
//             //range me lao
//         }
        
//         int j=max(firstMultiple,prime*prime);//dono tarike se nikal liya therefore safe side
        
//         while(j<=R){
//             Segsieve[j-L]=false;//110-->0
//             j+=prime;//j+=i
//         }
        
//         }
//         return Segsieve;
//     }
//     long long primeProduct(long long L, long long R){
//         // code here
//         vector<bool> sieve=segSieve(L,R);
        
//         vector<int> primes;
        
//         for(int i=0;i<sieve.size();i++){
//             if(sieve[i]){
//                 primes.push_back(i);//sieve[i]-->true/false
//             }
//         }
        
//         long long ans=1;
        
//         for(int i=0;i<primes.size();i++){
//             ans*=primes[i];
//         }
        
//         return ans%(10^9+7);
        
//     }
// };


// // class Solution{
// // public:
// //     bool isPrime(long long n)
// //     {
// //         if(n<=1)
// //         return false;
        
// //         for(int i=2;i<=sqrt(n);i++)
// //         {
// //             if(n%i==0)
// //             return false;
// //         }
// //         return true;
// //     }
    
// //     long long primeProduct(long long l, long long r){
// //         // code here
// //         long long prod=1;
        
// //         for(int i=l;i<=r;i++)
// //         {
// //             if(isPrime(i))
// //             prod=(prod*i)%1000000007;
// //         }
// //         return prod;
// //     }
// // };

// //{ Driver Code Starts.

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long L, R;
//         cin>>L>>R;
        
//         Solution ob;
//         cout<<ob.primeProduct(L, R)<<"\n";
//     }
//     return 0;
// }
// // } Driver Code Ends

#include<bits/stdc++.h>
using namespace std;
int main(){

char c[]="xyz";
char* ch=&c[0];
cout<<c<<endl;//-->"xyz"
cout<<*c<<endl;

return 0;
}