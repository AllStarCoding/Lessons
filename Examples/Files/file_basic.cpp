#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int agrc, char *argv[]){
ofstream fout;
char ch;
fout.open("dontbelate.txt");
cin.get(ch);
while(ch!='#')
{
    fout<<ch;
    cin.get(ch);
}
fout.close();



return 0;
}
