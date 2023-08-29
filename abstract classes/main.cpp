#include<iostream>
#include"bird.h"
using namespace std;
void birdDoesSomething(Bird*&bird){
    bird->eat();
    bird->sleep();
    bird->fly();
}
int main(){
    Bird* bird=new Sparrow();
    birdDoesSomething(bird);
    return 0;
}