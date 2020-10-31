#include <iostream>
using namespace std;
#include <cmath>

struct xy_component{

    double x_component;
    double y_component;


};

struct resultant{

    double magnitude;
    double angle;

};
xy_component resultant_to_xy(resultant vector);


int main(){

    xy_component answer;


    resultant input;

    cout<<"Enter a vector"<<endl;
    cout<<"Give me the magnitude"<<endl;
    cin>>input.magnitude;
    cout<<"Give me the bearing"<<endl;
    cin>>input.angle;

    answer=resultant_to_xy(input); //makes a copy!!
    cout<<"x-component: "<<answer.x_component<<endl;
    cout<<"y-component: "<<answer.y_component<<endl;



    return 0;

}

xy_component resultant_to_xy(resultant vector){

    xy_component xy_coord;

    const double deg_to_rad = 0.0174533;

    xy_coord.x_component=vector.magnitude*sin(deg_to_rad*vector.angle);
    xy_coord.y_component=vector.magnitude*cos(deg_to_rad*vector.angle);


    return xy_coord;


}
