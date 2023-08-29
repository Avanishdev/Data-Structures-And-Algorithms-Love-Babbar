// #include<iostream>
// #include<math.h>
// using namespace std;
// long function(int N){
// //base case
// if(N==0){
//     return 1;
// }
// if(N==1){
//     return 2;
// }
// //ek step solve kardo baki recursion sambhal lega
// long ans=2*function(N-1);
// //recursive call
// return ans;
// }
// int main(){
// int N=4;
// cout<<function(N)<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int N){
//     //base case
//     if(N==0){
//         return 0;
//     }
//     if(N==1){
//         return 1;
//     }
//     //ek step solve kardo or recursive call
//     int ans=N*factorial(N-1);
//     return ans;
// }
// int main(){
// int N=5;
// cout<<factorial(N)<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int N){
//     //base case
//     if(N==0){
//         return ;
//     }
//     //ek step solve karo
//     cout<<N<<" ";
//     //recursive call
//     reverse(N-1);
// }
// int main(){
// int N=10;
// reverse(N);
// return 0;
// }

// #include <iostream>
// using namespace std;
// int fibonacci(int N)
// {
//     // BC
//     if (N == 0 || N == 1)
//     {
//         return N;
//     }
//     // recursive call
//     return fibonacci(N - 1) + fibonacci(N - 2);
// }
// int main()
// {
//     int N = 13;
//     for (int i = 0; i < N; i++)
//     {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void printArray(int a[], int size, int i)
// {
//     // BC
//     if (i >= size)
//     {
//         return;
//     }
//     // processing
//     cout << a[i] << " ";
//     // recursive call
//     printArray(a , size , i + 1);
// }
// void printArray(int a[],int size){
//     //BC
//     if(size==0){
//         return;
//     }
//     //processing
//     cout<<a[0]<<" ";
//     //recursive call
//     printArray(a+1,size-1);
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40};
//     int size = sizeof(arr) / sizeof(int);
//     printArray(arr, size, 0);
//     cout<<endl;
//     printArray(arr, size);
//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int getMax(int a[],int size,int maxi){
//     //BC
//     if(size==0){
//         return maxi;
//     }
//     //processing
//     if(maxi<a[0]){
//         maxi=a[0];
//     }
//     //recursive call
//     return getMax(a+1,size-1,maxi);
// }
// int main(){
//     int arr[]={10,50,30,40};
//     int size=sizeof(arr)/sizeof(int);
//     int maxi=INT_MIN;
//     cout<<getMax(arr,size,maxi)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool isPresent(string &str, char &key, int start)
// {
//     // BC
//     if (start >= str.size())
//     {
//         return false;
//     }
//     // processing
//     if ( str[start]==key)
//     {
//        cout<<start<<" ";//return index||cout<<index
//     }

//     // recursive call
//     isPresent(str, key, start + 1);
// }
// int main()
// {
//     string s = "lovebabbar";
//     char key;
//     cin >> key;
//     int start = 0;
//     cout << isPresent(s, key, start) << endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void printDigits(int N,vector<int> &ans){

//     //BC
//     if(N==0){
//         return;
//     }
//     //processing
//     // cout<<N%10<<endl;
//     ans.push_back(N%10);
//     //recursive call
//     printDigits(N/10,ans);
// }
// void printVector(vector<int> &ans,int s,int e){//by reference
// //BC
// if(s<e){
//     return;
// }
// //processing
// cout<<ans[s]<<" ";
// //recursive call
// printVector(ans,s-1,e);
// }
// int main(){
//     int N;
//     cin>>N;
//     vector<int> ans;
//     printDigits(N,ans);
//     //reverse
//     printVector(ans,ans.size()-1,0);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// int a=0647;//0647 is octal value that represents the decimal value 423
// cout<<a<<endl;

// return 0;
// }

