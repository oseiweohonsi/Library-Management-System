// library management software demo
#include <iostream>
#include <cstdlib>
#include "Book.h"
using namespace std;

void menu(); // menu option
int main()
{
  // create book object
  Book books;
  menu();
  int menu_choice;
  cin >> menu_choice;
  switch(menu_choice)
    {
    case 1:
      books.setInfo();
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      exit(0);
      break;
    }
    return 0;
}

void menu()
{
    cout << "**********BOOK-STORE MANAGEMENT**********" << endl;
    cout << "1. Books Management" << endl;
    cout << "2. Member Management" << endl;
    cout << "3. Loan Management" << endl;
    cout << "4. Exit" << endl;
}
