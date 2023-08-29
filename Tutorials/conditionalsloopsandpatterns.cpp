// solid Figure
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin >> row;
//     cin >> col;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Hollow Figure
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      for(int row=0;row<n;row++){
//          if(row==0 || row==n-1){
//              for(int col=0;col<n;col++){
//                  cout<<"*";
//              }
//          }
//          else{
//              //remaining star
//              cout<<"*";
//              for(int space=0;space<n-2;space++){
//                  cout<<" ";
//              }
//              //remaining star
//              cout<<"*";
//          }
//          cout<<endl;
//      }
//      return 0;
//  }

// Half Pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//      for(int col=0;col<row+1;col++){
//          cout<<"* ";
//      }
//      cout<<endl;
//      }
//  return 0;
//  }

// Inverted Half Pyramid
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//  for(int col=0;col<n-row;col++){
//      cout<<"* ";
//  }cout<<endl;
//  }
//  return 0;
//  }

// Numeric Half Pyramid
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<col+1<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

// Inverted Numeric Half Pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//  for(int col=0;col<n-row;col++){
//      cout<<col+1<<" ";
//  }
//  cout<<endl;
//  }
//  return 0;
//  }

// Full Pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//  //spaces
//  for(int space=0;space<n-row-1;space++){
//      cout<<" ";
//  }
//  //stars
//  for(int col=0;col<row+1;col++){
//      cout<<"* ";
//  }
//  cout<<endl;
//  }
//  return 0;
//  }

// Inverted Full Pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//      //spaces
//      for(int space=0;space<row;space++){
//          cout<<" ";
//      }
//      //stars
//      for(int col=0;col<n-row;col++){
//          cout<<"* ";
//      }
//      cout<<endl;
//  }
//  return 0;
//  }

// Numeric full pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int row = 1; row <= n; row++)
//   {
//     // spaces
//     for (int space = 0; space < n - row; space++)
//     {
//       cout << " ";
//     }
//     // numbers first part
//     for (int i = row; i < 2 * row; i++)
//     {
//       cout << i;
//     }
//     // numbers second part
//     int element = 2 * (row - 1);
//     for (int j = 1; j <= row - 1; j++)
//     {
//       cout << element--;
//     }
//     cout << endl;
//   }
//   return 0;
// }

// Hollow Full Pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//    //spaces
//    for(int space=0;space<n-row;space++){
//      cout<<" ";
//    }
//    //star
//    if(row==0 || row==n-1 ){//third condition ==> row==2*row
//      for(int star=0;star<2*row+1;star++){
//        cout<<"*";
//      }
//    }
//    else{
//      cout<<"*";
//      for(int space=1;space<2*row;space++){
//        cout<<" ";
//      }
//      cout<<"*";
//    }
//    cout<<endl;
//  }
//  return 0;
//  }

// //Hollow Inverted Half Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
// for(int row=0;row<n;row++){
// if(row==0 || row==n-1){
//   //star
//   for(int i=0;i<n-row;i++){
//     cout<<"*";
//   }
// }
// else{
//   //first star
//   cout<<"*";
//   // spaces
//   for(int space=0;space<n-row-1;space++){
//     cout<<" ";
//   }
//   //last star
//   cout<<"*";
// }
// cout<<endl;
// }
// return 0;
// }

// Numeric Hollow Pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//    int n;
//    cin>>n;
//  for(int row=0;row<n;row++){
//    //spaces
//  for(int space=0;space<n-row;space++){
//  cout<<" ";
//  }
//  //numbers
//  if(row==0 || row==n-1){
//    for(int i=1;i<=row+1;i++){
//      cout<<i;
//    }
//  }
//  else{
//    cout<<;
//    for(int space=1;space<2*row;space++){
//      cout<<" ";
//    }
//    cout<<;
//  }
//  cout<<endl;
//  }
//  return 0;
//  }

// Solid Diamond
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int row = 0; row < n; row++)
//   {
//     // spaces
//     for (int space = 0; space < n - row; space++)
//     {
//       cout << " ";
//     }
//     // stars
//     for (int star = 0; star < row + 1; star++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
//    for (int row = 0; row < n; row++)
//   {
//     // spaces
//     for (int space = 0; space <row+1; space++)
//     {
//       cout << " ";
//     }
//     // stars
//     for (int star = 0; star < n - row; star++)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

