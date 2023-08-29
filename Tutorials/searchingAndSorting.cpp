// Quick sort --> time complexity in worst case is O(n^2)
// Quick sort --> time complexity in best and average case is O(nlogn)
// Which is better complexity for linked list? --> Merge sort Or Quick sort
// Which is better complexity for arrays? --> Merge sort Or Quick sort

// linear search
//  #include<bits/stdc++.h>
//  using namespace std;
//  bool getElement( vector<int> v,int target){
//      for(int i=0;i<v.size();i++){
//          if(v[i]==target){
//              return true;
//          }
//      }
//      return false;
//  }
//  int main(){
//      vector<int> v={1,2,3,4,5,6};
//      int target;
//      cin>>target;
//      if(getElement(v,target)){
//          cout<<"Found"<<endl;
//      }
//      else{
//          cout<<"Not Found"<<endl;
//      }
//      return 0;
//  }

// binary search
//  #include<bits/stdc++.h>
//  using namespace std;
//  bool getElement( vector<int> v,int target){
//      int start=0;
//      int end=v.size()-1;
//      while(start<=end){
//          int mid=start+(end-start)/2;
//          if(v[mid]==target){
//              return true;
//          }
//          else if(v[mid]<target){
//              start=mid+1;
//          }
//          else{
//              end=mid-1;
//          }
//      }
//      return false;
//  }
//  int main(){
//       vector<int> v={1,2,3,4,5,6};
//      int target;
//      cin>>target;
//      if(getElement(v,target)){
//          cout<<"Found"<<endl;
//      }
//      else{
//          cout<<"Not Found"<<endl;
//      }
//  return 0;
//  }

// find the first occurence
//  #include<bits/stdc++.h>
//  using namespace std;
//  int firstOccurence( vector<int> v,int target){
//     int ans;
//      int start=0;
//      int end=v.size()-1;
//      while(start<=end){
//          int mid=start+(end-start)/2;
//          if(v[mid]==target){
//             ans= mid;
//             end=mid-1;
//          }
//          else if(v[mid]<target){
//              start=mid+1;
//          }
//          else{
//              end=mid-1;
//          }
//      }
//      return ans;
//  }
//  int lastOccurence( vector<int> v,int target){
//     int ans;
//      int start=0;
//      int end=v.size()-1;
//      while(start<=end){
//          int mid=start+(end-start)/2;
//          if(v[mid]==target){
//             ans= mid;
//             start=mid+1;
//          }
//          else if(v[mid]<target){
//              start=mid+1;
//          }
//          else{
//              end=mid-1;
//          }
//      }
//      return ans;
//  }
//  int main(){
//       vector<int> v={1,3,4,4,4,4,4,6,7,9,9};
//      int target;
//      cin>>target;
//      cout<<"Total num of occurences is "<<lastOccurence(v,target)-firstOccurence(v,target)+1<<endl;
//  return 0;
//  }

// find the missing element
// A binary search based program to find the
// only missing number in a sorted array of
// distinct elements within limited range.
// #include <iostream>
// using namespace std;

// int search(int ar[], int size)
// {
//     // Extreme cases
//     if (ar[0] != 1)
//         return 1;
//     if (ar[size - 1] != (size + 1))
//         return size + 1;

//     int a = 0, b = size - 1;
//     int mid;

//     while ((b - a) > 1)
//     {
//         mid = (a + b) / 2;
//         // cout << "a" << a << "b" << b << "mid" << mid << endl;
//         if ((ar[a] - a) != (ar[mid] - mid)) // logic to find missing element
//             b = mid;
//         else if ((ar[b] - b) != (ar[mid] - mid))
//             a = mid;
//     }
//     return (ar[a] + 1);
// }

// int main()
// {
//     int ar[] = {1, 2, 3, 4, 5, 6, 8};
//     int size = sizeof(ar) / sizeof(ar[0]);
//     cout << "Missing number:" << search(ar, size);
// }

// peak element in a mountain array
// #include <bits/stdc++.h>
// using namespace std;
// int peakElement(int a[], int size)
// {
//     int s = 0;
//     int e = size - 1;
//     int ans;
//     while (s < e)
//     {
//         int mid = s + (e - s) / 2; // to prevent integer overflow
//         if (a[mid] >= a[mid - 1] && a[mid] > a[mid + 1])
//         {
//             ans =a [mid];
//             s = mid + 1;
//         }
//         else if (a[mid] < a[mid + 1])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid ;//might include peak element
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int arr[] = {0, 5,4, 2};
//     int N = sizeof(arr) / sizeof(int);
//     cout << peakElement(arr, N) << endl;
//     return 0;
// }

