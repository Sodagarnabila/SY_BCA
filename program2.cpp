// switch statement
#include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    
    cout << "Enter operator from +-*/:"<<endl ;
    cin >> op;
 
    cout << "enter one number:" << endl;
    cin >> num1;
    
   cout << "enter two number:" << endl;
    cin >> num2;
 
    switch (op) {
    case '+':
        cout << num1 + num2;
        break;
 
    case '-':
        cout << num1 - num2;
        break;
 
    // 
    case '*':
        cout << num1 * num2;
        break;
 
    case '/':
        cout << num1 / num2;
        break;
 
    
    default:
        cout << "Error! operator is not correct";
    }
    return 0;
}