#include <iostream>
using namespace std;
//returntype name(parameter)
//part 1
void printmessage(void);
void printmessage(int x);
void printmessage(float x);
void printmessage(int x, int y);
//int printmessage(void);<-This is not function overloading
int main(){
int a=5, b=7;
float c=62.2;
printmessage(a);
printmessage(c);
printmessage();
printmessage(a, b);

return 0;
}
//part 3
//function implementation
void printmessage(void){
cout<<"You are at this function\n";

}
/*int printmessage(void){
return 6;

}*/
void printmessage(int x){
    cout<<"You just entered the number"<<x<<endl;
}
void printmessage(float x){
    cout<<"We are in the float version of the function "<<x<<endl;
}
void printmessage(int x, int y){
    cout<<"The sum of "<<x<<" and "<<y<<"is "<<x+y<<endl;
}
