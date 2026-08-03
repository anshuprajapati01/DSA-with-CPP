#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18)
    {
        cout << "Eligible to Vote";
    }

    return 0;
}