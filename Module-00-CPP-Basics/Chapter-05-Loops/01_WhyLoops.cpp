#include <iostream>
using namespace std;

int main()
{
    // Without loop
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;
    cout << "Hello" << endl;

    cout << "----- Using Loop -----" << endl;

    // Using loop
    for(int i = 1; i <= 5; i++)
    {
        cout << "Hello" << endl;
    }

    return 0;
}