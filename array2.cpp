#include <iostream>
using namespace std;
int main()
{
    int num[10] = {0};
    char name[] = "C++ Programming"; // If "C++" and name[i] where i<10, no error.
    for (int i=0; i< 10; i++)
        cout << num[i] << "\t";
        cout << endl;
        cout << num[10];
    for (int i=0; i<10;i++)
    
        cout << name[i] << "\t";
        cout << endl;
    
}