#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
    virtual void move() = 0;
};

class Dog : public Animal {
public:
    void sound() { cout << "Dog Barks" << endl; }
    void move() { cout << "Dog Runs" << endl; }
};

class Bird : public Animal {
public:
    void sound() { cout << "Bird Chirps" << endl; }
    void move() { cout << "Bird Flies" << endl; }
};

int main() {
    Animal *a[2];
    a[0] = new Dog();
    a[1] = new Bird();

    a[0]->sound();
    a[0]->move();
    a[1]->sound();
    a[1]->move();

    return 0;
}




