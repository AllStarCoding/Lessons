#include <iostream>
#include <cstdlib>
#include <ctime>

//File output
#include <fstream>

void array_fill(int a[], int size);
void array_zero(int b[], int size);
void random_generator(int a[], int b[], int size);
void group_member(int b[], int size, int group);
using namespace std;

int main(){

    int people, member;
    cout<<"Enter the number of people: ";
    cin>>people;
    cout<<"Enter the number of people per group: ";
    cin>>member;

    int a[people], b[people];

    array_fill(a, people);
    array_zero(b, people);
    random_generator(a, b, people);
    group_member(b, people, member);

    return 0;
}

void array_fill(int a[], int size){
    int i;
    for (i=0; i<size; i++ )
        a[i]=i+1;

}
void array_zero(int b[], int size){
    int i;
    for (i=0; i<size; i++ )
        b[i]=0;

}
void random_generator(int a[], int b[], int size){
    int i, subscript;
    /* initialize random seed: */
    srand (time(NULL));


    for (i=0; i<size; i++)
    {
        subscript=rand()%(size);
        while(b[subscript]!=0){
            subscript=rand()%(size);
        }
        b[subscript]=a[i];
    }
}
void group_member(int b[], int size, int group){

    int i, group_number=2;
     //file output
     ofstream fout;
    fout.open("group_result.txt");
    cout<<"Group 1:"<<endl;
    fout<<"Group 1:"<<endl;
    for (i=0; i<size; i++){
        cout<<b[i]<<" ";
        fout<<b[i]<<" ";
        if (((i+1)%group==0) && (i+1)<size)
        {   cout<<endl<<endl;
            cout<<"Group "<<group_number<<":"<<endl;
            fout<<endl<<endl;
            fout<<"Group "<<group_number<<":"<<endl;
            group_number++;
        }

    }
    fout.close();

}




