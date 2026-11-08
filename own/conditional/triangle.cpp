#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the side of the triangle"<<endl;
    cin>>a>>b>>c;
    
    if (a==b==c)
    {
        cout<<"equilateral triangle";
    }
    
    else if (a==b!=c||a==c!=b||c==b!a) {
        cout<<"isosceles triangle";
    }
    else {
        cout<<"scalene triangle";
    }
    return 0;
}