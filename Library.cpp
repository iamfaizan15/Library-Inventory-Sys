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
                
                break;

            case 3:
                break;

            case 4:
                break;
                
            default:
            cout << "Invalid Selection. Try Again." << endl;
            break;    
        }
    
        
    }
    
}