// pivot index in an array
#include <bits/stdc++.h>
using namespace std;
// int pivotIndex(int array[], int size)
// {
//    int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + array[i];
//     }
//     int lSum = 0;
//     int rSum = sum;
//     for (int i = 0; i < size; i++)
//     {
//         rSum = rSum - array[i]; // Subtract the element aur rightSum ko thik karr
//         if (lSum == rSum)
//         {
//             return i;
//         }
//         lSum = lSum + array[i]; // Add the element --> vo element ko rightSum me se nikal karr leftSum me dal diya
//     }
//     return -1;
// }
// int pivotIndex(int arr[], int size)
// {
//     int s = 0;
//     int e = size - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2; // to prevent integer overflow
//         // two cases alag se handle karliye
//         //  cout<<mid<<endl;
//         if (arr[mid] > arr[mid + 1])
//         {
//             return arr[mid];
//         }
//         if (arr[mid] < arr[mid - 1])
//         {
//             return arr[mid - 1];
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {0, 3, 5, 2, 1};
//     int N = sizeof(arr) / sizeof(int);
//     cout << pivotIndex(arr, N) << endl;
//     return 0;
// }

// search in a rotated sorted array
// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         int size = nums.size();
//         int s = 0, e = size - 1, m = 0;
//         while (s <= e)
//         {
//             m = s + (e - s) / 2;
//             // cout<<"s"<<s<<"e"<<e<<"mid"<<m<<endl;
//             if (nums[m] == target)
//                 return m;
//             if (nums[m] >= nums[s])
//             {
//                 // cout<<"first"<<endl;
//                 if (nums[m] >= target && nums[s] <= target)
//                     e = m - 1;
//                 else
//                     s = m + 1;
//             }
//             else
//             {
//                 // cout<<"second"<<endl;
//                 if (nums[m] <= target && nums[e] >= target)
//                     s = m + 1;
//                 else
//                     e = m - 1;
//             }
//         }
//         return -1;
//     }
// };
// int main()
// {
//     vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
//     int target;
//     cin>>target;
//     Solution obj;
//     cout << obj.search(nums,target) << endl;
// }

// square root using binary search
// #include <bits/stdc++.h>
// using namespace std;
// int squareRoot(int N)
// {
//     int ans;

//     int s = 0;
//     int e = N;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (mid * mid == N)
//         {
//             ans = mid;
//             break;
//         }
//         else if (mid * mid < N)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         cout << "s" << s << "e" << e << "mid" << mid << endl;
//     }
//     return ans;
// }
// int main()
// {
//     int N;
//     cin >> N;
//     int temp = squareRoot(N);
//     // cout << temp << endl;
//     int precision;
//     cin >> precision;
//     double factor = 1;
//     double ans = temp;
//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor / 10;
//         cout << factor << endl;                         // 0.1 0.01 0.001
//         for (double j = ans; j * j < N; j = j + factor) //(6*6)<37 j=6+0.01
//         {
//             ans = j;
//             cout << ans << endl;
//         }
//     }
//     cout << "ANSWER with precision " << ans << endl;
//     return 0;
// }

// Binary Search in 2-D Array
// #include <bits/stdc++.h>
// using namespace std;
// #define N 3 // rows
// #define M 4 // cols
// bool search(int arr[][M], int target)
// {
//     int s = 0;
//     int totalSize = N * M;
//     int e = totalSize - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2; // integer overflow
//         //(i,j)=c*i+j
//         int rowIndex = mid / M; // logic
//         int colIndex = mid % M;
//         int element = arr[rowIndex][colIndex];
//         if (element == target)
//         {
//             return true;
//         }
//         else if (element < target)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return 0;
// }
// int main()
// {
//     int arr[][M] = {1, 2, 3, 4, 5, 6, 7, 8,
//                     9, 10, 11, 12};
//     int target;
//     cin >> target;
//     if (search(arr, target))
//     {
//         cout << "Element found!";
//     }
//     else
//     {
//         cout << "Element not found!";
//     }
//     return 0;
// }

// search in nearly sorted array in log time i.e.log n
// #include <bits/stdc++.h>
// using namespace std;
// int search(int arr[], int N, int target)
// {
//     int s = 0;
//     int e = N - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         if (mid-1>=s&&arr[mid - 1] == target)
//         {
//             return mid - 1;
//         }
//         if (mid+1<=earr[mid + 1] == target)
//         {
//             return mid + 1;
//         }
//         if (arr[mid] < target)
//         {
//             s = mid + 2; // bcoz already compared (mid+1)th index
//         }
//         else
//         {
//             e = mid - 2; // bcoz already compared (mid-1)th index
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[] = {2, 1, 4, 3, 6, 5};
//     int N = sizeof(arr) / sizeof(int);
//     int target;
//     cin >> target;
//     if (search(arr, N, target) == -1)
//     {
//         cout << "Element not found!" << endl;
//     }
//     else
//     {
//         cout << "Element fount at " << search(arr, N, target) << " ith index" << endl;
//     }
//     return 0;
// }

