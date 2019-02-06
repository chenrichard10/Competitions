#include<bits/stdc++.h>

using namespace std;

int main(){
    cin.sync_with_stdio();
    cin.tie(0);
    int N=0,q,sum=0;
    cin>>q>>N;
    int dStan[N];
    int pLand[N];
    for (int i=0; i<N; i++)
    {
        cin>>dStan[i];
    }
    for(int i=0; i<N; i++)
    {
        cin>>pLand[i];
    }
    if(q==1){
        sort(dStan,dStan+N);
        sort(pLand,pLand+N);
        for(int i=0;i<N;i++){
            sum+=max(dStan[i],pLand[i]);
        }
    }
    else if(q==2){
        sort(dStan,dStan+N);
        sort(pLand,pLand+N,greater<int>());
        for(int i=0;i<N;i++){
            sum+=max(dStan[i],pLand[i]);
        }
    }
    cout<<sum<<"\n";

}
