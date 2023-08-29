// #include <iostream>
// using namespace std;
// void merge(int *arr, int s, int e)
// {
//     int mid = s + e / 2;

//     // length of both the parts
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     // left part
//     int *left = new int[len1];
//     // right
//     int *right = new int[len2];
//     // copy values for left part
//     int mainArrayIndex = s;
//     for (int i = 0; i < len1; i++)
//     {
//         left[i] = arr[mainArrayIndex++];
//     }
//     // copying values for right part
//     mainArrayIndex = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         right[i] = arr[mainArrayIndex++];
//     }
//     int leftIndex = 0;
//     int rightIndex = 0;
//     mainArrayIndex = s;
//     while (leftIndex < len1 && rightIndex < len2)
//     {
//         if (left[leftIndex] < right[rightIndex])
//         {
//             arr[mainArrayIndex++] = left[leftIndex++];
//         }
//         else
//         {
//             arr[mainArrayIndex++] = right[rightIndex++];
//         }
//     }
//     // remaining values copied
//     while (leftIndex < len1)
//     {
//         arr[mainArrayIndex++] = left[leftIndex++];
//     }
//     while (rightIndex < len2)
//     {
//         arr[mainArrayIndex++] = right[rightIndex++];
//     }
//     // free memory
//     delete []left;
//     delete []right;
// }
// void mergeSort(int *arr, int s, int e)
// {
//     // bc
//     if (s >= e)
//     {
//         return;
//     }
//     // ek case solve kardo
//     int mid = s + e / 2;
//     // left part recursion sambhal lega
//     mergeSort(arr, s, mid);
//     // right part recursion sambhal lega
//     mergeSort(arr, mid + 1, e);
//     // merge
//     merge(arr, s, e);
// }
// int main()
// {
//     int arr[] = {1, 12, 13, 5, 4, 7, 13, 13};
//     int n = 8;
//     mergeSort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << endl;
//     return 0;
// }

// Time Complexity=O(nlogn)
// Space Complexity=O(n)

// inplace merge sort-->Time Complexity= O(n2 * log(n))

// #include<iostream>
// using namespace std;

// void merge(int a[], int s, int mid, int e)
// {
//     int i, temp;
//     while(s<=mid && mid+1<=e)
//     {
//         if (a[s]<=a[mid+1])
//         {
//             s++;
//         }
//         else
//         {
//             temp=a[mid+1];
//             for(i=mid+1; i>s; i--)
//             {
//                 a[i]=a[i-1];
//             }
//             a[i]=temp;
//             s++;
//             mid++;
//         }
//     }
// }

// void mergesort(int a[], int s, int e)
// {
//     if(s>=e)
//         return;
//     else
//     {
//         int mid=s+(e-s)/2;
//         mergesort(a,s,mid);
//         mergesort(a,mid+1,e);
//         merge(a,s,mid,e);
//     }
// }

