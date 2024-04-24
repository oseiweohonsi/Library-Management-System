#include "Book.h"
#include <iostream>
#include <vector>
using namespace std;

// set variables for the book class
void Book::setAuthor(string name)
{
    b_name = name;
}
void Book::setTitle(string title)
{
    b_title = title;
}
void Book::setGenre(string genre)
{
    b_genre = genre;
}

// access variables
string Book::getAuthor() const
{
    return b_name;
}
string Book::getTitle() const
{
    return b_title;
}
string Book::getGenre() const
{
    return b_genre;
}

// get book info
