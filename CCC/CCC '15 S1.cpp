#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int numInt=0;
    cin>>numInt;
    int input=0;
    int sum=0;
    vector<int> myInt;
    for(int i=0;i<numInt;i++)
    {
        cin>>input;
        myInt.push_back(input);
    }
    for(auto i=myInt.begin();i!=myInt.end();)
    {
        if(*i==0)
        {
             i=myInt.erase(i);
             i=myInt.erase(i-1);
            }
            else{
                ++i;
            }
        }
        for(int i=0; i<myInt.size(); i++)
        {
            sum+=myInt[i];
        }

    cout<<sum;
}
