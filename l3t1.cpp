#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book& other) {// new class to copyi
        title = other.title;
        author = other.author;
        price = other.price;
    }

    void display() const {
        cout << "title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "price: " << price << endl;
    }
};
int main() {
    string title, author;
    double price;

    Book b1;
    cout << "default book:" << endl;
    b1.display();

    cout << "enter book title: ";
    getline(cin, title);

    cout << "enter author name: ";
    getline(cin, author);

    cout << "enter book price: ";
    cin >> price;

    Book b2(title, author, price);
    cout << "Book created using user input;" << endl;
    b2.display();

    cin.ignore();

    cout << "Enter title for another book: ";
    getline(cin, title);

    Book b3(title);
    cout << "\nBook created with title only:" << endl;
    b3.display();

    Book b4(b2);
    cout << "\nCopied book:" << endl;
    b4.display();

    return 0;
}
