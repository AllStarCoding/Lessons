#include <iostream>

using namespace std;

int main(){

    int *x, y=20;
    y=8;
    x=&y;
    y=20;
    *x=40;
    cout<<*x<<endl; //dereference
    cout<<y<<endl;

    return 0;
}
