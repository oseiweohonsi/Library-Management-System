#ifndef BOOK_H
#define BOOK_H
#include <string> // string class for string objects
using namespace std;

const int ISBN_NUMBER = 13; // ISBN Numbers are 13 digits
class Book
{
private:
  string bookTitle; // title of the book
  string author; // author's name
  string genre; // genre of book
  Book *newBook = nullptr;
public:
  void setTitle(string);
  void setAuthor(string);
  void setGenre(string);
  string getAuthor();
  string getTitle();
  string getGenre();
  void setInfo(); // get all the variables in one function
  void getInfo();
  

};
#endif
