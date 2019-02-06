#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio();
    cin.tie(0);
    int N=0;
    cin>>N;
    long long arr[N];
    long long lowerTide[N];
    long long higherTide[N];
    long long lowNum=0;
    long long lowTide=0;
    long long highTide=0;
    //set these array values to 0
    for(int i=0;i<N;i++){
        higherTide[i]=0;
        lowerTide[i]=0;
    }
    //reading in the array
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    //sort array
    sort(arr,arr+N);
    lowTide=(N/2+N%2)-1;
    highTide=lowTide+1;
    //current errors
    for(int i=0; i<N; i++)
    {
    if((arr[lowTide-i]<=arr[lowTide])&&(lowTide-i>=0)){
    lowerTide[i]=arr[lowTide-i];
    }
    if(arr[highTide+i]>=arr[highTide]&&highTide+i<N){
    higherTide[i]=arr[highTide+i];
    }
    }
    for(int i=0;i<N;i++){
        if(lowerTide[i]!=0){
            cout<<lowerTide[i]<<" ";
        }
        if(higherTide[i]!=0){
            cout<<higherTide[i]<<" ";
        }
    }
    cout<<"\n";
}
