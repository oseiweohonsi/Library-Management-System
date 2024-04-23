// a header class to store variables of books added to new libraries
#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;
class Book
{
private:
    /* data */
    string b_name;
    string b_genre;
    string b_title;

public:
    Book(string, string, string);
    ~Book();
    // setters
    void setAuthor();
    void setTitle();
    void setGenre();
    // getters
    string getAuthor() const;
    string getTitle() const;
    string getGenre() const;

};

Book::Book(string name, string title, string genre)
{
    b_name = name;
    b_title = title;
    b_genre = genre;
}

Book::~Book()
{
}
#endif