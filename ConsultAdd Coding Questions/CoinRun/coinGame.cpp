#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) cin >> a[i];
    int a[n]={2,-9,15,2};
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        // cout<<sum<<endl;
        if (sum < 1) {
            sum = -sum;
            ans += sum;
            sum = 0;
        }
    }
    cout << ans << endl;
}