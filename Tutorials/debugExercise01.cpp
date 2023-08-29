#include <iostream>
#include <vector>
using namespace std;
// int main(){
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i *///i=i+1
// 	cout<<++i;
// return 0;
// }

// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<-(i+j);
// }

// int main() {
// 	float l, b,P;
// 	P = 2*(l+b);
// 	cout<<"Perimeter= "<< P;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     bool isPrime = true;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime)
//     {
//         cout << "Prime" << endl;
//     }
//     else
//     {
//         cout << "Not Prime" << endl;
//     }
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        int k=0;
        for (int j=0; j<n*2-1; ++j) {
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k < 2*i+1){
                if(k==0 || k == 2*i || i == n - 1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}