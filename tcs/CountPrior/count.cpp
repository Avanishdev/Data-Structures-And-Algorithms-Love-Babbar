#include <iostream>
using namespace std;
int main()
{
    // int arr[] = {3, 4, 5, 8, 9};
    int arr[] = {7, 4, 8, 2, 9};
    int N = sizeof(arr) / sizeof(int);
    int count = 1;
    for (int i = 1; i < N; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}