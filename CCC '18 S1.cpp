#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
  cin.sync_with_stdio(0);
  cin.tie(0);
  int N=0;
  double minimum=0;
  cin>>N;
  double villages[N];
  double averages[N];
  for(int i=0;i<N;i++){
    cin>>villages[i];
  }
  sort(villages,villages+N);
  averages[0]=0;
  averages[N-1]=0;
  for(int i=1;i<N-1;i++){
    averages[i]=((abs(villages[i-1]-villages[i])/2)+((abs(villages[i]-villages[i+1])/2)));
  }
  minimum=averages[1];
  for(int i=1;i<N-1;i++){
    if(averages[i]<minimum){
        minimum=averages[i];
    }
  }
  cout<<fixed<<setprecision(1)<<minimum;
}
