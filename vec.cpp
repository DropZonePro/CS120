#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // Declare the vector
    vector<int> num;
    num.push_back(10);
    num.push_back(20);
    num.push_back(30);
    num.push_back(40);
    num.push_back(50);
    cout << num[0] << "\t"; //10
    cout << num.size() << endl;
    for (int i=0; i<num.size(); i++)
        cout << num[i] << "\t";
    cout << endl;
    for (int v : num) // Range-Based For Loop. To Use This Feature Must Be On C++17 Or Up
        cout << v << "\t";
    cout << endl;
    // Declare Vector With Size
    vector<int> num2(10); // 10 Elements
    vector <int> num3(10, -1); // 10 Elements, initialize -1
    vector <int> num4(num3); // num4 Is The Same As num3
    // int number[] = {1, 2, 3, 4, 5,};
    vector <int> num5{1, 2, 3, 4, 5}; // Same As Line 25
    vector <char> name{'A', 'B', 'C', 'D'};
}
