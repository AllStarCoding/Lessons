#include <iostream>
#include <string>
using namespace std;

struct nhl{
    string name;
    float height;
    float weight;
    bool injury_status;

};
void modify(nhl name);
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

modify(player[0]);

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

void modify(nhl name){

    name.name="Mitch Marner";
    name.height=1.83;
    name.weight=176;
    name.injury_status=false;



}
