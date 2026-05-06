#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    float basicSalary;

public:
    void setData(string n, float salary) {
        name = n;
        basicSalary = salary;
    }

    float calculateSalary() {
        return basicSalary + (0.2 * basicSalary); // bonus
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee e;
    e.setData("Danish", 20000);
    e.display();
}