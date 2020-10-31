#include <iostream>
#include <string>
using namespace std;

struct nhl{
    string lastname;
    string firstname;
    int age;

};

int main(){

    int i;
    nhl player[2], temp;
    for (i=0; i<2; i++){
        cout<<"Enter last name for player "<<i+1<<endl;
        getline(cin, player[i].lastname);
        cout<<"Enter age for the player"<<endl;
        (cin>>player[i].age).get(); //needs this for the mix between number and string input
    }
    cout<<endl;
    for (i=0; i<2; i++){
        cout<<player[i].lastname<<endl;

    }
    temp=player[0];
    temp.age=99;
    cout<<temp.lastname<<endl;
    cout<<temp.age<<endl;
    cout<<player[0].age<<endl;
    return 0;
}

