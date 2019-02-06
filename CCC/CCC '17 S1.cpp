#include <bits/stdc++.h>
using namespace std;
int main()
{
    cin.sync_with_stdio();
    cin.tie(0);
    int N=0;
    int sum=0;
    int sum2=0;
    int counter=0;
    cin>>N;
    int arr[N];
    int arr2[N];
    for(int i=0;i<N;i++){
    cin>>arr[i];
    }
    for(int i=0;i<N;i++){
    cin>>arr2[i];
    }
    for(int i=0;i<N;i++){
        sum+=arr[i];
        sum2+=arr2[i];
        if(sum==sum2){
            counter=i+1;
        }
    }
    cout<<counter<<"\n";
}
