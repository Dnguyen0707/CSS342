#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

//part 1
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//
//    cout << "enter first number\n";
//    cin >> num1;
//    cout << "enter second number\n";
//    cin >> num2;
//
//    if (num1 < num2)
//    {
//        cout << "first number is the largest, which is: " << num2 << endl;
//    }
//    else if (num1 > num2)
//    {
//        cout << "first number is the largest, which is: " << num1 << endl;
//    }
//}

//part 2
int main()
{
    int max = 0;
    int min = 0;
    bool exit = false;

    cout << "enter first number\n";
    cin >> max;
    cout << "enter second number\n";
    cin >> min;

    while (!exit)
    {
        if (max < min)
        {
            cout << "the largest is: " << min << endl;
            max = min;
        }
        else if (max == min)
        {
            cout << "both number are the same" << endl;
        }
        else
        {
            cout << "the largest is: " << max << endl;
        }

        string ans = "";
        cout << "would you like to exit? (Y/N)\n";
        cin >> ans;

        if (ans == "Y")
        {
            exit = true;
        }
        else
        {
            cout << "enter the next number\n";
            cin >> min;
        }
    }
}