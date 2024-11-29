#include <iostream>
using namespace std;

int main()
{
    string str1 = "abcdef,ghi,jklm";
    string substr;
    int     found, start;

    found = str1.find(','); //found
    substr = str1.substr(0, found);
    cout << "Split word " << substr << endl;


    start = found + 1;
    found = str1.find(',', found+1);
    substr = str1.substr(start, found-start);
    cout << "Split word " << substr << endl;


    start = found + 1;
    str1.substr(start, str1.length()-start);
    cout << "Split word " << substr << endl;

}
    /*found = str1.find(','); //found
    if (found == string::npos)
        cout << "Not Found\n";
    else
        cout << "Found it an index " << found << endl;
        str1.find(',', found)*/