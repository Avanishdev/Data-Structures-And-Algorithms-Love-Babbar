#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "H##e#*l*l*o";
    int hash=0;
    int star=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#')
        {
            hash++;
        }
        else if (s[i] == '*')
        {
            star++;
        }
    }
    if (star - hash==0)
    {
        cout << "valid string" << endl;
        return 0;
    }
    cout << "Invalid" << endl;
}