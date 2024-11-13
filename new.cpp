#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
    int min, max;
    

    for(int i=0; i<5; i++)
    {
        cin >> numbers[i];
    }

    min = max = numbers[0];

    for (int i=0; i<5; i++)
    {
        if (min > numbers[i])
            min = numbers[i];
        if (max < numbers[i])
            max = numbers[i];
        
    }

    cout << "Minimum Value is: " << min << endl;
    cout << "Maximum Value is: " << max << endl;
}