// division of 2 no's using binary search
// #include <bits/stdc++.h>
// using namespace std;
// int division(int N, int M)
// {
//     // N for dividend
//     // M for divisor
//     if (M == 1)
//     {
//         return N;
//     }
//     if(M==-1)
//     {
//         // (M)==-1;
//         return -N;
//     }
//     long long s = 0;
//     long long e = abs(N);
//     int quotient = 0;
//     while (s <= e)
//     {
//         long long mid = s + (e - s) / 2;
// if(abs(mid*M)==b=abs(N)){
//     quotient=mid;
// break;
// }
//         if (abs(mid * M) > abs(N))
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             quotient = mid;
//             s = mid + 1;
//         }
//     }
//     if (N < 0 && M < 0 || N > 0 && M > 0)
//     {
//         return quotient;
//     }
//     else
//     {
//         return -quotient;
//     }
//     return -1;
// }
// int main()
// {
//     int N;
//     cout << "Enter the dividend" << endl;
//     cin >> N;
//     int M;
//     cout << "Enter the divisor" << endl;
//     cin >> M;

//     cout << division(N, M) << endl;
//     return 0;
// }

// C program to find the element that appears odd number of time
// #include <stdio.h>

// void search(int *arr, int size)
// {
//     int low = 0;
//     int high = size - 1;

//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (low == high)
//         {
//             cout <<arr [low] << endl;
//             break;
//         }
//         if (mid % 2 == 0)
//         {
//             // even
//             if (arr[mid] == arr[mid + 1])
//             {
//                 low = mid + 2;
//             }
//             else
//             {
//                 high = mid;
//             }
//         }
//         else
//         {
//             // odd
//             if(arr[mid]==arr[mid-1]){
//                 low=mid+1;
//             }
//             else{
//                 high=mid-1;
//             }
//         }
//     }
//     return;
// }

// // Driver program
// int main()
// {
//     // int arr[] = {1, 1, 2, 2, 1, 1, 2, 2, 13, 1, 1, 40, 40};
//     int arr[] = {1, 2, 2, 3, 3};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     search(arr, len);
//     return 0;
// }

// find the pairs with difference 'k' in an array i.e. k-diff pairs
// #include <iostream>
// using namespace std;
// int bs(vector<int> &nums, int s, int k)
// {
//     int e = nums.size() - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         // cout << "s " << s << " e " << e << " mid " << mid << " k " << k << endl;
//         if (nums[mid] == k)
//         {
//             return mid;
//         }
//         else if (nums[mid] < k)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return -1;
// }
// int findPairs(vector<int> &nums, int k)
// {
//     sort(nums.begin(), nums.end());
//     set<pair<int, int>> ans;
//     // Two pointer approach
//     //  int i = 0, j = 1;
//     //  while (i < nums.size() && j < nums.size())
//     //  {
//     //      int diff = nums[j] - nums[i];
//     //      if (diff == k)
//     //      {
//     //          ans.insert({nums[i], nums[j]});
//     //          i++;
//     //          j++;
//     //      }
//     //      else if (diff > k)
//     //      {
//     //          i++;
//     //      }
//     //      else
//     //      {
//     //          j++;
//     //      }
//     //      if (i == j)
//     //      {
//     //          j++;
//     //      }
//     //  }
//     //  return ans.size();

//     // Binary Search
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (bs(nums, i + 1, nums[i] + k) != -1)
//         {
//             // cout << "nums[i] " << nums[i] << " nums[j] " << nums[i] + k << endl;
//             ans.insert({nums[i], nums[i] + k});
//         }
//     }
//     return ans.size();
// }
// int main()
// {
//     vector<int> arr = {3, 1, 4, 1, 5};
//     // vector<int> arr = {1, 3, 1, 5, 4};
//     int k = 2;
//     // cin >> k;
//     cout << findPairs(arr, k);
//     return 0;
// }

// selection sort
// #include <iostream>
// using namespace std;
// void selectionSort(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < arr.size(); j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }
// void printArray(vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> a = {5, 4, 3, 2, 1};
//     selectionSort(a);
//     printArray(a);
//     return 0;
// }

// bubble sort
// #include <iostream>
// using namespace std;
// void bubbleSort(vector<int> &arr)
// {
//     //outerloop --> num of rounds/iterations
// for(int i=1;i<arr.size();i++){
//     //innerloop --> n-i rounds
//     int count=0;
//     for(int j=0;j<arr.size()-i;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//             count++;
//         }
//     }
//     if(count==0){
//         break;
//     }
// }
// }
// void printArray(vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> a = {10, 1, 7, 6, 14, 9};
//     bubbleSort(a);
//     printArray(a);
//     return 0;
// }

