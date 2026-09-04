#include <iostream>
using namespace std;

int main()
{
    int age = 20;

    string result = (age >= 18) ? "Adult" : "Minor";

    cout << result;

    return 0;
}