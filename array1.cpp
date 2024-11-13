#include <iostream>
using namespace std;
int main()
{
    //How to declare the integer array with 10 elements
    // If int = 4 bytes. If double = 8.
    int numbers[10]; // In C++, 10 continuous memory space allocated
                    // numbers (the name of the array) points to
                    // the first element of that memory space
                 // Starting address 1000
       /*numbers[0]; // 1st element of the array: 1000
        numbers[1]; // 2nd element address: 1004 x 1000 (4 * 1)
        numbers[2]; 
        *(numbers+2);
        int *ptr;
        ptr[i];*/
        cout << numbers[4];

        int numbers2[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
        int num[10] = {0};
        int numbers2[] = {10, 20, 30};
        char name[] = "Chocolate Factory";
}