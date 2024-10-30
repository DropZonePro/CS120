#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string John;
    string Lee;
    int var1 = 'John';
    int var2= 'Lee';
    int var3 = 100;
    int var4 = 90;
    int var5 = 95;

    ofstream ofs;

    ofs.open ("filename.txt");

    ofs << var1 << "\t" << var2 << "\t" << var3 << "\t" << var4 << "\t" << var5;

    ofs.close();

}