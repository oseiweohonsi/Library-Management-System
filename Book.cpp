// implementation file for book.h
#include "Book.h" // book header file
#include <iostream>
#include <cstdlib>
using namespace std;

// set the title of book to be added
void Book::setTitle(string name)
{
    bookTitle = name;
}

// get the title of book
string Book::getTitle() 
{
    return bookTitle;
}
// get authors information
void Book::setAuthor(string name)
{
    author = name;
}
string Book::getAuthor()
{
    return author;
}


// get genre information
void Book::setGenre(string genre_name)
{
    genre = genre_name;
}
string Book::getGenre() 
{
    return genre;
}

void Book::setInfo()
{
  string newAuthor, newTitle, newGenre;
  // get the information of the book
  newBook = new Book;
  cout << "Author: ";  
  cin.ignore();
  getline(cin, newAuthor);
  cout << "Title: ";
  cin.ignore();
  getline(cin, newTitle);
  cout << "Genre: ";
  cin.ignore();
  getline(cin, newGenre);

  // now set all the variables
  newBook->setAuthor(newAuthor);
  newBook->setGenre(newGenre);
  newBook->setTitle(newTitle);
}

void Book::getInfo()
{
  cout << newBook->getAuthor() << endl;
  cout << newBook->getTitle() << endl;
  cout << newBook->getGenre() << endl;
}