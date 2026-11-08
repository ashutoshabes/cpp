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

    for (int i=0;i<N;i++){
        int sum=0;
        int maxi=a[i][0];
        int mini=a[i][0];
        for (int j=0;j<M;j++){
            sum+=a[i][j];

            if(a[i][j]>maxi)

            maxi=a[i][j];

            if(a[i][j]<mini)

            mini=a[i][j];
        }
        
        cout<<sum<<" "<<maxi<<" "<<mini<<endl;
    }
    return 0;
}