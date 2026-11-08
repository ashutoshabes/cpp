#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M; 
    cin>>N>>M;
    vector<vector<int>>a(N,vector<int>(M));

    for(int i= 0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>a[i][j];
        }
    }

    for (int i=1;i<N-2;i++)
    {
        for (int j=1;j<M-2;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}