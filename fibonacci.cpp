#include <iostream>
using namespace std;
int main()
{

    int fib = 0;
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= 10; i++)
    {
        fib = a + b;
        a = b;
        b = fib;
        cout << fib << " ";
    }
}