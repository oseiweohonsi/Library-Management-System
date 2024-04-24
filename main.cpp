#include "Book.h"
#include <iostream>
#include <vector>
using namespace std;
void menu(); // display menu options
void addBooks(Book, vector<Book>);
int main()
{
    vector<Book> books; // holds a list of book objects
    Book a_book;        // a book object
    
    menu();
    int choice;
    do
    {
        cout << "\n";
        menu();
        cout << "Select a menu option: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addBooks(a_book, books);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            // view all books
            break;
        case 6:
            break;
        default:
            break;
        }
    } while (choice != 6);

    return 0;
}
void menu()
{
    cout << "Library Management System\n";
    cout << "1. Add Book" << endl;
    cout << "2. Remove Book" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Edit Book" << endl;
    cout << "5. View all Books" << endl;
    cout << "6. Quit" << endl;
}

Book getInfo()
{
    Book book;
    string author, genre, title;
    cout << "Author: ";
    cin.ignore();
    cin >> author;
    book.setAuthor(author);
    cout << "Title: ";
    cin.ignore();
    cin >> title;
    book.setTitle(title);
    cout << "Genre: ";
    cin.ignore();
    cin >> genre;
    book.setGenre(genre);
    // add book to vector
    return book;
}

// add books to the library and file
void addBooks(Book newBook, vector<Book> books)
{
    newBook = getInfo();
    books.push_back(newBook);
}