// #include<iostream>
// using namespace std;
// bool isSorted(int arr[],int n){
//     //BC
//     if(n==0||n==1){
//         return true;
//     }
//     //processing
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     //recursive call
//     isSorted(arr+1,n-1);
// }
// int main(){
//     int a[]={10,20,340,40,50};
//     int n=sizeof(a)/sizeof(int);
//     cout<<isSorted(a,n)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int bs(int ar[], int &key, int s, int e)
// {
//     // BC
//     if (s > e)
//     {
// return -1;
//     }
//         // processing
//         int mid = s + (e - s) / 2;
//         if (ar[mid] == key)
//         {
//             return mid;
//         }
//         // recursive call
//         else if (ar[mid] < key)
//         {
//             return bs(ar, key, mid + 1, e);
//         }
//         else
//         {
//             return bs(ar, key, s, mid - 1);
//         }
//     }

// int main()
// {
//     int a[] = {10, 20, 30, 40, 50};
//     int n = sizeof(a) / sizeof(int);
//     cout << "Enter key" << endl;
//     int key;
//     cin >> key;
//     cout << bs(a, key, 0, n - 1) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void subSequence(string s, int i, string output)
// {
//     // BC
//     if (i >= s.size())
//     {
//         cout << output << endl;
//         return;
//     }
//      // include
//     // output.push_back(s[i]);
//     // subSequence(s, i + 1, output);
//     // output.pop_back();
//     // exclude
//     subSequence(s, i + 1, output);
//     // include
//     output.push_back(s[i]);
//     subSequence(s, i + 1, output);
// }
// int main()
// {
//     string s = "xyz";
//     string output = "";
//     int i = 0;
//     subSequence(s, i, output);
//     return 0;
// }

// coin change problem
// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// // int solve(vector<int> &a, int target)
// // {
// //     // BC
// //     if (target == 0)
// //     {
// //         return 0; // valid
// //     }
// //     if (target < 0)
// //     {
// //         // invalid
// //         return INT_MAX;
// //     }
// //     // processing
// //     int mini = INT_MAX;
// //
// //     for (int i = 0; i < a.size(); i++)
// //     {
// //         int ans = solve(a, target - a[i]);

// //         if (ans != INT_MAX)
// //         {
// //             // return mini < ans ? mini : ans+1;
// //             mini = min(mini, ans + 1);
// //         }
// //     }
// //     return mini;
// // }
// int solve(vector<int> &a, int target, int ans)
// {

//     // BC
//     if (ans == target)
//     {
//         return 0;
//     }
//     if (ans > target)
//     {
//         return INT_MAX;
//     }
//     // processing
//     int mini = INT_MAX;
//     for (int i = 0; i < a.size(); i++)
//     {
//         int ans = solve(a, target, ans + a[i]);
//         if (ans != INT_MAX)
//         {
//             mini = min(mini, ans);
//         }
//     }
//     return mini;
// }
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2};
//     int target = 5;
//     int ans = 0;
//     int temp = solve(arr, target, ans);
//     cout << temp << endl;
//     return 0;
// }

// // maximum of these rods
// #include <iostream>
// #include <limits.h>
// using namespace std;
// int solve(int n, int x, int y, int z)
// {
//     // BC
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n < 0)
//     {
//         return INT_MIN;
//     }
//     // kyuki (n-x) karenge to include krenge x ko bhi isliye add 1 to ans
//     int ans1 = solve(n - x, x, y, z) + 1;
//     int ans2 = solve(n - y, x, y, z) + 1;
//     int ans3 = solve(n - z, x, y, z) + 1;

//     int ans = max(ans1, max(ans2, ans3));
//     return ans;
// }
// int main()
// {
//     int n = 7;
//     int x = 5;
//     int y = 2;
//     int z = 2;
//     int ans = solve(n, x, y, z);
//     // negative he to invalid ans
//     // initialize kardo ans=0 se
//     if (ans < 0)
//     {
//         ans = 0;
//     }
//     cout << ans << endl;
//     return 0;
// }

