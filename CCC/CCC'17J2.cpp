#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    int total=n;
    for(int i=1;i<=k;i++){
    int summySum=(n)*(pow(10,i));
    total+=summySum;
    }
    cout<<total;
}
