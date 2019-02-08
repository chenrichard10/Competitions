#include <bits/stdc++.h>

using namespace std;

int main()
{
int N=0;
int t=0;
int sCount=0;
int T=0;
int S=0;
string temp;
cin>>N;
cin.ignore();
vector<string>s(N);
for(int i=0;i<N;i++){
   getline(cin,s[i]);
   temp=s[i];
    for(int i=0;i<temp.size();i++){
            if(temp[i]=='S')
               S++;
            if(temp[i]=='T')
                T++;
            if(temp[i]=='t')
                t++;
            if(temp[i]=='s')
                sCount++;
    }
}
int tTotal=t+T;
int sTotal=S+sCount;
if(tTotal==sTotal)
cout<<"French\n";
if(tTotal<sTotal)
cout<<"French\n";
if(tTotal>sTotal)
cout<<"English\n";
}
