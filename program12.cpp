#include<iostream>
using namespace std;

class sample
 {
    int a, b;

    public:
      void setValue()
       {
         a = 25;
         b = 23;
       }

    friend float mean(sample s);
};

float mean(sample s)
 {
    return (s.a + s.b) / 2.0;
 }

int main()
{
    sample x;
    x.setValue();
    cout << "Mean Value: " << mean(x) << endl;
    return 0;
}