#include <iostream>
using namespace std;
int main()
{
    // Range Check 
    // 0------------------50------------------100-------------------> 
    //       Range 1            Range 2              Range 3
    int num, range;
    cout << "Enter a number: ";
    cin >> num; 
    // NESTED IF STMT
    if ( num < 50)
        range = 1;
    else{
        if (num < 100)
            range = 2;
        else
            range = 3;
    }
    cout << "Your value " << num << " is range " << range << endl;
}