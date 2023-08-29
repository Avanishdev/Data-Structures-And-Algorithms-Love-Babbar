// Extreme print in array
//  #include <bits/stdc++.h>
//  using namespace std;
//  void getExtreme(int arr[],int n)
//  {
//      int start = 0;
//      int end =n-1 ;
//      while (start < end)
//      {
//          cout << arr[start++]<<" ";
//          cout << arr[end--]<<" ";
//      }
//  }
//  int main()
//  {
//      int arr[8]{
//          1, 2, 3, 4, 5, 6, 7, 8};

//     getExtreme(arr,8);

//     return 0;
// }

// swapping using three methods
//  + - || * /
//  XOR
//  temp

// #include <iostream>
// using namespace std;
// void reverse(int arr[], int n)
// {
//     // Method 1
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         arr[start] = arr[start] + arr[end];
//         arr[end] = arr[start] - arr[end];
//         arr[start] = arr[start] - arr[end];
//         start++;
//         end--;
//     }
// }
// void XOR(int arr[], int n)
// {
//     // Method 2
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         arr[start] = arr[start] ^ arr[end];
//         arr[end] = arr[start] ^ arr[end];
//         arr[start] = arr[start] ^ arr[end];
//         start++;
//         end--;
//     }
// }
// void tempVar(int arr[], int n)
// {
//     // Method 3
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         int temp = arr[end];
//         arr[end] = arr[start];
//         arr[start] = temp;
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     int arr[8]{
//         1, 2, 3, 4, 5, 6, 7, 8};

//     tempVar(arr, 8);
//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Unique element in array
// #include <bits/stdc++.h>
// using namespace std;
// int findUnique(int arr[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = arr[i] ^ ans; // 0 ^ any number is number itself.
//     }
//     return ans;
// }
// int main()
// {
//     int arr[5] = {1, 1, 2, 2, 3};
//     cout << findUnique(arr, 5) << endl;
//     return 0;
// }

// Union of two arrays
// #include <bits/stdc++.h>
// using namespace std;
// void findUnion(int *arr, int a, int *brr, int b)
// {
//     // create new array
//     vector<int> v;
//     for (int i = 0; i < a; i++)
//     {
//         v.push_back(arr[i]);
//     }
//     for (int j = 0; j < b; j++)
//     {
//         v.push_back(brr[j]);
//     }
//     for (int i = 0; i < a + b; i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[4] = {1, 2, 3, 4};
//     int brr[5] = {5, 6, 7, 8, 9};
//     findUnion(arr, 4, brr, 5);
//     return 0;
// }

// Union of two arrays with duplicates
// #include <bits/stdc++.h>
// using namespace std;
// void findUnion(int arr1[], int arr2[], int m, int n)
// {
//     int i = 0, j = 0;
//     while (i < m && j < n)
//     {
//         if (arr1[i] < arr2[j])
//             cout << arr1[i++] << " ";

//         else if (arr2[j] < arr1[i])
//             cout << arr2[j++] << " ";

//         else
//         {
//             cout << arr2[j++] << " ";
//             i++;
//         }
//     }

//     /* Print remaining elements of the larger array */
//     while (i < m)
//         cout << arr1[i++] << " ";

//     while (j < n)
//         cout << arr2[j++] << " ";
// }
// int main()
// {
//     int array1[] = {3, 4, 5, 6, 7, 9};
//     int array2[] = {1, 2, 3, 4};

//     findUnion(array1, array2, 6, 4);
//     return 0;
// }

// Intersection of two arrays
// #include <bits/stdc++.h>
// using namespace std;
// void getIntersection(int arr[], int brr[], int a, int b)
// {
//     int i, j = 0;
//     while (i < a && j < b)
//     {
//         if (arr[i] == brr[j])
//         {
//             cout << arr[i++]<<" ";
//             j++;
//         }
//         else if (arr[i] < brr[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4};
//     int brr[] = {3, 4, 5, 6};

//     getIntersection(arr, brr, 4, 4);

//     return 0;
// }

// Pair Sum
// #include <bits/stdc++.h>
// using namespace std;
// int getPairsum(int arr[], int a, int k)
// {
//     int count = 0;
//     for (int i = 0; i < a; i++)
//     {
//         for (int j = i + 1; j < a; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 cout << arr[i] << " & " << arr[j] << endl;
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 4};
//     int k;
//     cin >> k;
//     cout << getPairsum(arr, 5, k) << endl;
//     return 0;
// }

