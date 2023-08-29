//program cannot be executed because g++ newer version isn't compatible with it.
#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>

class Bird{
    public:
    virtual void eat()=0;
    virtual void sleep()=0;
    virtual void fly()=0;
};
class Sparrow:public Bird{
    private:
    void eat(){
        std::cout<<"Sparrow is eating\n";
    }
    void sleep(){
        std::cout<<"Sparrow is sleeping\n";
    }
    void fly(){
        std::cout<<"Sparrow is flying\n";
    }
};
class Eagle:public Bird{
    private:
    void eat(){
        std::cout<<"Eagle is eating faster\n";
    }
    void sleep(){
        std::cout<<"Eagle is sleeping faster\n";
    }
    void fly(){
        std::cout<<"Eagle is flying faster\n";
    }
};
#endif //BIRD_H