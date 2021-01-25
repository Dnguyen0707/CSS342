#include <iostream>
#include <cassert>
#include "square.h"

using namespace std;

class Square;

int main()
{
    Square S2(2);
    cout << "S2: " << S2 << " -- Visual check, did we print [2]\n";
    assert(S2.getLength() == 2 && "S2 should have Length 2");
}

