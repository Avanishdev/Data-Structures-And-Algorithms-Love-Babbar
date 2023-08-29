#include<iostream>
#include<stack>
using namespace std;
class Stack{
    private:
    int top1;
    int top2;
    int size;
    int *arr;
    public:
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
    void push1(int data){
        if(top2-top1>1){
            top1++;
            arr[top1]=data;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        else{
            top1--;
        }
    }
    int getTop1(){
       if(top1==-1){
            cout<<"Stack empty"<<endl;
            return -1;
        }
        return arr[top1];
    }
    bool isEmpty1(){
        return top1==-1;
    }
    bool isEmpty2(){
        return top2==size;
    }
    void push2(int data){
        if(top2-top1>1){
            top2--;
            arr[top2]=data;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top2++;
    }
    int getTop2(){
        if(top2==size){
            cout<<"Stack empty"<<endl;
            return -1;
        }
        return arr[top2];
    }
};
int main(){
    Stack s(10);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);

    s.push2(100);
    s.push2(200);
    s.push2(300);
    s.push2(400);

    while(!s.isEmpty1()){
        cout<<s.getTop1()<<" ";
        s.pop1();
    }
    while(!s.isEmpty2()){
        cout<<s.getTop2()<<" ";
        s.pop2();
    }

    return 0;
}
