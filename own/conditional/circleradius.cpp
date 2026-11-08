#include<iostream>
using namespace std;
int main(){
    float r,area,cir;
    float pie=3.14;
    cout<<"enter the radius of the circle"<<endl;
    cin>>r;
    area=pie*r*r;
    cir=2*pie*r;
    cout<<"area of circle"<<area<<endl;
    cout<<"circumference of circle"<<cir<<endl;
    if (area>cir)
    {
        cout<<"area is larger";
    }
    else{
        cout<<"area is smaller";
    }
    return 0;
}