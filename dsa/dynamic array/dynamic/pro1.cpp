#include <iostream>
using namespace std;


void printarray(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<endl;
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout <<"enter the value of index"<<endl;
        cin >> arr[i];
    }

    cout << "value of array"<<endl;
    printarray(arr, n);
}