// #include<iostream>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int8_t sum=0;
//     for(int i=1;i<=n;++i){
//         sum+=i;
//     }
//     cout<<(int)sum<<endl;
// 		return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     // cout<<" ";
// for(int i=1;i<=n;i++){
//     //spaces
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//     //element
//      int element=2*i-1;
//     for(int ele=1;ele<=2*i-1;ele++){
//        //reverse logic
//        if(ele<=element){
//         cout<<ele;
//        }
//        else{
//         cout<<element;
//        }
//         element--;
//     }
//     cout<<endl;

// }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   // size of the triangle
//   int N;
//   cin>>N;
//   int size = N;
//   // loop to print the pattern
//   for (int i = 0; i < size; i++) {
//     // print column
//     for (int j = 0; j <= i; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   // size of the pyramid
//   int size; cin>>size;
//   for (int i = 0; i < size; i++) {
//     // print spaces
//     for (int j = 0; j < i; j++) {
//       cout << "  ";
//     }
//     // print stars
//     for (int k =0; k <2 * (size-i) - 1; k++) {
//       cout << "* ";
//     }
//     cout << "\n";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   // heart star pattern
//   int size;
//   cin>>size;

//   for (int i = size / 2; i < size; i += 2) {
//     // print first spaces
//     for (int j = 1; j < size - i; j += 2) {
//       cout << " ";
//     }
//     // print first stars
//     for (int j = 0; j < i ; j++) {
//       cout << "*";
//     }
//     // print second spaces
//     for (int j = 1; j < size - i + 1; j++) {
//       cout << " ";
//     }
//     // print second stars
//     for (int j = 1; j < i + 1; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   // lower part
//   // inverted pyramid
//   for (int i = size; i > 0; i--) {
//     for (int j = 0; j < size - i; j++) {
//       cout << " ";
//     }
//     for (int j = 1; j < i * 2; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// // int binaryToDecimal(int b){
// //     int ans=0;
// //     int c=0;
// //     while(b){
// //         if(b%10==1)
// //         {
// //         ans=ans+ (1 << c);
// //         }
// //         c++;
// //         b=b/10;
// //     }
// //     return ans;
// // }
// int binaryToDecimal(int b){
//     int ans=0;
//     int c=0;
//     while(b){
//         ans=ans+(b % 10) * (1 << c++);
//         b/=10;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << binaryToDecimal(n) << endl;
// }

#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '/':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '*':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}