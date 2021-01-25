//
// Created by daiho on 1/11/2021.
//

#ifndef SQUARE_SQUARE_H
#define SQUARE_SQUARE_H

#include <ostream>

using namespace std;

class Square
{
    friend ostream &operator << (ostream &Out, const Square &Sq);

public:
    explicit Square(int Length);
    int getLength() const;
    Square operator+ (const Square &Other) const;
    Square &operator+= (const Square &Other);

private:
    int Length;
};


#endif //SQUARE_SQUARE_H
