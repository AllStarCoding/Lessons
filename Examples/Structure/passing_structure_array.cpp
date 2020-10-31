#include <iostream>
#include <string>
using namespace std;

struct nhl{
    string lastname;
    string firstname;
    int age;

};
//notice the return type here!!!
void add_value(nhl *s);
int main(){

    int i;
    nhl player[2], answer;
    player[0].lastname="abc";
    player[0].age=23;
    player[1].lastname="def";
    player[1].age=33;
    add_value(player);

    //show the original value has not been changed
    cout<<player[1].lastname<<endl;
    cout<<player[1].age<<endl;

    return 0;
}
void add_value(nhl *s){
    //see how difference this type arounds
    (s+1)->lastname="eee";

    (s+1).age=45;
}
