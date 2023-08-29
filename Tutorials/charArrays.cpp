// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// char ch[10];
// cin>>ch;//wholely string until space
// cout<<ch<<endl;//single word "bhaiya"
// ch[4]='h';
// cout<<ch<<endl;
// cout<<ch[7]<<endl;
// // for(int i=0;i<10;i++){
// //     cout<<ch[i];
// // }
// cout<<endl;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int getLength(char ch[]){
//     int count=0;
//     int N=sizeof(ch)/sizeof(char);
//     for(int i=0;i<N;i++){
//         count++;
//     }
//     return count;
// }
// void reverse(char ch[]){
//     int s=0;int e=sizeof(ch)/sizeof(char)-1;
//     while(e>=s){
//         cout<<ch[e];
//         e--;
//     }
//     cout<<endl;
// }
// int main(){
// char ch[10];
// cin>>ch;
// // ch[4]='h';
// // cout<<ch<<endl;
// // cout<<ch[7]<<endl;
// // for(int i=0;i<10;i++){
// //     cout<<ch[i];
// // }
// cout<<getLength(ch)<<endl;
// reverse(ch);
// cout<<ch;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(char ch[]){
// int left=0;
// int right=strlen(ch)-1;

// while(left<=right){

//     if(ch[left]!=ch[right]){

//         return false;
//     }
//     else{
//         left++;
//         right--;
//     }
// }
// return true;
// }
// int main(){

// char ch[100];
// cin.getline(ch,4);
// // cout<<ch<<endl;
// // int N=sizeof(ch)/sizeof(char);
// // for(int i=0;i<N;i++){
// //     if(ch[i]==32){
// //         ch[i]='@';
// //     }
// // }
// // cout<<ch<<endl;
// if(isPalindrome(ch)){
// cout<<"It is a palindrome!"<<endl;
// }
// else{
//     cout<<"It is not a palindrome!!"<<endl;
// }
// return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void getUpperCase(char ch[])
// {
//     for (int i = 0; i < strlen(ch); i++)
//     {
//         if (ch[i] >= 'a' && ch[i] <= 'z')
//         {
//             ch[i] = ch[i] - 'a' + 'A';
//         }
//     }
//     cout << ch << endl;
// }
// void getLowerCase(char ch[])
// {
//     for (int i = 0; i < strlen(ch); i++)
//     {
//         if (ch[i] >= 'A' && ch[i] <= 'Z')
//         {
//             ch[i] = ch[i] - 'A' + 'a';
//         }
//     }
//     cout << ch << endl;
// }
// int main()
// {
//     char ch[100];
//     cin.getline(ch, 100);
//     getUpperCase(ch);
//     getLowerCase(ch);
//     return 0;
// }

// remove all Adjacent Duplicates In String
//  #include<iostream>
//  using namespace std;
//  class Solution{
//      public:

//     string removeDuplicates(string s){
//         string ans="";
//         int i=0;
//         while(i<s.length()){
//             // cout<<i<<s.length()<<endl;
//             if(ans.length()>0 && ans[ans.length()-1]==s[i]){
//                 ans.pop_back();
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//             i++;
//         }
//         return ans;
//     }
// };
// int main(){
//     string s;
//     cin>>s;
//     Solution obj;
//     string ans=obj.removeDuplicates(s);
//     cout<<ans<<endl;
// }

// macros
//  #include<iostream>
//  using namespace std;
#include <bits/stdc++.h>
using namespace std;
#define MAX(a, b) if (a > b) \
                    cout<< "a is maximum " << a<<endl; \
                    else \
                    cout << "b is maximum " << b<<endl;
string Solution(string a,string b,string c,string d);
int main()
{
    MAX(3, 4);
    return 0;
}






// #include<iostream>
// using namespace std;
// class Solution
// {
// private:
//     int data;
// public:
//     Solution(){
//       cout<<"constructor"<<endl;
//     }
//     Solution(int data){
//       this->data=data;
//       cout<<data<<endl;
//     }
//     Solution(Solution &obj){//pass by reference
//       this->data=obj.data;
//       cout<<"copy constructor"<<endl;
//     }
//     void funcTion(){
//         cout<<"Function"<<endl;
//     }
//     ~Solution(){
//       cout<<"destructor"<<endl;
//     }
// };

// int main(){
//    Solution obj;
//    Solution* ptr=new Solution(6);
//   //  (*ptr).funcTion();
//   //   Solution obj2=obj;//type 1
//   //   obj2.funcTion();
//   //   Solution obj3(obj);//type 2
//   //   Solution obj4(*ptr);//type 2
// delete ptr;//manually called destructor for dynamically created obj
//     return 0;
// }


#include <iostream>
using namespace std;
class Parent{
protected:
int number=0;
public:
int age;
string email;
void getMail(string email){
  this->email=email;//this->email=parameter vala email
  cout<<this->email<<endl;
}
};
class Derieved:public Parent{
public:
void getNum(int number){
  this->number=number;
  cout<<number<<endl;
}
};
class derievedTwo:public Parent{//hierrarical inheritance
public:
void print(){
  cout<<"Inside Derieved"<<endl;
}
};

class A{
public:
int numA=0;
void getNum(){//ambiguity
  cout<<"Inside A"<<endl;
}
void getNum(int n){
  cout<<"Example for understanding polymorphism"<<endl;
}
void getNum(int n,string s){
  cout<<"Example for understanding run-time polymorphism"<<endl;
}
void getNum(int n1,float n2){
  cout<<"Different examples for various topics"<<endl;
}
};
class B{
public:
int numB=1;
void getNum(){//ambiguity
  cout<<"Inside B"<<endl;
}
};
//Multiple inheritance
class C:public A,public B{
public:
int numC=2;
void getNumC(){
  cout<<"Inside C"<<endl;
}
};

class Param{
public:
int value;
void opeartor+(Param& obj2){
int value1=this->value;
int value2=obj2.value;
cout<<(value2-value1)<<endl;
}
};
int main() {
//  Derieved obj;
//  obj.age=123;
//  cout<<obj.age<<endl;
//  obj.getMail("demo@gmail.com");
//  obj.getNum(1234);

// A objA;
// cout<<objA.numA<<endl;

// B objB;
// cout<<objB.numA<<endl;
// cout<<objB.numB<<endl;

// C objC;
// cout<<objC.numA<<endl;
// cout<<objC.numB<<endl;
// cout<<objC.numC<<endl;

// C obj;
// obj.A::getNum();//scope resoltuion opeartor
// obj.B::getNum();//scope resolution opeartor
// obj.getNumC();

// Derieved obj1;
// obj1.getMail("demo@gmail.com");
// derievedTwo obj2;
// obj2.getMail("demo@gmail.com");

// A obj;
// obj.getNum();
// obj.getNum(5);
// obj.getNum(5,"abcd");
// obj.getNum(5,5.55f);//5.55f num ke bad f lagane se num floating point number me consider hota he

Param obj1,obj2;
obj1.value=7;
obj2.value=2;
//7-2 cahata hu
obj1+obj2;
  return 0;
}