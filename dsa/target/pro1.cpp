#include <iostream>
using namespace std;


bool targetsum(int arr[], int n)
{
   int t;
   cout<<"targetsum";
   cin>>t;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == t)
                return true;
        }
    }
    return false;
}

int main()
{
   int n;
   cout<<"Enter the number of elements in the array";
   cin>>n;

   int arr[n];
   for (int i = 0; i < n; i++)
   {
     cout<<"Enter element "<<i<<" : ";
     cin>>arr[i];
   }

   bool sum= targetsum(arr, n);
   cout<<sum<<endl;
   return 0;
}