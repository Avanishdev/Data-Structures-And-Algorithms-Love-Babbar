#include <iostream>
#include <vector>
using namespace std;

// void printStr(vector<string> &tmp)
// {
//     for (int i = 0; i < tmp.size(); i++)
//     {
//         cout << tmp[i];
//     }
//     cout << endl;
// }
// void reverseWords(string s)
// {
//     vector<string> tmp;
//     string str = "";
//     for (int i = 0; i<s.length(); i++)
//     {
//         if (s[i] == ' ')
//         {
//             tmp.push_back(str);
//             str = "";
//         }
//         else
//             str += s[i];
//     }
//     tmp.push_back(str);
//     // printStr(tmp);
// }

// int main()
// {
//     string s = "Namaste Bharat";
//     reverseWords(s);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// char maxOccurring(char* str)
// {
//     int count[256] = {0};
//     int max = INT_MIN;
//     char answer;

//     for (int i = 0; str[i] != '\0'; i++) {
//         count[str[i]]++;
//         if (max < count[str[i]]) {
//             max = count[str[i]];
//             answer= str[i];
//         }
//     }
//     return answer;
// }

// int main()
// {
//     char str[] = "sample string";
//     cout << maxOccurring(str);
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printCharArray(char str[],int n){
//     for(int i=0;i<n;i++){
//         cout<<str[i];
//     }
//     cout<<endl;
// }
// void removeDuplicate(char str[], int n) {
//   // str is character array and n is the lenght of the character array
// 	int index = 0;
// 	for (int i=0; i<n; i++) {
// 		int j;
// 		for (j=0; j<i; j++)
// 			if (str[i] == str[j])
//             break;
//             if(i==j)
//             // cout<<str[index]<<endl;
//             // cout<<str[j]<<endl;
//             str[index++] = str[j];
// 		}

// 	// return str;
//     printCharArray(str,n);
// }
// int main(){
// char str[]="sample string";
// int n=sizeof(str)/sizeof(char);
// cout<<n<<endl;
// removeDuplicate(str,n);
// return 0;
// }

// string isPalindrome(string S)
// {
// 		int N = S.length();
//     for (int i = 0; i < (N/2); i++) {
// 		    if (S[i] != S[N-i-1]) {
//             cout<<"No"<<endl;
//             return "No";
//         }
//     }
//      cout<<"Yes"<<endl;
//     return "Yes";
// }

// int main(){
//     string S="eye";
//     isPalindrome(S);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     char char_array[] = {'L','A','K','S','H','A','Y'};
//     int array_size = sizeof(char_array)/sizeof(char);
//     string j = "";
//     int i;
//     for(i = 0; i < array_size; i++) {
//         j = j + char_array[i];
//     }
//     cout << j <<endl;
// }

void reverseString(char input[], int n, int start)
{
    for (int i = start, j = n - 1 + start; i < j; i++, j--)
    {
        int temp = input[j];
        input[j] = input[i];
        input[i] = temp;
    }
}

void reverseEachWord(char input[])
{
    int start = 0, count = 1, i = 0;
    while (input[i] != 0)
    {
        i++;
        count++;
        // cout<<i<<endl;
        // cout<<count<<endl;
        if ((input[i] == ' ' || input[i] == '\0'))
        {
            reverseString(input, count - 1, start);
            // cout<<start<<endl;
            start = i + 1;
            count = 0;
        }
    }
}
void printCharArray(char str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
    cout << endl;
}
int main()
{
    char ch[] = "string is sample";
    int N = sizeof(ch) / sizeof(char);
    cout << N << endl;
    reverseEachWord(ch);
    printCharArray(ch, N);
    return 0;
}