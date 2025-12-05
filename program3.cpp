
#include <iostream>
using namespace std;

class Shape {
protected:
    string color;
public:
    void setColor(string c){ color = c; }
    string getColor(){ return color; }

    virtual void area() = 0;
};

class Circle : public Shape {
private:
    int r;
public:
    Circle(int radius){ r = radius; }
    void area(){
        cout<<"Circle Area: "<<3.14*r*r<<endl;
    }
};

class Rectangle : public Shape {
private:
    int l,w;
public:
    Rectangle(int a,int b){ l=a; w=b; }
    void area(){
        cout<<"Rectangle Area: "<<l*w<<endl;
    }
};

int main(){
    Circle c(5);
    Rectangle r(4,6);

    c.setColor("Red");
    r.setColor("Blue");

    c.area();
    r.area();
}