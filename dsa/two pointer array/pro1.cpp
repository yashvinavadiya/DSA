#include <iostream>
using namespace std;



bool ispairexists(int arr[],int n,int target)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int sum=arr[i]+arr[j];
        if(target==sum)
        {
            return true;
        }
        else if(sum>target)
        {
            j--;
        }
        else
        {
            i++;
        }
        return false;
    }
}

int main()
{
    int arr[5]={10,12,50,190,200};
    int t;
    cout<<"Enter the target sum: ";
    cin>>t;
    cout<<ispairexists(arr,5,t)<<endl;
}