// Sort 0's & 1's
//  #include<bits/stdc++.h>
//  using namespace std;
//  void sortZeros(vector<int> &a){
//      int start=0;
//      int end=a.size()-1;
//      while(start<end){
//       if(a[start]==0){
//          start++;
//       }
//       else if(a[end]==1){
//          end--;
//       }
//       else{
//          swap(a[start++],a[end--]);
//       }
//      }
//  }
//  void printArray(vector<int> a){
//      for(int i=0;i<a.size();i++){
//          cout<<a[i]<<" ";
//      }
//  }
//  int main(){
//      vector<int> a={1,0,1,0,0,0,1,0,1};
//      sortZeros(a);
//      printArray(a);
//      return 0;
//  }

// Left Rotate array by one
//  #include <bits/stdc++.h>
//  using namespace std;

// // Function to rotate array
// void Rotate(int arr[], int d, int n)
// {
// 	// Storing rotated version of array
// 	int temp[n];

// 	// Keeping track of the current index
// 	// of temp[]
// 	int k = 0;

// 	// Storing the n - d elements of
// 	// array arr[] to the front of temp[]
// 	for (int i = d; i < n; i++) {
// 		temp[k] = arr[i];
// 		k++;
// 	}

// 	// Storing the first d elements of array arr[]
// 	// into temp
// 	for (int i = 0; i < d; i++) {
// 		temp[k] = arr[i];
// 		k++;
// 	}

// 	// Copying the elements of temp[] in arr[]
// 	// to get the final rotated array
// 	for (int i = 0; i < n; i++) {
// 		arr[i] = temp[i];
// 	}
// }

// // Function to print elements of array
// void PrintTheArray(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++) {
// 		cout << arr[i] << " ";
// 	}
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
// 	int N = sizeof(arr) / sizeof(arr[0]);
// 	int d = 2;

// 	// Function calling
// 	Rotate(arr, d, N);
// 	PrintTheArray(arr, N);

// 	return 0;
// }

// Majority element in array
// #include <bits/stdc++.h>
// using namespace std;
// void getMajority(vector<int> a)
// {
// 	int n = a.size();
// 	int maxCount = 0;
// 	int count = 0;
// 	int index = -1;
// 	for (int i = 0; i < a.size(); i++)
// 	{
// 		for (int j = i + 1; j < a.size(); j++)
// 		{
// 			if (a[i] == a[j])
// 			{
// 				count++;
// 			}
// 		}
// 		if (count > maxCount)
// 		{
// 			maxCount = count;
// 			index = i;
// 		}
// 	}
// 	if (maxCount > n / 2)
// 	{
// 		cout << a[index] << endl;
// 	}
// 	else
// 	{
// 		cout << "No majority element" << endl;
// 	}
// }
// int main()
// {
// 	vector<int> a = {3, 3, 4, 2, 4, 4, 2, 4, 4};
// 	getMajority(a);
// 	return 0;
// }

// Buy and Sell stock
// #include <bits/stdc++.h>
// using namespace std;
// int maxProfit(vector<int> &price)
// {
// 	int low = 0;
// 	int maxProfit = 0;
// 	for (int i = 0; i < price.size(); i++)
// 	{
// 		if(price.size()==1){
// 			return 0;
// 		}
// 		if (price[i] < price[low])//prices to the right are equal or greater than equal to
// 		{
// 			low = i; // saving index
// 		}
// 		maxProfit = max(maxProfit, price[i] - price[low]);
// 		// cout<<maxProfit<<endl;
// 	}
// 	return maxProfit;
// }
// int main()
// {
// 	vector<int> a = {100, 180, 260, 310, 40, 535, 695};
// 	cout << maxProfit(a) << endl;
// 	return 0;
// }

