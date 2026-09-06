#include<iostream>
using namespace std;
void change(int a, int b)
{
    a = 100;
    b = 200;
}

int main()
{
    int x = 10;
    int y = 20;

    change(x, y);

    cout << x << " " << y;
}