// followings are the different ways to create an array

#include <iostream>
using namespace std;

int main()
{
    int arr[100]; // it will allocate the memory 4 bytes * 100 = 400 bytes  with garbage value
    for (int i = 0; i<5;i++)
    {
        cout<< arr[i]<<" ";
    }

    int arr1[100] = {0}; // it will allocate the memory 4 bytes * 100 = 400 bytes  with 0 value
    for (int i = 0; i<5;i++)
    {
        cout<< arr1[i]<<" ";
    }

    int arr2[100] = {1,2,3,4,5}; // it will allocate the memory 4 bytes * 100 = 400 bytes  with given value
    for( int i=0;i<5;i++)
    {
        cout<< arr2[i]<<" ";
    }

    string fruits[4] = {"apple", "banana", "mango", "orange"}; // it will allocate the memory 1 bytes * 4 = 4 bytes  with given value
    for( int i=0; i<4; i++)
    {
        cout<<fruits[i]<<" ";
    }
    return 0;
}