// Hollow Diamond
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   for (int row = 0; row < n; row++)
//   {
//     // spaces
//     for (int space = 0; space < n - row-1; space++)
//     {
//       cout << " ";
//     }
//     // stars
//       for(int col=0;col<2*row+1;col++){
//         if(col==0){
//           cout<<"*";
//         }
//         else if(col==2*row){
//           cout<<"*";
//         }
//         else{
//           cout<<" ";
//         }
//       }
//     cout << endl;
//   }
//   for (int row = 0; row < n; row++)
//   {
//     // spaces
//     for (int space = 0; space < row; space++)
//     {
//       cout << " ";
//     }
//     // stars
//       for(int col=0;col<2*n-2*row-1;col++){
//         if(col==0 || col==2*n-2*row-2){
//           cout<<"*";
//         }
//         else{
//           cout<<" ";
//         }
//       }
//     cout << endl;
//   }

//   return 0;
// }

// Flipped Solid Diamond
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//    int n;
//    cin >> n;
//    for (int row = 0; row < n; row++)
//    {
//      // stars first part
//      for (int star = 0; star < n - row; star++)
//      {
//        cout << "*";
//      }
//      // spaces
//        for(int space=0;space<2*row+1;space++){
//         cout<<" ";
//        }
//        //stars second part
//        for(int star=0;star<n-row;star++){
//          cout<<"*";
//        }
//      cout << endl;
//    }
//    for (int row = 0; row < n; row++)
//    {
//      // stars first part
//      for (int star = 0; star < row+1; star++)
//      {
//        cout << "*";
//      }
//      // spaces
//        for(int space=0;space<2*n-2*row-1;space++){
//         cout<<" ";
//        }
//        //stars second part
//        for(int star=0;star<row+1;star++){
//          cout<<"*";
//        }
//      cout << endl;
//    }
//    return 0;
//  }

// Fancy Pattern
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//    for(int col=0;col<row+1;col++){
//     if(col!=row){
//   cout<<row+1<<"*";
//     }
//  else{
//    cout<<row+1;
//  }

//   }
//   cout<<endl;
// }
// for(int row=0;row<n;row++){
//   for(int col=0;col<n-row;col++){
//     cout<<n-row;
//      if(col!=n-row-1){
//  cout<<"*";
//   }

// }
// cout<<endl;
// }
// return 0;
// }

// Alphabet Palindrome Pyramid
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         int col ;
//         for (col=0; col < row + 1; col++)
//         {
//             int ans=col+1;
//             char ch=ans+'A'-1;//logic
//             cout << ch<<" ";
//             ch++;
//         }
//         //printing reverse counting
//         for(col=row;col>0;col--){
//             int ans=col;
//             char ch=ans+'A'-1;//logic
//             cout<<ch<<" ";

//         }
//             cout << endl;
//     }
//     return 0;
// }

// Hollow Inverted Half Pyramid
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      // for(int row=0;row<n;row++){
//      //  for(int col=row+1;col<=n;col++){
//      //     if(col==row+1 || col==n || row==0){
//      //         cout<<col;
//      //     }
//      //     else{
//      //         cout<<" ";
//      //     }
//      //  }
//      //     cout<<endl;
//      // }
//      //Or
//      for(int row=0;row<n;row++){
//          for(int col=row+1;col<=n;col++){
//              if(col==row+1 || col==n || row==0){
//                  cout<<"*";
//              }
//              else{
//                  cout<<" ";
//              }
//          }
//          cout<<endl;
//      }
//      return 0;
//  }

