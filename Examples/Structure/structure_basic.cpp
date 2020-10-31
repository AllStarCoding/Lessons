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
