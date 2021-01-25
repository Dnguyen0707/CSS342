//
// Created by daiho on 1/11/2021.
//

#include "square.h"

ostream &operator<<(ostream &Out, const Square &Sq)
{
    Out << "[" << Sq.getLength() << "]";
    return Out;
}
Square::Square(int Length)
{
    this->Length = Length;
}
int Square::getLength() const
{
    return Length;
}
Square Square::operator+(const Square &Other) const
{
    int temp = Length + Other.getLength();
    Square square(temp);
    return square;
}
Square& Square::operator+= (const Square &Other)
{
    Length += Other.getLength();
    return *this;
}