#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio();
    cin.tie(0);
    long long N=0;
    cin>>N;
    long long m[N][N];
    bool rows=true;
    bool columns=true;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>m[i][j];
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(m[i][j]>m[i][j+1]&&N-j>1){
                rows=false;
            }
            else if(m[i][j]<m[i][j]&&N-j>1){
                rows=true;
            }
            if(m[i][j]>m[i+1][j]&&N-i>1){
                columns=false;
            }
            else if(m[i][j]<m[i+1][j]&&N-i>1){
                columns=true;
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(rows==true&&columns==true){
                    if(j<N-1)
                cout<<m[i][j]<<" ";
                    else
                cout<<m[i][j]<<"\n";
            }
            else if(rows==true&&columns==false){
                 if(j<N-1)
                cout<<m[N-j-1][i]<<" ";
                else
                cout<<m[N-j-1][i]<<"\n";
                    }
            else if(rows==false&&columns==false){
                 if(j<N-1)
                cout<<m[N-i-1][N-j-1]<<" ";
                else
                cout<<m[N-i-1][N-j-1]<<"\n";
            }
             else if(rows==false&&columns==true){
                 if(j<N-1)
                cout<<m[j][N-i-1]<<" ";
                else
                cout<<m[j][N-i-1]<<"\n";
            }
        }
    }
}
