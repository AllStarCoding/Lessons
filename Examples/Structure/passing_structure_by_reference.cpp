#include <iostream>
#include <string>
using namespace std;

struct nhl{
    string lastname;
    string firstname;
    int age;

};
//notice the return type here!!!
void add_value(nhl &s);
int main(){

    int i;
    nhl player, answer;
    player.lastname="abc";
    player.age=23;
    add_value(player);

    //show the original value has not been changed
    cout<<player.lastname<<endl;
    cout<<player.age<<endl;

    return 0;
}
void add_value(nhl &s){
    //see how difference this type arounds
    s.lastname="eee";
    s.age=45;
}
