#include <iostream>
#pragma once
class Book
{
public:
    int ID;
    std::string Title;
    std::string Author;
    bool CheckedOut;

    Book();

    Book (int id, std::string title, std::string author);

    bool operator==(const Book &book) const
    {
        if(Title.compare(book.Title)==0 )
            return true;
        else
            return false;
    }
};

