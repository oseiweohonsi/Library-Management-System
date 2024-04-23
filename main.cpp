#include "Book.h"
#include <iostream>
#include <vector>
using namespace std;
void menu(); // display menu options
Book getInfo();
int main()
{
    vector<Book> books; // holds a list of book objects
    Book a_book;        // a book object
    menu();
    int choice;
    do
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            a_book = getInfo();
            books.push_back(a_book);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            // view all books
            for (int i = 0; i < books.size(); i++)
            {
                cout << "i + 1" << endl;
                cout << books[i].getAuthor() << endl;
                cout << books[i].getTitle() << endl;
                cout << books[i].getGenre() << endl;
            }
            /* code */
            break;
        case 6:
            /* code */
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
    return book;
}