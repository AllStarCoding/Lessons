#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    int number_of_character=0;
    char ch;
    string file_name, content="";
    cout<<"Create a file by entering a file name: "<<endl;
    getline(cin, file_name);
    file_name=file_name+".txt";
    fout.open(file_name.c_str(), ios_base::out | ios_base::trunc);
    cout<<"Write content into the file, end with end of file (Ctrl Z)\n";
    cin.get(ch);
    while (cin.fail() == false) // test for EOF
    {

    content+=ch;
    cin.get(ch); // attempt to read another char
    }
    fout<<content;
    fout.close();

    fin.open(file_name.c_str(), ios_base::in);
    while (fin.get(ch))
    if (ch=='s'){
        number_of_character+=1;
    }
    fin.close();

    fout.open(file_name.c_str(), ios_base::out| ios_base::app);
    fout<<endl;
    fout<<"There are "<<number_of_character<<" s(es) in the file content"<<endl;
    return 0;

}





