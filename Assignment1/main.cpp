#include <iostream>
#include <cassert>
#include "library.h"

void test1();
void test2();
void testAll();

int main()
{
    testAll();
    return 0;
}

void testAll()
{
    cout << "Default test\n";
    test1();
    cout << "\n--------------------------------\n";
    cout << "\nIndept test to see if removed book is replaced\n";
    test2();
}

void test1()
{
    Library Libs("UWB");
    Libs.addBook("Don Quixote");
    Libs.addBook("In Search of Lost Time");
    Libs.addBook("Ulysses");
    Libs.addBook("The Odyssey");
    Libs.listAllBooks();

    // should generate already in library message and return true
    bool Result = Libs.isInLibrary("The Odyssey");
    assert(Result);

    // cannot add book twice, result should be false
    Result = Libs.addBook("The Odyssey");
    assert(!Result);

    // test remove, result should be true
    Result = Libs.removeBook("The Odyssey");
    assert(Result);

    // not in library, result should be false
    Result = Libs.isInLibrary("The Odyssey");
    assert(!Result);

    // cannot remove twice, result should be false
    Result = Libs.removeBook("The Odyssey");
    assert(!Result);
}

void test2()
{
    Library Libs("UWB");
    Libs.addBook("Don Quixote");
    Libs.addBook("In Search of Lost Time");
    Libs.addBook("Ulysses");
    Libs.addBook("The Odyssey");
    Libs.listAllBooks();

    // test remove to see if it replace
    Libs.removeBook("In Search of Lost Time");

    cout << "\nRemoved Test here: \n";
    Libs.listAllBooks();
}