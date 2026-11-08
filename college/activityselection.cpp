#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of activities: ";
    cin>>n;
    int start[20], finish[20];
    cout<<"Enter start time: \n";
    for (int i=0;i<n;i++)
    cin>>start[i];
    cout <<"Enter finish time: \n";
    for (int i=0;i<n;i++)
    cin>>finish[i];
    cout<<"\nSelected Activities:\n";
    int last =0;
    cout<<"Activity 1\n";
    last = finish[0];
    for(int i=1;i<n;i++){
        if (start[i]>=last){
            cout<<"Activity"<<i+1<<"\n";
            last = finish[i];
        }
    }
    return 0;
}