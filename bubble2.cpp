#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void makeVector(vector<int> &, int);
void printVector(vector<int>);
void bubble(vector<int> &);
int main()
{
    const int N = 5;
    vector<int> num(N);
    makeVector(num, N);
    printVector(num);
    for(int i=0; i<num.size()-1; i++){
        bubble(num);
        cout << "Call bubble " << i << endl;
    }
    printVector(num);

}

void makeVector(vector <int> &num, int N)
{
    srand(time(0));
    for (int i=0; i<N; i++)
    num[i] = rand() % 100;
}

void bubble(vector<int> &num)
{
    for(int i=0; i<num.size()-1; i++)
    if(num[i] > num[i+1])
        swap(num[i], num[i+1]);
}

void printVector(vector<int> num)
{
    for(auto iter = num.begin(); iter != num.end(); iter++)
    cout << *iter << "\t";
    //for (auto v : num)
      //  cout << v << "\t";
    cout << endl;
}