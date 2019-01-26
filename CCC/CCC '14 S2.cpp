#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int numOfficers;
    //Read in the first line as a number
    cin>>numOfficers;
    //numOfficerPairsLeft used to track number of pairs
    int numOfficerPairsLeft=numOfficers;
    //declare an arrat to store the first and second row values
    string rowOne[numOfficers];
    string rowTwo[numOfficers];
    //Read in data row ( second row of file)
    for (int i =0; i<numOfficers; i++)
    {
        cin>>rowOne[i];
    }
    //read in data row( third row of file)
    for (int j=0; j<numOfficers; j++)
    {
        cin>>rowTwo[j];
    }
    if(numOfficers%2!=0)
    {
        cout<<"bad\n";
        return 0;
    }
    //for loop for elements of rowOne
    for (int i=0; i<numOfficers; i++)
    {
        //for loop for elements of rowTwo
        for(int j=0; j<numOfficers; j++)
        {
            /*if element at rowOne is equal to element in rowTwo and they are not in the same statement
            check to see if the element of RowOne at position of the element in rowTwo is equal the element of
            rowTwo at the position of the element at rowOne*/
            if (rowOne[i]==rowTwo[j]&&i!=j)
            {
                //subtracts 1 from number of pairs left
                if (rowOne[j]==rowTwo[i])
                {
                    numOfficerPairsLeft-=1;
                }

            }
        }
    }

    //outputs good if all officers have a matching pair
    if(numOfficerPairsLeft==0)
    {
        cout<<"good\n"<<endl;
    }
    //outputs bad if officers do not have a matching pair
    else
    {
        cout<<"bad\n";
    }
}
