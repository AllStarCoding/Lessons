#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int agrc, char *argv[]){
ifstream fin;
char ch;
fin.open("dontbelate.txt");

while(fin.get(ch))
{
    cout<<ch;

}
fin.close();



return 0;
}
