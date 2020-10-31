#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream fin;
    ofstream fout;
    string file_name, content;
    char ch;
    int number_of_character=0;
    cout<<"Create a file by entering the file name: ";
    getline(cin, file_name);
    //file_name="../../"+file_name+".txt";-->2 directories above
    //file_name="./next/"+file_name+".txt";-->next directory
    file_name="../Bool/"+file_name+".txt";//relative path
    fout.open(file_name.c_str(), ios_base::out);
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
    while(fin.get(ch)){
        if(ch=='s')
            number_of_character+=1;
    }
    fin.close();
    fout.open(file_name.c_str(), ios_base::out|ios_base::app);//append
    fout<<"There are "<<number_of_character<<" s(es) in the file";
    fout.close();
    return 0;
}