// printing row Sum in 2-D Array
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//  	int row;
//  	cin>>row;
//  	int col;
//  	cin>>col;
//  	int a[100][100];
//  	//taking input
//  	for(int i=0;i<row;i++){
//  		for(int j=0;j<col;j++){
//  			cin>>a[i][j];
//  		}
//  	}
//  	int lSum;
//  	for(int i=0;i<row;i++){
//  		lSum=0;
//  		for(int j=0;j<col;j++){
//  			lSum=lSum+a[i][j];
//  		}
//  		cout<<lSum<<endl;
//  	}
//  	return 0;
//  }

// printing col Sum in 2-D Array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int row;
// 	cin >> row;
// 	int col;
// 	cin >> col;
// 	int a[100][100];
// 	// taking input
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			cin >> a[i][j];
// 		}
// 	}
// 	//printing col-wise sum
// 	int lSum;
// 	for(int i=0;i<col;i++){
// 		lSum=0;
// 		for(int j=0;j<row;j++){
// 			lSum+=a[j][i];
// 		}
// 		cout<<lSum<<endl;
// 	}
// 	return 0;
// }

// search in 2-D Array
// #include <bits/stdc++.h>
// using namespace std;
// bool linearSearch(int a[][100],int row,int col ,int key)
// {
// 	for(int i=0;i<row;i++){
// 		for(int j=0;j<col;j++){
// 			if(a[i][j]==key){
// 				return true;
// 			}
// 		}
// 	}
// 	return false;
// }
// int main()
// {
// 	int a[100][100];
// 	int row;
// 	cin >> row;
// 	int col;
// 	cin >> col;
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			cin >> a[i][j];
// 		}
// 	}
// 	int key;
// 	cout << "Enter key:" << endl;
// 	cin >> key;
// 	if (linearSearch(a, row,col,key))
// 	{
// 		cout << "Key present!" << endl;
// 	}
// 	else
// 	{
// 		cout << "Key absent!" << endl;
// 	}
// 	return 0;
// }

// max/min 2-D Array
// #include <bits/stdc++.h>
// using namespace std;
// int getMax(int a[][100], int row, int col)
// {
// 	int maxi = INT_MIN;
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			if (a[i][j] > maxi)
// 			{
// 				maxi = a[i][j];
// 			}
// 		}
// 	}
// 	return maxi;
// }
// int getMin(int a[][100], int row, int col)
// {
// 	int mini = INT_MAX;
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			if (a[i][j] < mini)
// 			{
// 				mini = a[i][j];
// 			}
// 		}
// 	}
// 	return mini;
// }
// int main()
// {
// 	int a[100][100];
// 	int row;
// 	cin >> row;
// 	int col;
// 	cin >> col;
// 	for (int i = 0; i < row; i++)
// 	{
// 		for (int j = 0; j < col; j++)
// 		{
// 			cin >> a[i][j];
// 		}
// 	}
// 	cout <<"Maximum of these element is: "<< getMax(a, row, col) << endl;
// 	cout <<"Minimum of these element is: "<< getMin(a, row, col) << endl;
// 	return 0;
// }

// Transpose of 2-D Matrix
// #include <bits/stdc++.h>
// using namespace std;

// #define N 4

// // Converts A[][] to its transpose
// void transpose(int A[][N])
// {
// 	for (int i = 0; i < N; i++)
// 		for (int j = i + 1; j < N; j++)
// 			swap(A[i][j], A[j][i]);
// }

// int main()
// {
// 	int A[N][N] = { { 1, 1, 1, 1 },
// 					{ 2, 2, 2, 2 },
// 					{ 3, 3, 3, 3 },
// 					{ 4, 4, 4, 4 } };

// 	transpose(A);

// 	printf("Modified matrix is \n");
// 	for (int i = 0; i < N; i++) {
// 		for (int j = 0; j < N; j++)
// 			printf("%d ", A[i][j]);
// 		printf("\n");
// 	}

