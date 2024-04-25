#include "Book.h"
#include <iostream>
#include <vector>
#include <cctype> // for character conversion
using namespace std;
void menu();                                // display menu options
void addBooks(Book, vector<Book> &);        // add a book to library
void viewBooks(vector<Book> &);             // view all books
void removeBook(vector<Book> &);            // remove book from library
bool searchForBook(string, vector<Book> &); // search for book
int main()
{
    vector<Book> books; // holds a list of book objects
    Book a_book;        // a book object
    int choice;         // get menu option
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
            removeBook(books);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            // view all books
            viewBooks(books);
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
    getline(cin, author);

    book.setAuthor(author);
    cout << "Title: ";
    cin.ignore();
    getline(cin, title);

    book.setTitle(title);
    cout << "Genre: ";
    cin.ignore();
    getline(cin, genre);
    book.setGenre(genre);
    return book;
}

// add books to the library and file
void addBooks(Book newBook, vector<Book> &books)
{
    newBook = getInfo();
    books.push_back(newBook);
}

// see all books
void viewBooks(vector<Book> &books)
{
    for (int i = 0; i < books.size(); i++)
    {
        cout << i + 1 << endl;
        cout << "Author: " << books[i].getAuthor() << " ";
        cout << "Title: " << books[i].getTitle() << " ";
        cout << "Genre: " << books[i].getGenre() << endl;
    }
}

// remove a book
void removeBook(vector<Book> &books)
{
    string a; // store the author
    string g; // store the genre
    string t; // store the title
    // first find the book
    bool search;
    cout << "Locate book\n";
    cout << "1. Author\n";
    cout << "2. Genre\n";
    cout << "3. Title\n";
    cout << "Select search parameter: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Author: ";
        cin.ignore();
        getline(cin, a);
        search = searchForBook(a, books);
        if (search == false)
        {
            cout << "Book not found!\n";
        }
        else if (search == true)
        {
            cout << "Book found!\n";
        }
        break;

    default:
        break;
    }
}

bool searchForBook(string search, vector<Book> &books)
{
    for (int i = 0; i < search.length(); i++)
    {
        search[i] = tolower(search[i]);
    }
    for (int i = 0; i < books.size(); i++)
    {
        const char *bookChar = books[i].getAuthor().c_str();

        for (int j = 0; j < search.length(); j++)
        {

            if (search[j] != bookChar[j])
            {
                return false;
            }
        }
        cout << endl;
    }
    return true;
}
