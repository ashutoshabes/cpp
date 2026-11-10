#include<iostream>
using namespace std;
int main ()
{
    //worst condition
    // for(int i=1;i<=100;i++){
    //    if (i%2==0)   cout<<i<<endl;
    // }
    // return 0;
    for(int i=0;i<=100;i+=2){
         cout<<i<<endl;
    }
    return 0;
}