// a header class to store variables of books added to new libraries
#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <vector>
using namespace std;
class Book
{
private:
    /* data */
    string b_name;
    string b_genre;
    string b_title;
    // variable to store the books

public:
    // setters
    void setAuthor(string);
    void setTitle(string);
    void setGenre(string);
    // getters
    string getAuthor() const;
    string getTitle() const;
    string getGenre() const;
};

#endif