// insertion sort
// #include <iostream>
// using namespace std;
// void insertionSort(vector<int> &arr)
// {
//     // outerloop --> num of rounds/iterations
//     for (int i = 1; i < arr.size(); i++)
//     {
//         int val = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (arr[j] > val)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 // rukna zaruri hai
//                 break;
//             }
//         }
//         arr[j + 1] = val;
//     }
// }
// void printArray(vector<int> a)
// {
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     vector<int> a = {10, 1, 7, 6, 14, 9};
//     insertionSort(a);
//     printArray(a);
//     return 0;
// }

// exponential binary search Or unbounded
// #include <iostream>
// using namespace std;
// int bs(vector<int> &arr, int s, int e, int target)
// {
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//     }
//     return -1;
// }
// int exponentialSearch(vector<int> &arr, int target)
// {
//     int i = 0;
//     int j = 1;
//     if (arr[i] == target)
//     {
//         return 0;
//     }
//     while (j<arr.size() && arr[j] < target)
//     {
//         i = j;
//         j = j * 2;
//     }
//     return bs(arr, i, j, target);
// }
// int unboundedSearch(vector<int> &arr, int target){
//     int i=0;
//     int ans;
//     while(1){
//         if(arr[i]>target){
//             break;
//         }
//         if(arr[i]==target){
//             ans=i;
//             i++;
//         }
//     }

//// return bs(arr,i/2,min(i,arr.size()-1),target);
// }
// int main()
// {
//     vector<int> arr(0,INT_MAX);
//     cout << unboundedSearch(arr, 55);
//     return 0;
// }

// eko spoj
//  #include <iostream>
//  #include<vector>
//  #include<algorithm>
//  using namespace std;
//  bool isPossible(vector<long long int> &arr,long long int m,long long int sol){

// 	long long int woodCollected=0;
// 	for(long long int i=0;i<arr.size();i++){
// 	if(arr[i]>sol){
//         woodCollected=woodCollected+arr[i]-sol;
//     }
// 	}
// 	return woodCollected>=m;//true ya false
// }
// long long int findHeight(vector<long long int> &arr,long long int m){

// 	long long s=0,e,ans=-1;
// 	 e=*max_element(arr.begin(),arr.end());//function to find max element in array

// 	while(s<=e){
// 		long long int mid=s+(e-s)/2;//to prevent integer overflow
//         cout<<s<<e<<mid<<endl;
// 		if(isPossible(arr,m,mid)){
// 			ans=mid;
// 			s=mid+1;
// 		}
// 		else{
// 			e=mid-1;
// 		}
// 	}
// 	return ans;
// }
// int main() {
// 	vector<long long int> arr;
// 	long long int n,m;
// 	cin>>n>>m;
// 	while(n--){
// 		long long height;
// 		cin>>height;
// 		arr.push_back(height);
// 	}
// 	cout<<findHeight(arr,m)<<endl;
// 	return 0;
// }

// PRATA spoj
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &ranks, int pratas, int sol)
{
    //custom
    // if(sol==0){
    //     return false;
    // }
    int currPrata = 0;
    for (int i = 0; i < ranks.size(); i++)
    {
        int Rank = ranks[i], j = 1; // j is a factor --> 1*R+2*R... ==>1 2 ye j hai
        int timeTaken = 0;
        while (1)
        {
            cout<<"currPrata"<<currPrata<<endl;
            cout<<"Rank"<<Rank<<endl;
            cout<<"timeTaken"<<timeTaken<<endl;
            cout<<"j"<<j<<endl;
            if (timeTaken + j * Rank <= sol)
            {
                currPrata++;
                timeTaken = timeTaken + j * Rank; // timeTaken updated
                j++;
            }
            else
            {
                break;
            }
        }
        if (currPrata >= pratas)
        {
            return true;
        }
    }
    return false;
}
int minTimeTakenToCompleteOrder(vector<int> &ranks, int pratas)
{
    int s = 0;
    int highestRank = *max_element(ranks.begin(), ranks.end()); // lallu chef he
    cout<<"highestRank"<<highestRank<<endl;
    int e = highestRank * (pratas * (pratas + 1) / 2);
    int ans = -1;
    while (s <= e)
    {
        int mid = s + e >> 1;
        cout<<"s"<<s<<endl;
        cout<<"e"<<e<<endl;
        cout<<"mid"<<mid<<endl;
        if (isPossible(ranks, pratas, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int pratas, chefs;
        cin >> pratas >> chefs;
        vector<int> ranks;
        while (chefs--)
        {
            int R;
            cin >> R;
            ranks.push_back(R);
        }
        cout << minTimeTakenToCompleteOrder(ranks, pratas) << endl;
    }
    return 0;
}