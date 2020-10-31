#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){
ifstream fin;
ofstream fout;
char ch;
int counter=0;
if (argc!=3){
    cout<<"program_name inputfile outputfile";
}
else{
    fin.open(argv[1]);
    if (!fin.is_open()){
        cerr<<"The file "<<argv[1]<<" does not exist: ";
    }
    fout.open(argv[2], ios_base::out| ios_base::app);
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




}


return 0;
}
