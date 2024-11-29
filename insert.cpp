#include <iostream> 
using namespace std;

void insert(int num[], int i)
{
    int idx, target;
    target = num[i];
    for(idx = i-1; idx >=0; idx--){
        if (num[idx] > target)
            num[idx+1] = num[idx];
            else
                break;
    }
    num[idx+1] = target;
}

void insertsort(int num[], int N)
{
    for (int i=1; i<N; i++)
        insert(num,i);
}

void print(int num[], int N){
    for(int i=1; i<N; i++)
        cout << num[i] << "\t";
    cout << endl;
}
int main()
{
    //int num[5] = {1, 2, 8, 4, 10};
    int num[5] = {2, 1, 8, 4, 10};

    for (int i=0; i<5; i++)
        cout << num[i] << "\t";
    cout << endl;

    insert(num, 1);
    insert(num, 2);
    insert (num, 3);
    insert (num, 4);
    for (int i=0; i<5; i++)
        cout << num[i] << "\t";
    cout << endl;
}