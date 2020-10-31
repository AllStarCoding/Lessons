#include <iostream>

void suprise(int a, int b, int c);
void example_function(int x, int y, void (*call_later)(int, int, int));


using namespace std;
int main(){
    int num1, num2;

    cout<<"Enter a value: ";
    cin>>num1;
    cout<<"Enter another value: ";
    cin>>num2;
    example_function(num1, num2, &suprise);




}

void suprise(int a, int b, int c){
    cout<<a*b*c;



}
void example_function(int x, int y, void (*call_later)(int, int, int)){
    int choice, third;
    cout<<"Guess what, pick a number between 1 and 2: ";
    cin>>choice;
    if (choice==1){
        cout<<"OK, the product of those two numbers is ";
        (*call_later)(x, y, 1);
        }
    else{
        cout<<"Guess what, you can enter another value! Enter another value now: ";
        cin>>third;
        cout<<"The produce of those three number is ";
        (*call_later)(x, y, third);

        }


}
