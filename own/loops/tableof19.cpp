#include<iostream>
using namespace std;
int main ()
{
    // worst condition
    // for(int i=1;i<=190;i++){
    //    if (i%19==0)   cout<<i<<endl;
    // }
    // return 0;
     for(int i=19;i<=190;i+=19){
     cout<<i<<endl;
    }
    return 0;
}