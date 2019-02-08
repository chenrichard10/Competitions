#include <bits/stdc++.h>

using namespace std;

int main()
{
    int W=0,N=0,T=0,sum=0;
    cin>>W>>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<N; i++)
    {
        sum+=arr[i];
        if(i-3>0)
            sum-=arr[i-4];
        if(sum>W)
        {
            T=i;
            break;
        }
        else
        {
            T=i+1;
        }
    }
    cout<<T<<"\n";
}
