#include <bits/stdc++.h>

using namespace std;

bool isValid(int num)
{
    //create a vector of type boolean for seen variables
    vector<bool> seen(10, false);
    //while the number is greater than 0, check if digit has been seen
    while (num)
    {
        //set digit to be remainder
        int digit = num % 10;
        if (seen[digit])
            return false;
        seen[digit] = true;
        num /= 10;
    }
    return true;
}
int main()
{
    int year=0;
    cin>>year;
    year++;
    while(!isValid(year))
    {
        year++;
        isValid(year);
    };
    cout<<year<<"\n";
}
