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
    add_value(player);

    //show the original value has not been changed
    cout<<player[0].lastname<<endl;
    cout<<player[0].age<<endl;

    return 0;
}
void add_value(nhl *s){
    //see how difference this type arounds
    s[0].lastname="eee";
    s[0].age=45;
}