// 	return 0;
// }

// wave print
// #include <bits/stdc++.h>
// using namespace std;
// #define row 3 // sets constant value for var throughout the code
// #define col 3 // sets constant value for var throughout the code
// void getPrint(int a[][col])
// {

//     for (int i = 0; i < col; i++)
//     { // col-wise
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < row; j++)
//             {
//                 cout << a[j][i] << " ";
//             }

//         }
//         else
//         {
//             for (int m = row-1; m >= 0; m--)
//             {
//                 cout << a[m][i] << " ";
//             }

//         }
//     }
// }
// int main()
// {
//     int a[][col] = {1, 2, 3,
//                     4, 5, 6,
//                     7, 8, 9};
//     getPrint(a);
//     return 0;
// }

// median of two sorted arrays
//  double medianOfTwoSortedArrays(vector<int> &nums1, vector<int> &nums2)
//  {
//      // Initialization some neccessary variables
//      vector<int> v;

//     // store the array in the new array
//     for (auto num : nums1) // O(n1)
//         v.push_back(num);

//     for (auto num : nums2) // O(n2)
//         v.push_back(num);

//     // Sort the array to find the median
//     sort(v.begin(), v.end()); // O(nlogn)

//     // Find the median and Return it
//     int n = v.size(); // O(n)

//     return n % 2 ? v[n / 2] : (v[n / 2 - 1] + v[n / 2]) / 2.0;
// }

// move all negative num to the left
// dutch national flag algo simply known as 2-pointer approach
// time complexity O(N)
// space complexity O(1)
//  #include<bits/stdc++.h>
//  using namespace std;
//  void reArrange(vector<int> &a){
//      int high=a.size()-1;
//      int low=0;

//     while(low<high){
//         if(a[low]<0){
//            low++;
//         }
//         else if(a[high]>0){
//             high--;
//         }
//         else{
//             swap(a[low],a[high]);
//         }

//     }
// }
// void printArray(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     // vector<int> a={1,2,-3,4,-5,6};
//     vector<int> a={1,6,-3,4,-5,-2};
//     reArrange(a);
//     printArray(a);
//     return 0;
// }

// find duplicate
//  #include<bits/stdc++.h>
//  using namespace std;
//  int findDuplicate(vector<int> &a){
//  while(a[0]!=a[a[0]]){
//      swap(a[0],a[a[0]]);
//  }
//  //a[0]==a[a[0]]
//  return a[0];
//  }
//  // void printFunction(vector<int> a){
//  // for(int i=0;i<a.size();i++){
//  //     cout<<a[i]<<" ";
//  // }
//  // cout<<endl;
//  // }
//  int main(){
//      vector<int> a={1,3,4,2,2};
//       cout<<findDuplicate(a)<<endl;
//      // printFunction(a);
//      return 0;
//  }

// missing elements with duplicates
// #include <bits/stdc++.h>
// using namespace std;
// int findMissing(vector<int> v)
// {
//     int n = v.size();
//     int i = 0;
//     while (i < n)
//     {
//         int index = v[i] - 1;
//         // cout<<v[i]<<endl;
//         // cout<<v[index]<<endl;
//         if (v[i] != v[index])
//         {
//             swap(v[i], v[index]);
//         }
//         else
//         {
//             i++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         // v[i] belongs to [1,N]
//         // har element uske index se mapped hoga
//         int element = i + 1;

//         if (v[i] != element)
//         {
//             cout << element << " ";
//         }
//     }
//     cout << endl;
//     // // printing elements
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << v[i] << " ";
//     // }
// }
// int main()
// {
//     // vector<int> a = {1, 3, 3, 4, 5};
//     vector<int> a = {1, 3, 5, 3, 4};

//     findMissing(a);
//     return 0;
// }

// first repeating element
// #include <bits/stdc++.h>
// using namespace std;
// int findRepeating(vector<int> v)
// {
//     // unordered_map<int, int> hash; // hashing technique
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     hash[v[i]]++;
//     // }
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     if (hash[v[i]] > 1)
//     //     {
//     //         return i + 1; // 1-based indexing
//     //     }
//     // }
//     // return -1;

