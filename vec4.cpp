#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> number;
    // Understanding Iterator | Iterator Is Data Type
    vector<int>::iterator iter;
    for (int i=0; i< 5; i++)
        number.push_back(rand()%10);

    iter = number.begin();
    iter += 5;
    if (iter == number.end())
        cout << "Iter has reached the end \n";
    cout << *iter << endl;
    for(iter=number.begin(); iter != number.end(); iter++)
        cout << *iter << "\t";
    cout << endl;
iter= find(number.begin(), number.end(), 7);
cout << *iter << endl;
    for (int v : number)
        cout << v << "\t";
    cout << endl;
}