#include <bits/stdc++.h>
using namespace std;
int alphabetCounterA[26];
int alphabetCounterB[26];

int main()
{
    cin.sync_with_stdio();
    cin.tie(0);
    string a,b;
    int temp=0;
    int numLeft=0;
    cin>>a>>b;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<26; i++)
    {
        if(count(a.begin(),a.end(),alphabet[i])>0)
        {
            alphabetCounterA[i]=count(a.begin(),a.end(),alphabet[i]);
        }
        if(count(b.begin(),b.end(),alphabet[i])>0){
            alphabetCounterB[i]=count(b.begin(),b.end(),alphabet[i]);
        }
    }
    for(int i=0;i<26;i++){
        if (alphabetCounterB[i]>alphabetCounterA[i]){
            cout<<"N\n";
            return 0;
    }
}
cout<<"A\n";
}
