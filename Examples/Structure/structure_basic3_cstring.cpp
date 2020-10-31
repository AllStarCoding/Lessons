#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct nhl{
    char name[30];
    float height;
    float weight;
    bool injury_status;

};

int main(){

nhl player[2]={

    {"Austin Matthew",
    1.9,
    220,
    true},
    {"John Tavares",
    1.85,
    205,
    false}


};

cout<<player[0].name<<endl;
cout<<player[0].height<<endl;
cout<<player[0].weight<<endl;
if (player[0].injury_status==true){
    cout<<"injury status= true"<<endl;
}
else
    cout<<"injury status= false"<<endl;

player[0]=player[1];

cout<<player[0].name<<endl;
cout<<player[0].height<<endl;
cout<<player[0].weight<<endl;
if (player[0].injury_status==true){
    cout<<"injury status= true"<<endl;
}
else
    cout<<"injury status= false"<<endl;
return 0;
}
