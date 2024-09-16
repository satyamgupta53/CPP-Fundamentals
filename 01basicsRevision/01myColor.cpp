#include <iostream>
using namespace std; // means std module is getting used std::cout

int main()
{
    string myColor;
    cout << "Enter your favourite color : ";
    getline(cin, myColor);
    cout << myColor << " is your favourite colour.\n";
    return 0;
}