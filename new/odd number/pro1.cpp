#include <iostream>
using namespace std;

void oddvalue(int arr[])
{
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<endl;
        }
    }
}


int main()
{
    int arr[5]={4,6,3,2,5};
    oddvalue(arr);
   
}