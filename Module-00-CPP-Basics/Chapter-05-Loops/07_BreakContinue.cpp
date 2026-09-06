#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << "First even number = " << i << endl;
            break;
        }
    }
    for (int j = 1; j <= 10; j++)
    {
        if (j % 2 == 0)
        {
            continue;
        }

        cout << j << " ";
    }
    return 0;
}