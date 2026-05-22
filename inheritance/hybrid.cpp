#include <iostream>
using namespace std;

class Student {
public:
    void studentInfo() {
        cout << "Student Information" << endl;
    }
};

class Marks : public Student {
public:
    void marks() {
        cout << "Marks: 90" << endl;
    }
};

class Sports {
public:
    void sportsMarks() {
        cout << "Sports Marks: 95" << endl;
    }
};

class Result : public Marks, public Sports {
public:
    void total() {
        cout << "Total Result Declared" << endl;
    }
};

int main() {

    Result r;

    r.studentInfo();
    r.marks();
    r.sportsMarks();
    r.total();

    return 0;
}