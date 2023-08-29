// #include<iostream>
// using namespace std;

// class Vehicle {
//     protected:
//         string make;
//         string model;
//         int year;
//     public:
//         Vehicle(string m, string md, int y) {
//             make = m;
//             model = md;
//             year = y;
//         }
//         virtual void getDetails() = 0; // declare as pure virtual function, means it has to be declared in any class that inherits Vehicle class
// };

// class Car: public Vehicle {
//     public:
//         Car(string m, string md, int y) : Vehicle(m, md, y) {} // add constructor for Car class
//         void getDetails() {
//             cout << make << " " << model << " " << year << endl;
//         }
// };

// int main() {
//     Vehicle* v = new Car("Toyota", "Camry", 2021);
//     v->getDetails();
//     delete v;
//     return 0;
// }

// // There can be other ways to solve the errors.


// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     double width, height;
//     Shape(double w, double h) {
//         this->width = w;
//         this->height = h;
//     }
// };

// class Rectangle : public Shape {
// public:
//     Rectangle(double w,double h):Shape(w,h){}
//     // Rectangle(double w, double h){
//     //     this->width = w;
//     //     this->height = h;
//     // }
//     double area() {
//         return this->width * this->height;
//     }
// };

// int main() {
//     Rectangle r(5, 4);
//     cout << "Area of the rectangle is: " << r.area() << endl;
//     return 0;
// }


// class Animal {
// public:
//     string name;
//     Animal() {
//         cout << "Animal Constructor called!" << endl;
//     }
//     ~Animal() {
//         cout << "Animal Destructor called!" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     string breed;
//     Dog(string breed) : Animal() {
//         this->breed = breed;
//         cout << "Dog Constructor called!" << endl;
//     }
//     ~Dog() {
//         cout << "Dog Destructor called!" << endl;
//     }
// };

// int main() {
//     Dog* dog = new Dog("Poodle");
//     delete dog;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     void draw() {
//         cout << "Drawing a shape" << endl;
//     }
// };

// class Circle: public Shape {
// public:
//     void draw(int radius) {
//         cout << "Drawing a circle with radius " << radius << endl;
//     }
// };

// int main() {
//     Circle c;
//     c.draw(7);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Shape {
//     public:
//         virtual double area() = 0;
//         virtual void display() = 0;
// };

// class Rectangle : public Shape {
//     private:
//         double length;
//         double width;
//     public:
//         Rectangle(double l, double w) {
//             length = l;
//             width = w;
//         }
//         double area() const{
//             return length * width;
//         }
//         void display() const {
//             cout << "Rectangle with length " << length << " and width " << width << endl;
//         }
// };

// int main() {
//     Shape* s = new Rectangle(5, 10);
//     cout << "Area of rectangle is: " << s->area() << endl;
//     s->display();
//     delete s;
//     return 0;
// }


