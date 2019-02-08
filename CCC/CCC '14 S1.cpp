#include<bits/stdc++.h>

using namespace std;

int main()
{
    int K=0,m=0,counter=0;
    cin>>K>>m;
    int r[m];
    int party[K];
    int second[K];
    for(int i=1; i<=K; i++)
    {
        party[i-1]=i;
    }
    for(int i=0; i<m; i++)
    {
        cin>>r[i];
        for(int j=0; j<K; j++)
        {
            if(party[j]!=0)
            {
                counter++;
            }
            if(counter==r[i])
            {
                party[j]=0;
                counter=0;
            }
        }
    }
    for(int i=0; i<K; i++)
    {
        if(party[i]!=0)
        {
            cout<<party[i]<<"\n";
        }
    }
}
