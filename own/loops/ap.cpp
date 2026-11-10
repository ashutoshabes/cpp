 #include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    //1 3 5 7 9
    //using formula
    // for(int i=1;i<=2*n-1;i+=2){
    //     cout<<i<<endl;
    // }
    //without formula
    // int a=1;
    // for(int i=0;i<=n;i++){
    //     cout<<a<<endl;
    //     a=a+2;
    // }
    // return 0;


    //4 7 10 13 17
    // using formula
    // for(int i=1;i<=3*n-1;i+=3){
    //     cout<<i<<endl;
    // }
    //without formula
    int a=4;
    for(int i=0;i<=n;i++){
        cout<<a<<endl;
        a=a+3;
    }
    return 0;
}