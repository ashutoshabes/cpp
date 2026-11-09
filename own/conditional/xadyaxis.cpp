#include<iostream>
using namespace std;
int main(){
    int x,y;
    
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;

    if (x==0 and y==0) {cout<<"origin";}
    else if(x==0){cout<<"point is on y axis";}
    
    else if(y==0){cout<<"point is on x axis";}
    else {cout<<"point is somewhwere else";}
    
}