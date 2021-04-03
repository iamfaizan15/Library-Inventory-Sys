#include <iostream>
#pragma once
class Book
{
public:
    int ID;
    std::string Title;
    std::string Author;
    bool CheckedOut;

    Book (int id, std::string title, std::string author);
};

