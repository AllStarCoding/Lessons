#include <iostream>
#include <string>
using namespace std;

struct nhl{
    string name;
    float height;
    float weight;
    bool injury_status;

};

int main(){

nhl player={

    "Austin Matthew",
    1.9,
    220,
    true


};
nhl another_player;
another_player.name="John Tavares";
another_player.height=185;
another_player.weight=205;
another_player.injury_status=false;
cout<<player.name<<endl;
cout<<player.height<<endl;
cout<<player.weight<<endl;
if (player.injury_status==true){
    cout<<"injury status= true"<<endl;
}
else
    cout<<"injury status= false"<<endl;

player=another_player;

cout<<player.name<<endl;
cout<<player.height<<endl;
cout<<player.weight<<endl;
if (player.injury_status==true){
    cout<<"injury status= true"<<endl;
}
else
    cout<<"injury status= false"<<endl;
return 0;
}