// maximum sum of non-adjacent element
// #include <iostream>
// #include <vector>
// #include <limits.h>
// using namespace std;
// void solve(vector<int> &a, int sum, int i, int &maxi)
// {
//     // BC
//     if (i >= a.size())
//     {
//         maxi = max(maxi, sum);
//         return;
//     }
//     // processing

//     // include
//     solve(a, sum + a[i], i + 2, maxi); // i+2 bcoz non-adjacent
//                                        // exclude
//     solve(a, sum, i + 1, maxi);
// }
// int main()
// {
//     vector<int> arr = {2, 1, 4, 9};
//     int sum = 0;
//     int i = 0;
//     int maxi = INT_MIN;
//     solve(arr, sum, i, maxi);

//     cout << maxi << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int print(int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     return print(n-1)+print(n-2)+print(n-3);
// }
// int main(){
// cout<<print(4);
// return 0;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;
// int solve(string & s, int i, char x, int &ans)
// {
//     // BC
//     if (i >= s.size())
//     {
//         return ans;
//     }
//     // processing
//     if (s[i] == x)
//     {
//         ans = i;
//     }
//     // recusive call
//     solve(s, i + 1, x, ans);
//     return ans;
// }
// int main()
// {
//     string s = "abcddedd";
//     char t[] = "abcddedd";
//     char x = 'b';
//     int i = 0;
//     int ans = -1;
//     cout<<strrchr(t,x+1)<<endl;
//     cout << solve(s, i, x, ans) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void reverse(string &s, int start, int end)
// {
//     // BC
//     if (start >= end)
//     {
//         return;
//     }
//     // processing
//     swap(s[start], s[end]);
//     // recursive call
//     reverse(s, start + 1, end - 1);
// }
// int main()
// {
//     string s = "abcdef";
//     int start = 0;
//     int end = s.size() - 1;
//     cout << "string before reverse funtion " << s << endl;
//     reverse(s, start, end);
//     cout << "string after reverse funtion " << s << endl;

//     return 0;
// }

// class Solution {
// public:
//     void toLowerCase(string &s){
//         for(int i=0;i<s.size();i++){
//             if(s[i]>='A' && s[i]<='Z'){
//                 s[i]=s[i]-'A'+'a';
//             }
//         }
//     }
//     string solve(string s){
//         string temp="";
//         for(int i=0;i<s.size();i++){
//             if((s[i]>='a' && s[i]<='z' )||(s[i]>=0 && s[i]<=9) ){
//                 temp.push_back(s[i]);
//             }
//         }
//         return temp;
//     }
//     bool RE(string s,int start,int end){
//         //BC
//         if(start>=end){
//             return true;
//         }
//         //processing
//         if(s[start]!=s[end]){
//             return false;
//         }

//         //recursive call
//         return RE(s,start+1,end-1);

//     }
//     bool isPalindrome(string s) {
//         toLowerCase(s);
//         string ans=solve(s);

//         if(RE(s,0,s.size()-1)){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

//print all subarrays
// #include <iostream>
// #include <vector>
// using namespace std;

// void printSubArrays_util(vector<int> &nums, int start, int end)
// {
//     // BC
//     if (end > nums.size())
//     {
//         return;
//     }
//     // processing
//     for (int i = start; i < end; i++)
//     {
//         cout << nums[i] << " ";
//     }
//     cout << endl;
//     // recursive call
//     printSubArrays_util(nums, start, end + 1);
// }
// void printSubArrays(vector<int> &nums)
// {
//     for (int start = 0; start < nums.size(); start++)
//     {
//         int end = start;
//         printSubArrays_util(nums, start, end);
//     }
// }
// int main()
// {
//     vector<int> nums = {1, 2, 3, 4, 5};
//     int i, j = 0;
//     printSubArrays(nums);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num=123;
//     int temp=num>>1;//right-->divide
//     int temp2=num<<1;//left-->multiply
//     int temp3=num%10;//left-->multiply
//     cout<<temp<<endl;
//     cout<<temp2<<endl;
//     cout<<temp3<<endl;
//     return 0;
// }

