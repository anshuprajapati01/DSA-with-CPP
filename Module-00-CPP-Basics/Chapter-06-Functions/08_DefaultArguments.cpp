#include <iostream>
using namespace std;

void greet(string name = "Anshu")
{
    cout << "Hello " << name;
}

int main()
{
    greet();

    return 0;
}