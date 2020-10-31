#include <iostream>
#include <string>
using namespace std;

struct nhl{
    string lastname;
    string firstname;
    int age;

};
//notice the return type here!!!
nhl add_value(nhl s);
int main(){

    int i;
    nhl player, answer;
    player.lastname="abc";
    player.age=23;
    answer=add_value(player);

    //show the original value has not been changed
    cout<<player.lastname<<endl;
    cout<<player.age<<endl;

    cout<<answer.lastname<<endl;
    cout<<answer.age<<endl;

    return 0;
}
nhl add_value(nhl s){

    nhl temp;//create a new structure variable for the change;
    temp.lastname=s.lastname+"def";
    temp.age=50;
    //show how useless it is to change the structure s-->nothing will be changed
    s.lastname="eee";
    s.age=45;
    return temp;


}
