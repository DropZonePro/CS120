#include <iostream>
#include <sstream>  // String Stream
using namespace std;

int main()
{
    const int N = 100;
    string str1 = "abcdef,ghi,jklm";
    string substr;
    char    target[N][N];
    int     i, found, start;

    stringstream ss;
    ss.str(str1); // same as ss << str1;
    i = 0;
    while(ss.getline(target[i], 256, ','))
    {
        i += 1;
    }
    for(int i=0; i<3; i++)
        cout << "Target " << target[i] << endl;
}