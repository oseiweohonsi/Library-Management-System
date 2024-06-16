// a header class to store variables of books added to new libraries
#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <vector>
class Book
{
	private:
		std::string name;
		std::string title;
		std::string author;
	public:
		string getName();
		string getTitle();
		string getAuthor();
};
#endif
