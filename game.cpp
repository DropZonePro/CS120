#include <iostream>
using namespace std;

int main()
{
    int input, input1, input2, input3,
    input = 0;
    input1 =0;
    cout << "Select Choices 1-4" << endl;
    cout << "1. Burger" << "\n" << "2. Dr Pepper" << "\n" << "3. Fortnite" << "\n" << "4. Next >>" << endl;
    cin >> input;

    if(input == 1)
    {
        cout << "You took the burger! What do you want to do?" << endl;
        cout << "1. Eat it" << "\n" << "2. Throw it away" << endl;
        cin >> input1;
    
    }

    if(input == 2)
    {
        cout << "You took the Dr Pepper! What do you want to do?" << endl;
        cout << "1. Drink it" << "\n" << "2. Shake it" << "\n" << "3. Throw it away" << endl;
        cin >> input2;
    }

    if(input == 3)
    {
        cout << "You chose Fortnite! What do you want to do?" << endl;
        cout << "1. Battle Royale" << "\n" << "2. Reload";
        cin >> input3; 
    }


}