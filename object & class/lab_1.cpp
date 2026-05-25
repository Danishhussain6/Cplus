#include <iostream>
using namespace std;

class Book { // Class definition
public:
    string title;
    
    void showTitle() {
        cout << "Book Title: " << title << endl;
    }
};

int main() {
    Book b1; // Object creation
    b1.title = "C++ Programming"; // Assign value
    b1.showTitle(); // Call function

    return 0;
}