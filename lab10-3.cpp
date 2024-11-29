#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int N = 100;
    string str1 = "abcdef,ghi,jklm";
    string substr;
    char    target[N][N];
    int     i,found, start;

    i = start = 0;
    while(1){
        found = str1.find(',', start);
        if (found == string::npos)
            break;
        substr = str1.substr(start, found-start);
        strcpy(target[i], substr.c_str());
        start = found + 1;
        i += 1;
}
    substr.substr(start,str1.length()-start);
    strcpy(target[i], substr.c_str());

    for(int i=0; i<3; i++)
        cout << "Target " << target[i] << endl;
}