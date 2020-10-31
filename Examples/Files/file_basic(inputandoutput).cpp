#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int agrc, char *argv[]){
ifstream fin;
ofstream fout;
char ch;
fin.open("dontbelate.txt");
fout.open("../dontbeearly.txt");
while(fin.get(ch))
{
    cout<<ch;
    fout<<ch;

}
fin.close();
fout.close();


return 0;
}
