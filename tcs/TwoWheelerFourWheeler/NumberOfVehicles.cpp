#include <iostream>
using namespace std;
int main()
{
    int v;
    int W;
    cin >> v;
    cin >> W;
    if ((W & 1) == 1 || W < 2 || W <= v)
    {
        cout << "Invalid input" << endl;
        return 0;
    }
    int y = (W - (2 * v)) / 2;
    int x = v - y;
    cout << x << " " << y << endl;
}