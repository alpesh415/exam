#include <iostream>
using namespace std;

class Employee {
private:
    string name, designation;
    float salary;

public:
    void setData(string n, float s, string d) {
        name = n;
        salary = s;
        designation = d;
    }
    string getName() { return name; }
    float getSalary() { return salary; }
    string getDesignation() { return designation; }
};

int main() {
    Employee e;
    e.setData("alpesh", 35000, "Developer");

    cout << "Name: " << e.getName() << endl;
    cout << "Salary: " << e.getSalary() << endl;
    cout << "Designation: " << e.getDesignation() << endl;
    return 0;
}