// int main()
// {
//     int a[]={3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12 };
//     int n=sizeof(a)/sizeof(a[0]);
//     mergesort(a,0,n-1);
//     for(int i=0; i<n; i++)
//         cout<<a[i]<<" ";
// }

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution{
//   public:
//     // arr[]: Input Array
//     // N : Size of the Array arr[]
//     // Function to count inversions in the array.
//     long long merge(long long arr[],int s,int e){
//         long long count=0;
//         int mid=s+e/2;
//         int len1=mid-s+1;
//         int len2=e-mid;
//         int *temp1=new int[len1];
//         int *temp2=new int[len2];
//         int mainIndex=s;
//         for(int i=0;i<len1;i++){
//             temp1[i]=arr[mainIndex++];
//         }
//         mainIndex=mid+1;
//         for(int i=0;i<len2;i++){
//             temp2[i]=arr[mainIndex++];
//         }
//         int index1=0;
//         int index2=0;
//         mainIndex=s;
//         while(index1<len1 && index2<len2){
//             if(temp1[index1]<temp2[index2]){
//                 arr[mainIndex++]=temp1[index1++];
//             }
//             else{
//                 count+=len1-index1;
//                  arr[mainIndex++]=temp2[index2++];
//             }
//         }
//         while(index1<len1){
//              arr[mainIndex++]=temp1[index1++];
//         }
//         while(index2<len2){
//             arr[mainIndex++]=temp2[index2++];
//         }
//         delete []temp1;
//         delete []temp2;
//         return count;
//     }
//     long long mergeSort(long long arr[],int s,int e){
//         long long count=0;
//         //base case
//         if(s>=e){
//             return 0;
//         }
//         //recursive relation
//         int mid=s+(e-s)/2;
//         count+=mergeSort(arr,s,mid);
//         count+=mergeSort(arr,mid+1,e);
//         //processing
//         count+=merge(arr,s,e);
//         return count;
//     }
//     long long int inversionCount(long long arr[], long long N)
//     {
//        long long ans=0;
//       ans=mergeSort(arr,0,N-1);
//       return ans;
//     }

// };

// //{ Driver Code Starts.

// int main() {

//     long long T;
//     cin >> T;

//     while(T--){
//         long long N;
//         cin >> N;

//         long long A[N];
//         for(long long i = 0;i<N;i++){
//             cin >> A[i];
//         }
//         Solution obj;
//         cout << obj.inversionCount(A,N) << endl;
//     }

//     return 0;
// }

// // } Driver Code Ends

// #include <iostream>
// using namespace std;
// int partition(int *arr, int s, int e)
// {
//     // Step1:-find pivot
//     int pivotIndex = s;
//     int pivot = arr[s]; // first element as pivot

//     // Step2:-place pivot on its right position
//     int count = 0;
//     int index = s + 1; // pehla ele chod denge
//     while (index <= e)
//     {
//         if (arr[index] <= pivot)
//         {
//             count++;
//         }
//         index++;
//     }

//     swap(arr[pivotIndex], arr[s + count]);
//     pivotIndex = s + count;
//     // Step3:-smaller<pivot<larger
//     int i = s;
//     int j = e;
//     while (i < pivotIndex && j > pivotIndex)
//     {
//         while (arr[i] <= pivot)
//         {
//             i++;
//         }
//         while (arr[j] > pivot)
//         {
//             j--;
//         }
//         if (i < pivotIndex && j > pivotIndex)
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     return pivotIndex;
// }
// void quickSort(int *arr, int s, int e)
// {
//     // bc
//     if (s >= e)
//     {
//         return;
//     }
//     // ek case solve kardo
//     int pivot = partition(arr, s, e);
//     // baki recursion sambhal lega
//     // left part sort karke lao
//     quickSort(arr, s, pivot - 1);
//     // right part sort karke lao
//     quickSort(arr, pivot + 1, e);
// }
// int main()
// {
//     int arr[] = {2, 1, 6, 10, 4, 1, 3, 9, 7};
//     int N = sizeof(arr) / sizeof(int);
//     quickSort(arr, 0, N - 1);
//     for (int i = 0; i < N; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void printPermutation(string& s,int i){
//     //bc
//     if(i>=s.size()){
//         cout<<s<<" ";
//         return;
//     }
//     //ek case solve kardo
//     for(int j=i;j<s.size();j++){
//         swap(s[i],s[j]);
//         printPermutation(s,i+1);
//         //backtracking
//         swap(s[i],s[j]);//waps thik karo
//     }
// }
// int main(){
//     string str="abcd";
//     int i=0;
//     printPermutation(str,i);
//     return 0;
// }

// rat in a maze
// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;
// bool isSafe(int maze[4][4], int N, int i, int j, vector<vector<bool>> &visited)
// {
//     if ((i >= 0 && i < N) && (j >= 0 && j < N) && maze[i][j] == 1 && visited[i][j] == 0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// void printPath(int maze[4][4], int N, int i, int j, vector<vector<bool>> &visited, string output, vector<string> &ans)
// {
//     // bc
//     if (i == N - 1 && j == N - 1)
//     {
//         ans.push_back(output);
//         return;
//     }
//     // ek case solve karna hai
//     // Down
//     if (isSafe(maze, N, i + 1, j, visited))
//     {
//         visited[i + 1][j] = 1;
//         printPath(maze, N, i + 1, j, visited, output + 'D', ans);
//         visited[i + 1][j] = 0; // backtracking
//     }
//     // Left
//     if (isSafe(maze, N, i, j - 1, visited))
//     {
//         visited[i][j - 1] = 1;
//         printPath(maze, N, i, j - 1, visited, output + 'L', ans);
//         visited[i][j - 1] = 0; // backtracking
//     }
//     // Right
//     if (isSafe(maze, N, i, j + 1, visited))
//     {
//         visited[i][j + 1] = 1;
//         printPath(maze, N, i, j + 1, visited, output + 'R', ans);
//         visited[i][j + 1] = 0; // backtracking
//     }
//     // Up
//     if (isSafe(maze, N, i - 1, j, visited))
//     {
//         visited[i - 1][j] = 1;
//         printPath(maze, N, i - 1, j, visited, output + 'U', ans);
//         visited[i - 1][j] = 0; // backtracking
//     }
// }
// int main()
// {
//     int maze[4][4] = {{1, 0, 0, 0},
//                       {1, 1, 0, 0},
//                       {1, 1, 0, 0},
//                       {0, 1, 1, 0}};
//     int N = 4;
//     int i = 0;
//     int j = 0;
//     vector<vector<bool>> visited(N, vector<bool>(N, false));
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             visited[i][j] = 0;
//         }
//     }
//     visited[0][0]=true;
//     vector<string> ans;
//     string output = " ";
//     printPath(maze, N, i, j, visited, output, ans);
//     for (auto i : ans)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;
// void printSolution(vector<vector<char>> &board, int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }
// bool isSafe(vector<vector<char>> &board, int row, int col, int N)
// {
//     // upper left diagonal
//     int i = row;
//     int j = col;
//     while (i >= 0 && j >= 0)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//         i--;
//         j--;
//     }
//     // left row
//     i = row;
//     j = col;
//     while (j >= 0)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//         j--;
//     }
//     // bottom left diagonal
//     i = row;
//     j = col;
//     while (i < N && j >= 0)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }
// void solveNQueen(vector<vector<char>> &board, int N, int col)
// {
//     // bc
//     if (col >= N)
//     {
//         printSolution(board, N);
//         return;
//     }
//     // ek case solve kardo baki recursion sambhal lega
//     for (int row = 0; row < N; row++)
//     {
//         if (isSafe(board, row, col, N))
//         {
//             board[row][col] = 'Q';
//             solveNQueen(board, N, col + 1); // recursion
//             board[row][col] = '-';          // backtracking
//         }
//     }
// }
// int main()
// {
//     int N = 4;
//     vector<vector<char>> board(N, vector<char>(N, '-'));
//     int col = 0;
//     solveNQueen(board, N, col);
//     return 0;
// }


//Quick Sort by end element as pivot
#include<iostream>
using namespace std;
void quickSort(int arr[],int start,int end){
    //base case
    if(start>=end){
        return;
    }
    //ek case solve karo
    int pivot=end;
    //using two-pointer approach
    int i=start-1;
    int j=start;
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;//edge case
            swap(arr[j],arr[i]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    //baki recursion sambhal lega
    //i is the right position for pivot element
    quickSort(arr,start,i-1);//left
    quickSort(arr,i+1,end);//right
}

int main(){
    int arr[]={7,2,1,8,6,3,5,4};
    int N=sizeof(arr)/sizeof(int);
    quickSort(arr,0,N-1);
    for(int i=0;i<N;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<endl;
    return 0;
}