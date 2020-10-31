#include <iostream>
#include <string>
using namespace std;

struct nba{
    string name;
    string team_name;
    int age;
    int jersey_number;
    string contract;
};

int main(){
    nba player;
    cout<<"Enter a player's name"<<endl;
    getline(cin, player.name);
    cout<<"Enter a player's team name"<<endl;
    getline(cin, player.team_name);
    cout<<"Enter a player's age"<<endl;
    cin>>player.age;
    cout<<"Enter a player's jersey number"<<endl;
    (cin>>player.jersey_number).get();
    cout<<"Enter a player's contract"<<endl;
    getline(cin, player.contract);

    cout<<player.name<<"'s info"<<endl;
    cout<<"Name "<<player.name<<endl;
    cout<<"Team "<<player.team_name<<endl;
    cout<<"Age "<<player.age<<endl;
    cout<<"Jersey Number "<<player.jersey_number<<endl;
    cout<<"Contract "<<player.contract<<endl;

    return 0;
}
