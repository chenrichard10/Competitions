#include<bits/stdc++.h>

using namespace std;

int main()
{
    cin.sync_with_stdio();
    cin.tie(0);
    int J=0,A=0,shirtNum=0,shirtSize=0,maxNum=0;
    vector<int> jerseys(1000005);
    char size;
    cin>>J>>A;
    for(int i=1; i<=J; i++)
    {
        cin>>size;
        if(size=='S')
            jerseys[i]=0;
        if (size == 'M')
            jerseys[i] = 1;
        if (size == 'L')
            jerseys[i] = 2;
    }
    for(int i=1; i<=A; i++)
    {
        cin >> size >> shirtNum;
        if (size == 'S') shirtSize = 0;
        if (size == 'M') shirtSize = 1;
        if (size == 'L') shirtSize = 2;
        if (jerseys[shirtNum] >= shirtSize)
        {
            maxNum++;
            jerseys[shirtNum] = -1;
        }
    }
    cout << maxNum << "\n";
    return 0;   
}
