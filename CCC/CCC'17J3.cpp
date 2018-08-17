#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b,c,d,t;
    cin>>a>>b>>c>>d>>t;
    int totalSteps=abs(a-c)+abs(b-d);
    if(totalSteps>t){
    cout<<"N";}
    else {
    if(abs(totalSteps-t)%2==0)
    {
        cout<< "Y";
    } else{
    cout<< "N";
    }

}
    return 0;

}
