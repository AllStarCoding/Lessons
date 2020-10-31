#include <iostream>

using namespace std;


struct r{

    int firstnumber;


};

int main(){

    r *ran=new r[2];
    ran[0].firstnumber=20;
    ran[1].firstnumber=24;
    delete &ran[0];
    cout<<(ran+1)->firstnumber;

    return 0;

}
