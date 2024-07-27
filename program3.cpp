#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    
    cout << "Enter value of a:" << endl;
    cin >> a;
    
    cout << "Enter Value of b:" << endl;
    cin >> b;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}