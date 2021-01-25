//
// Created by Dai on 01/06/2021
//
// Library class demonstrating partially filled arrays
// Can add/remove books from library
// findbooks in library

#include "library.h"
#include <iostream>

// constructor with default name
Library::Library(const string &Name)
{
    name = Name;
}

// destructor
// nothing on heap
Library::~Library()
{
    // destructor
}

// true if book found in library
bool Library::isInLibrary(const string &BookName) const
{
    for (string bookName : bookInLib)
    {
        if (BookName == bookName)
        {
            return true;
        }
    }
    return false;
}

// add a new book
// return true if successful, false if
// book already in library
bool Library::addBook(const string &BookName)
{
    int count = 0;

    numberOfBook++;
    count = numberOfBook - 1;

    if (count <= MAX)
    {
        if (!isInLibrary(BookName))
        {
            bookInLib[count] = BookName;
            return true;
        }
        else
        {
            cout << BookName << " already in library\n";
        }
    }
    return false;
}

// remove a book
// return true if successfully removed
// false if book not in library
bool Library::removeBook(const string &BookName)
{
    //find the book
    //take book out
    //replace with last book
    int lastBookSlot = numberOfBook - 1;

    if (isInLibrary(BookName))
    {
        int remBookSlot = 0;
        remBookSlot = findBook(BookName);

        bookInLib[remBookSlot] = bookInLib[lastBookSlot];
        bookInLib[lastBookSlot] = "";

        numberOfBook--;
        return true;
    }
    return false;
}

// list all books
void Library::listAllBooks() const
{
    if (numberOfBook == 0)
    {
        cout << "There is no book in the library\n";
    }
    else
    {
        int count = 0;

        while (count < numberOfBook)
        {
            cout << bookInLib[count] << "\n";
            count++;
        }
    }
}

//find the book slot
int Library::findBook(const string &BookName)
{
    for (int i = 0; i < numberOfBook; i++)
    {
        if (bookInLib[i] == BookName)
        {
            return i;
        }
    }
    //if fail
    return -1;
}

ostream &operator<<(ostream &Out, const Library &Lib)
{
    return Out;
}

