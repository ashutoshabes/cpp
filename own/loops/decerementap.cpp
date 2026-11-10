 #include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    //100 97 94
      int a=100;
    for(int i=100;i>=n;i--){
        cout<<a<<endl;
        a=a-3;
    }
    return 0;
}