#include <iostream>
#include <vector>
using namespace std;

// Understanding <T>

template<class T>
T sumtwo(T a, T b)
{
    return a+b;
}

int main()
{
    int num1 = 100, num2 = 200;
    int ret1 = sumtwo(num1, num2);
    cout << ret1 << endl;
    double num3 = 100.123, num4= 200.456;
    double ret2 = sumtwo(num3, num4);
    cout << ret2 << endl;
}