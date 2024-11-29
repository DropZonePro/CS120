#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int N = 100;
    string str1 = "abcdef,ghi,jklm";
    string substr[N];
    int     i,found, start;

    i = start = 0;
    while(1){
        found = str1.find(',', start);
        if (found == string::npos)
            break;
        substr[i] = str1.substr(start, found-start);
        cout << "Split word " << substr << endl;
        start = found + 1;
        i += 1;
}
    substr[i] = str1.substr(start,str1.length()-start);

    for(auto v : substr)
        cout << v << "\t";
    cout << endl;
}