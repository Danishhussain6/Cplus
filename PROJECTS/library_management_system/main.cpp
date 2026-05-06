#include <iostream>
#include <fstream>
using namespace std;

class Book {
    int id;
    string title;
    bool issued;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        issued = false;
    }

    void display() {
        cout << "ID: " << id
             << " | Title: " << title
             << " | Status: " << (issued ? "Issued" : "Available")
             << endl;
    }

    int getId() { return id; }
    bool isIssued() { return issued; }

    void issue() { issued = true; }
    void giveBack() { issued = false; }
};


// Add Book
void addBook() {
    Book b;
    ofstream file("library.dat", ios::binary | ios::app);

    b.input();
    file.write((char*)&b, sizeof(b));

    file.close();
    cout << "Book added!\n";
}


// Display Books
void displayBooks() {
    Book b;
    ifstream file("library.dat", ios::binary);

    while (file.read((char*)&b, sizeof(b))) {
        b.display();
    }

    file.close();
}


// Issue Book
void issueBook() {
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    fstream file("library.dat", ios::binary | ios::in | ios::out);
    Book b;

    while (file.read((char*)&b, sizeof(b))) {
        if (b.getId() == id && !b.isIssued()) {
            b.issue();
            file.seekp(-sizeof(b), ios::cur);
            file.write((char*)&b, sizeof(b));
            cout << "Book issued!\n";
            file.close();
            return;
        }
    }

    cout << "Book not found or already issued\n";
    file.close();
}


// Return Book
void returnBook() {
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    fstream file("library.dat", ios::binary | ios::in | ios::out);
    Book b;

    while (file.read((char*)&b, sizeof(b))) {
        if (b.getId() == id && b.isIssued()) {
            b.giveBack();
            file.seekp(-sizeof(b), ios::cur);
            file.write((char*)&b, sizeof(b));
            cout << "Book returned!\n";
            file.close();
            return;
        }
    }

    cout << "Book not found or not issued\n";
    file.close();
}


// Main Menu
int main() {
    int choice;

    do {
        cout << "\n1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: issueBook(); break;
            case 4: returnBook(); break;
            case 5: cout << "Exit\n"; break;
            default: cout << "Invalid\n";
        }

    } while (choice != 5);

    return 0;
}