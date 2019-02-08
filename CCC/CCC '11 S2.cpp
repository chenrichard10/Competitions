#include<bits/stdc++.h>
using namespace std;

int main()
{
   int N=0;
   cin>>N;
   int numRight=0;
   string mC[2*N];
   for(int i=0;i<2*N;i++){
    cin>>mC[i];
   }
   for(int i=0;i<N;i++){
    if(mC[i]==mC[i+N]){
        numRight++;
    }
   }
   cout<<numRight;
}
