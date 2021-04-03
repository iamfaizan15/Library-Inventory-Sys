//This is the source code for out little project
#include <iostream>
#include "Book.h"
#include "Inventory.h"
#include <string>

using namespace std;

Inventory _inventory;

int main()
{
    while(true)
    {
        cout << "Choose an option" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. List of Book" << endl;
        cout << "3. Check out Book" << endl;
        cout << "4. Check in Book" << endl;

        cout << "0. Exit" << endl;

        int input;
        cin >> input;
        cin.ignore();
        
        switch(input)
        {
            case 0:
                cout << "Thank you. Goodye";
                return 0;
            
            case 1:
            {   
                cout << "Title: ";
                string title;
                getline (cin, title);
                
                cout << "Author: ";
                string author;
                getline (cin, author);

                int id = _inventory.Books.size() + 1;

                Book newBook(id, title, author);
                _inventory.AddBook(newBook);
                break;
            }
            case 2:
                cout <<"\nID\tTitle\tAuthor" << endl;
                for(int i = 0; i < _inventory.Books.size(); i++)
                {
                    cout << _inventory.Books[i].ID << "\t" <<  _inventory.Books[i].Title << "\t" <<  _inventory.Books[i].Author << endl;
                }
                cout << endl;
                break;

            case 3:
            {
                cout << "Enter a book title to check out: " << endl;
                string title;
                getline (cin, title);
                Book foundBook;
                if(_inventory.FindBookByTitle(title,foundBook))
                {
                        if(!foundBook.CheckedOut){
                        cout << "Book Already Checked Out" << endl;
                        break;
                    }
                    _inventory.CheckOutBook(foundBook);
                    cout << "Book checked out " << endl;
                }
                else { 
                    cout << "Book not found!" << endl;
                }
                break;
            }
            case 4:
            {
                cout << "Enter a book title to check in: ";
                string title;
                getline (cin, title);
                Book foundBook;
                if(_inventory.FindBookByTitle(title,foundBook && foundBook.CheckedOut))
                {
                    if(!foundBook.CheckedOut){
                        cout << "Book Already Checked out" << endl;
                        break;
                    }
                    _inventory.CheckInBook(foundBook);
                    cout << "Book checked in " << endl;
                }
                else { 
                    cout << "Book not found!" << endl;
                }
                break;
                
            default:
            cout << "Invalid Selection. Try Again." << endl;
            break;    
        }
    
    }
    
}
