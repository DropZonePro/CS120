#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>
using namespace std;

const int M = 100;
const int N = 9;
const int L;

int main()
{
    char people[M][N][L];
    ifstream ifs;
    int i=0;
    stringstream ss;
    ifs.open("people-100.csv");
    string line;
    getline(ifs, line);

    ss.str(line);
    while (ss.getline(people[0][i], 256, ','))
    {
        i += 1;
    }
    for(int i=0; i<N; i++)
        cout << people[0][i] << "\t";
    cout << endl;

}