#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    void setData(float l, float w) {
        length = l;
        width = w;
    }

    float getLength() {
        return length;
    }

    float getWidth() {
        return width;
    }

    float area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.setData(10.5, 5.2);

    cout << "Length = " << r.getLength() << endl;
    cout << "Width  = " << r.getWidth() << endl;
    cout << "Area of Rectangle = " << r.area() << endl;

    return 0;
}




