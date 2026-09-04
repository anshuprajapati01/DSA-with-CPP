#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    int attendance = 80;

    cout << (age >= 18 && attendance >= 75) << endl;
    cout << (age >= 18 || attendance >= 90) << endl;
    cout << !(age < 18) << endl;

    return 0;
}