//     // creating custom hash
//     int maxi;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (maxi < v[i])
//         {
//             maxi = v[i];
//         }
//     }
//     int hash[maxi];
//     for (int i = 0; i < v.size(); i++)
//     {
//         hash[v[i]]++;
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (hash[v[i]] > 1)
//         {
//             return i + 1; // 1-based indexing
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> v = {1, 5, 3, 4, 3, 5, 6};
//     cout << findRepeating(v) << endl;
//     return 0;
// }

// common elements
// #include <bits/stdc++.h>
// using namespace std;
// Not Working
//  void removeDuplicates(vector<int> &a)
//  {
//   while(a[0]!=a[a[0]]){
//       swap(a[0],a[a[0]]);
//   }
//   //a[0]==a[a[0]]
//   cout<< a[0]<<" ";
//  }
// int getCommon(vector<int> a, vector<int> b, vector<int> c)
// {
//     set<int> st;
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int n1 = a.size();
//     int n2 = b.size();
//     int n3 = c.size();
//     while (i < n1 && j < n2 && k < n3)
//     {
//         if (a[i] == b[j] && b[j] == c[k])
//         {
//             st.insert(a[i]);
//             i++;
//             j++;
//             k++;
//         }
//         else if (a[i] < b[j])
//         {
//             i++;
//         }
//         else if (b[j] < c[k])
//         {
//             j++;
//         }
//         else
//         {
//             k++;
//         }
//     }
//     for(auto i:st){
//         cout<<i<<" ";
//     }

// }
// int main()
// {
//     // vector<int> a = {1, 5, 10, 20, 40, 80};
//     // vector<int> b = {6, 7, 20, 80, 100};
//     // vector<int> c = {3, 4, 15, 20, 30, 70, 80, 120};
//     vector<int> a={3,3,3};
//     vector<int> b={3,3,3};
//     vector<int> c={3,3,3};
//     // removeDuplicates(a);
//     // removeDuplicates(b);
//     // removeDuplicates(c);
//     getCommon(a, b, c);
//     return 0;
// }

// wave print --> col-wise
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int row;
//     cin >> row;
//     int col;
//     cin >> col;
//     int arr[100][100];
//     // input
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int j = 0; j < col; j++)
//     {
//         if (j % 2 == 0)
//         {
//             for (int i = 0; i < row; i++)
//             {
//                 cout << arr[i][j] << " ";
//             }

//         }
//         else
//         {
//             for (int m = row - 1; m >= 0; m--)
//             {
//                 cout << arr[m][j] << " ";
//             }

//         }
//     }
//     return 0;
// }

// wave print --> row-wise
//  #include <bits/stdc++.h>
//  using namespace std;
//  int main()
//  {
//      int row;
//      cin >> row;
//      int col;
//      cin >> col;
//      int arr[100][100];
//      // input
//      for (int i = 0; i < row; i++)
//      {
//          for (int j = 0; j < col; j++)
//          {
//              cin >> arr[i][j];
//          }
//      }
//      for (int j = 0; j < row; j++)
//      {
//          if (j % 2 == 0)
//          {
//              for (int i = 0; i < col; i++)
//              {
//                  cout << arr[j][i] << " ";
//              }

//         }
//         else
//         {
//             for (int m = col - 1; m >= 0; m--)
//             {
//                 cout << arr[j][m] << " ";
//             }

//         }
//     }
//     return 0;
// }

// spiral print
// #include <iostream>
// using namespace std;

// void spiralPrint(int arr[][100], int row, int col)
// {
//     // all indices
//     int count = 0;
//     int totalSize = row * col;

//     int startRow = 0;
//     int startCol = 0;
//     int endRow = row - 1;
//     int endCol = col - 1;

