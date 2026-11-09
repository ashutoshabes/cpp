#include <iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
 vector<int>arr(N);
 for (int i=0;i<N;i++){
    cin>>arr[i];
 }
 int gsum=arr[0];
 for(int i=0;i<N;i++){
    int sum =0;
    for (int j=0;j<N;j++){
        sum = sum +arr[j];
        if (sum>gsum) {
            gsum=sum;
        }
    }
 }
   cout<<gsum<<endl;
return 0;
}