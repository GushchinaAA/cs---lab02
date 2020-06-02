#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
    << "A - B = " << a - b << '\n'
    << "A * B = " << a * b << '\n'
    << "a * b = " << a * b << '\n'
    << "A / B = " << a / b;

    int max = a;
    if (a>b)
    max = a;
    else
    max = b;


    return 0;
}