//     while (count < totalSize)
//     {
//         // starting row
//         for (int i = startCol; i <= endCol && count < totalSize; i++)
//         {
//             cout << arr[startRow][i] << " ";
//             count++;
//         }
//         startRow++;//to prevent from printing duplicate ele's
//         // ending column
//         for (int i = startRow; i <= endRow && count < totalSize; i++)
//         {
//             cout << arr[i][endCol] << " ";
//             count++;
//         }
//         endCol--;
//         // ending row
//         for (int i = endCol; i >= startCol && count < totalSize; i--)
//         {
//             cout << arr[endRow][i] << " ";
//             count++;
//         }
//         endRow--;
//         // starting column
//         for (int i = endRow; i >= startRow && count < totalSize; i--)
//         {
//             cout << arr[i][startCol] << " ";
//             count++;
//         }
//         startCol++;
//     }
// }
// int main()
// {
//     int row;
//     cin >> row;
//     int col;
//     cin >> col;
//     int arr[100][100];
//     // input
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     spiralPrint(arr, row, col);
//     return 0;
// }

// Add two numbers represented by two arrays
//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends

// class Solution{
//     public:
//     string calc_Sum(int *a,int n,int *b,int m){
//     // Complete the function
//     string ans;

//     int carry=0;

//     int i=n-1;
//     int j=m-1;

//     while(i>=0 && j>=0){
//         int x=a[i]+b[j]+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');
//         carry=x/10;
//         i--;
//         j--;
//     }
//     while(i>=0){
//         int x=a[i]+0+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');//conversion from int to save as a string
//         carry=x/10;
//         i--;
//     }
//     while(j>=0){
//         int x=0+b[j]+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');//conversion from int to save as a string
//         carry=x/10;
//         j--;
//     }
//     //left out carry
//     if(carry){
//         ans.push_back(carry+'0');

//     }
//     //if 00120 is the answer cut to 120
//     while(ans[ans.size()-1]=='0'){
//         ans.pop_back();
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int a[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>a[i];
// 	    }
// 	    int m;
// 	    cin>>m;
// 	    int b[m];
// 	    for(int i=0;i<m;i++){
// 	        cin>>b[i];
// 	    }
// 	    Solution ob;
// 	    cout << ob.calc_Sum(a,n,b,m) << endl;
// 	}
// 	return 0;
// }
// // } Driver Code Ends

// factorial of a big number
//{ Driver Code Starts
//  Initial Template for C++
//  #include <bits/stdc++.h>
//  using namespace std;

// // } Driver Code Ends
// //User function template for C++

// class Solution {
// public:
//     vector<int> factorial(int N){
//         // code here
//         vector<int> ans;
//         ans.push_back(1);
//         int carry=0;
//         for(int i=2;i<=N;i++){//1-based indexing --> bahar vala loop
//             for(int j=0;j<ans.size();j++){ // array ke andar vala loop
//                 int x=ans[j]*i+carry;//jo bhi ans me pda h usko multiply kardo i se

//               ans[j]=x%10;
//               carry=x/10;
//               }
//               while(carry){
//                   ans.push_back(carry%10);
//                   carry=carry/10;

//             }
//               carry=0;

//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin >> N;
//         Solution ob;
//         vector<int> result = ob.factorial(N);
//         for (int i = 0; i < result.size(); ++i){
//             cout<< result[i];
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends

// #include <bits/stdc++.h>
// using namespace std;
// void getFactorial(int N)
// {
//     vector<int> ans;
//     ans.push_back(1);
//     int carry = 0;
//     for (int i = 2; i <= N; i++)
//     {
//         for (int j = 0; j < ans.size(); j++)
//         {
//             int x = ans[j] * i + carry;
//             ans[j] = x % 10;
//             carry = x / 10;
//         }
//         while (carry)
//         {
//             ans.push_back(carry % 10);
//             carry = carry / 10;
//         }
//         carry = 0;
//     }
//     reverse(ans.begin(), ans.end());
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i];
//     }
//     cout << endl;
// }

// int main()
// {
//     int N;
//     // cin >> N;
//     // getFactorial(N);
//     cout<<INT_MAX<<endl;
//     return 0;
// }