// Hollow Full Pyramid
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      for(int row=0;row<n;row++){
//          //spaces
//          for(int space=1;space<n-row;space++){
//              cout<<" ";
//          }
//          //stars
//          if(row==0){
//              for(int col=0;col<row+1;col++){
//                  cout<<"*";
//              }
//          }
//          else{
//              cout<<"*";
//              //spaces
//              for(int space=0;space<2*row;space++){
//                  cout<<" ";
//              }
//              cout<<"*";
//          }
//          cout<<endl;
//      }
//      return 0;
//  }

// Numeric Hollow Half Pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      for(int row=0;row<n;row++){
//          for(int col=0;col<row+1;col++){
//              if(col==0 || col==row || row==n-1){
//                  cout<<col+1;
//              }
//              else{
//                  cout<<" ";
//              }
//          }
//          cout<<endl;
//      }
//  return 0;
//  }

// Numeric hollow inverted half pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//  for(int row=0;row<n;row++){
//  for(int col=0;col<n-row;col++){
//      if(col==0 || col==n-row-1 || row==0){
//      cout<<row+col+1;
//      }
//      else{
//          cout<<" ";
//      }
//  }
//  cout<<endl;
//  }
//  return 0;
//  }

// Numeric palindrome equilateral pyramid
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cin>>n;
//      for(int row=0;row<n;row++){
//          //spaces
//          for(int space=0;space<n-row;space++){
//              cout<<" ";
//          }
//          for(int col=0;col<row+1;col++){
//              cout<<col+1;
//          }
//          //printing reverse counting
//          for(int col=row;col>0;col--){
//              cout<<col;
//          }
//          cout<<endl;
//      }
//  return 0;
//  }

// fancy pattern 1
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//      //stars
//      for(int star=0;star<n+3-row;star++){
//          cout<<"*";
//      }
//      //numbers
//      for(int col=0;col<row+1;col++){
//          if(col==row){
//          cout<<row+1;
//          }
//          else{
//              cout<<row+1<<"*";
//          }
//      }
//       //stars
//      for(int star=0;star<n+3-row;star++){
//          cout<<"*";
//      }
//      cout<<endl;
//  }
//  return 0;
//  }

// Solid half diamond
//  #include<iostream>
//  using namespace std;
//  int main(){
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++){
//      for(int col=0;col<row+1;col++){
//          cout<<"*";
//      }
//      //reverse
//      cout<<endl;
//  }
//  for(int row=0;row<n;row++){
//      for(int rev=n-row-1;rev>0;rev--){
//          cout<<"*";
//      }
//      cout<<endl;
//  }
//  return 0;
//  }

// fancy pattern 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         if (row == 0)
//         {
//             cout << "*" << endl;
//         }
//         cout << "*";
//         for (int col = 1; col < row + 1; col++)
//         {
//             cout << col;
//         }
//         // reverse
//         for (int rev = row + 1; rev > 0; rev--)
//         {
//             cout << rev;
//         }
//         cout << "*";

//         cout << endl;
//     }
//     for (int row = 0; row < n - 1; row++)
//     {
//         cout << "*";
//         for (int col = 1; col < n - row; col++)
//         {
//             cout << col;
//         }
//         // reverse
//         for (int rev = n - row - 2; rev > 0; rev--)
//         {
//             cout << rev;
//         }
//         cout << "*";
//         if (row == n - 2)
//         {
//             cout << endl;
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// fancy pattern 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int num = 1;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < row + 1; col++)
//         {
//             if (col == row)
//             {
//                 cout << num;
//             }
//             else
//             {
//                 cout << num << "*";
//             }
//             num++;
//         }
//         cout << endl;
//     }
//     int start = num - n;//logic
//     for (int row = 0; row < n; row++)
//     {
//         int k=start;
//         for (int col = 0; col < n - row; col++)
//         {
//             if(col==n-row-1){

//             cout<<k;
//             }
//             else{
//                 cout<<k<<"*";
//             }
//             k++;
//         }
//         start=start-(n-row-1);//updated start
//         cout << endl;
//     }
//     return 0;
// }

// floyd's triangle pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 1;
//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0 ; col < row + 1; col++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// butterfly pattern
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int row = 0; row < n; row++)
//     {
//         // stars
//         for (int col = 0; col < row + 1; col++)
//         {
//             cout << "*";
//         }
//         //spaces
//         for(int col=n-row;col>0;col--){
//             cout<<"  ";
//         }
//         //stars again
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout << endl;
//     }
//     for (int row = 0; row < n; row++)
//     {
//         // stars
//         for (int col = n-row; col >0; col--)
//         {
//             cout << "*";
//         }
//         //spaces
//         for(int col=0;col<row+1;col++){
//             cout<<"  ";
//         }
//         //stars again
//         for(int col=n-row;col>0;col--){
//             cout<<"*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Pascals Triangle
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int row=1;row<=n;row++){
    int C=1;
for(int col=1;col<=row;col++){
    cout<<C<<" ";
    C=C*(row-col)/col;
}
cout<<endl;
}
return 0;
}