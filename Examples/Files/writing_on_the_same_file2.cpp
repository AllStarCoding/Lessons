#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    ifstream fin("read.txt");
    ofstream fout;
    char ch;
    int i;
    string s="";


    while(fin.get(ch))
        s+=ch;

    fout.open("read.txt");
    for (i=0; i<s.size(); i++)
        if (s[i]=='s')
            s[i]='#';

    fout<<s;



    return 0;

}
