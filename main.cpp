#include "Book.h"
#include <iostream>
#include <vector>
#include <string> // for the string function
#include <cctype> // for character conversion
using namespace std;
void menu();                         // display menu options
void addBooks(Book, vector<Book> &); // add a book to library
void viewBooks(vector<Book> &);
void searchBooks(vector<Book> &); // search for books from the vector
int main()
{
    // a vector to hold books
    vector<Book> books;
    Book newBook; // new book object
    menu();
    int choice; // menu option
    do
    {
        menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            addBooks(newBook, books);
            break;
        case 2:
            viewBooks(books);
            break;
        default:
            break;
        }
    } while (choice != 3);
}

void addBooks(Book newBook, vector<Book> &books)
{
    // get book details
    string newAuthor, newGenre, newTitle;
    cout << "Author: ";
    cin.ignore();
    getline(cin, newAuthor);
    cout << "Title: ";
    getline(cin, newTitle);
    cout << "Genre: ";
    getline(cin, newGenre);

    // set book's properties
    newBook.setAuthor(newAuthor);
    newBook.setTitle(newTitle);
    newBook.setGenre(newGenre);

    // add book to vector
    books.push_back(newBook);
}

void viewBooks(vector<Book> &books)
{
    for (int i = 0; i < books.size(); i++)
    {
        cout << "Author: " << books[i].getAuthor() << endl;
        cout << "Title: " << books[i].getTitle() << endl;
        cout << "Genre: " << books[i].getGenre() << endl;
        cout << "\n";
    }
}

void searchBooks(vector<Book> &books)
{
    // perform the search
    string word;
    // search objects for word, first author, title then genre
    cout << "Search for book: ";
    cin.ignore();
    int i = 0;
    while(word[i] != '\0')
    {
        word[i] = tolower(word[i]);
    }



}

void menu()
{
    cout << "\t**********Library Management System**********\n";
    cout << "1. Add books\n";
    cout << "2. View books\n";
    cout << "3. Exit\n";
}