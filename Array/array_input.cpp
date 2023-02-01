#include<iostream>
using namespace std;

int main()
{
    int marks[20],n;

    cout<<"Please enter the total number of students : ";
    for( int i=0; i<n; i++)
    {
        cin>>marks[i];
    }

    cout<<"following are the marks of students : ";
    for( int i=0; i<n; i++)
    {
        cout<<marks[i]<<" ";
    }

    cout<<endl;
    return 0;

}