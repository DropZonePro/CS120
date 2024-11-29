#include <iostream>
using namespace std;

//#define N 10; Another way tp declare array size
void printArray(int */**num*/, int /*n*/);
void bubble(int *, int);

int main()
{
    const int SIZE = 5;
    int num[SIZE] = {10, 5, 20, 15, 0};

    printArray(num, SIZE);
    for(int i=0; i<SIZE-1; i++){
        bubble(num, SIZE);
    }
    printArray(num,SIZE);
}

void bubble(int *num, int SIZE){
    static int cnt = 0;/*If static int were int then cnt would
    end by the end of the function. Remember top-down flow.*/
    cout << "Static car is increased by 1 " << cnt++ << endl;
    for(int i=0; i<SIZE-1; i++){
        if (num[i] > num[i+1]){
            swap(num[i], num[i+1]);
            //int tmp = num[i];
            //num[i] = num[i+1];
        }
    }
}

void printArray(int *num, int n){
    for(int i=0; i<n; i++)
        cout << num[i] << "\t";
    printf("\n");
}