// C++ program to demonstrate
// the use of static Static
// variables in a Function
#include <iostream>
#include <string>
using namespace std;

void demo(void);


int main()
{
    for (int i=0; i<5; i++)
        demo();
    return 0;
}
void demo()
{
    // static variable
    int count = 0;
    cout << count << " ";

    //value will not get updated
    count++;
}