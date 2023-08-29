// area of circle
//  #include<bits/stdc++.h>
//  using namespace std;
//  float getArea(float R){
//      float area=3.14*R*R;
//      return area;
//  }
//  int main(){
//      float R;
//      cin>>R;
//      cout<<"Area of circle of radius "<<R<<" is :- "<<getArea(R)<<endl;

//     return 0;
// }

// even or odd number
//  #include<iostream>
//  using namespace std;
//  bool isEven(int n){
//      if(n%2==0){
//          return true;
//      }
//      return false;
//  }
//  int main(){
//  int n;
//  cin>>n;
//  if(isEven(n)){
//      cout<<"The number is even"<<endl;
//  }
//  else{
//      cout<<"The number is odd"<<endl;
//  }
//  return 0;
//  }

// factorial of number
//  #include<iostream>
//  using namespace std;
//  int getFactorial(int n){
//      int factorial=1;
//     for(int i=1;i<=n;i++){
//  factorial=factorial*i;
//     }
//     return factorial;
//  }
//  int main(){
//  int n;
//  cin>>n;
//  cout<<"Factorial of "<<n<<" is "<<getFactorial(n)<<endl;
//  return 0;
//  }

// prime or not
//  #include<iostream>
//  using namespace std;
//  bool isPrime(int n){
//      for(int i=2;i<n;i++){
//          if(n%i==0){
//              return false;
//          }
//      }
//      return true;
//  }
//  int main(){
//  int n;
//  cin>>n;
//  if(isPrime(n)){
//  cout<<"The number is prime"<<endl;
//  }
//  else{
//      cout<<"The number is not prime"<<endl;
//  }
//  return 0;
//  }

// 1 to N prime numbers
//  #include<iostream>
//  using namespace std;
//  bool isPrime(int n){
//      for(int i=2;i<n;i++){
//          if(n%i==0){
//             return false;
//          }
//      }
//     return true;
//  }
//  int main(){
//  int n;
//  cin>>n;
//  for(int i=1;i<=n;i++){
//      if(isPrime(i)){
//          cout<<i<<" ";
//      }
//  }
//  cout<<endl;
//  return 0;
//  }

// reverse a integer
// #include <iostream>
// using namespace std;
// int reverse(int n)
// {
//     int ans = 0;
//     int digit;
//     bool isNeg=false;//by default
//     if(n<=INT32_MIN){
//         return 0;
//     }
    
//     if(n<0){
//         isNeg=true;
//         n=-n;// |mod| le liya
//     }
//     while (n > 0)
//     {
//         if(ans>INT32_MAX/10){
//             return 0;
//         }
//         digit = n % 10;
//         ans = ans * 10 + digit; //
//         n = n / 10;
//     }
//     return isNeg?-ans:ans;
// }
// int main()
// {
//     int n; // 567
//     cin >> n;

//     cout<<reverse(n)<<endl;

//     return 0;
// }

// //set k th bit
// #include<iostream>
// using namespace std;
// int setBit(int n,int k){
//     int mask=1<<k;
//     int ans=n | mask;
//     return ans;
// }
// int main(){
// int n,k;
// cin>>n;
// cin>>k;
// cout<<setBit(n,k)<<endl;
// return 0;
// }

//convert celsius to fahrenheit
// #include<iostream>
// using namespace std;
// double getFahrenheit(double n){
// double k = n + 273.15;
// double f = n * 1.80 + 32.00;
// return f;
// }
// int main(){
// double n;
// cin>>n;
// cout<<getFahrenheit(n)<<endl;
// return 0;
// }

