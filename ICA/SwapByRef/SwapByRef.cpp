#include <iostream>
using namespace std;

void swapString(string &str1, string &str2);

int main()
{
    string str1 = "Hello";
    string str2 = "World";

    cout << str1 << " " << str2 << "\n";

    swapString(str1, str2);

    cout << str1 << " " << str2 << "\n";

}

void swapString(string &str1, string &str2)
{
    string temp = str1;
    str1 = str2;
    str2 = temp;
}