#include <bits/stdc++.h>
using namespace std;

// void SieveOfEratosthenes(int n) {
// 	vector<bool> prime(n+1,true);
// 	for (int p = 2; p * p <= n; p++) {
// 		if (prime[p] == true) {
// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = false;
// 		}
// 	}

// 	for (int p = 2; p <=n; p++)
// 		if (prime[p])
// 			cout << p << " ";
// }

// int main() {
// 	int n = 50;
// 	SieveOfEratosthenes(n);
// 	return 0;
// }









// int main() {
//     int* p = new int;
//     *p = 42;//deferencing this i.e. (*p) pointer, we are trying to access NULL which throws an error
//     delete p;
//     return 0;
// }





// int* foo(int* p) {
//     return p;
// }

// int* foo(){
//     int*p=new int;
//     *p=10;
//     return p;
// }
// int main() {
//     int x = 10;
//     int* p = foo(&x);
//     int* q = foo();
//     cout << *q <<" "<<(*p) <<endl; // Expected output: 10, Actual output: some random value
//     return 0;
// }






// int main() {
//     int* p;//int* p=new int
//     *p = 10;
//     return 0;
// }





int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    cout << "The value of the third element in arr is " << *(ptr + 2) << endl;
    return 0;
}