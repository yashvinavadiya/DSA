#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,8,5,9,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n-1; i++)
    {
        cout<<arr[i]-arr[i+1]<<endl;
    }
    return 0;

}


