#include <iostream>
#include <vector>
using namespace std;

// Understanding <T>
template<class T>
class Myclass{
    public:
    T a;
    T b;
};

int main()
{
    Myclass<int> m1;
    m1.a = 100;
    m1.b = 200;
    Myclass<double> m2;
    m2.a = 100.00;
    m2.b = 123.45;
}