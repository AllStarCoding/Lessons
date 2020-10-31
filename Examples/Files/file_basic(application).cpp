#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int agrc, char *argv[]){
ifstream fin;
ofstream fout;
char ch;
fin.open("scanning.txt");
fout.open("output.txt");
fout<<"This is the name from the scanning.txt";
int counter=0;
while(fin.get(ch))
{
    if (counter%2==0){;}
    else{
        cout<<ch;
        fout<<ch;

    }
    if (ch=='\n')
        counter++;
}
fin.close();
fout.close();


return 0;
}
