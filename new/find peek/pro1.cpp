#include<iostream>
#include<vector>
using namespace std;

int findpeek(vector<int>arr)
{
    int start = 0;
    int end = arr.size()-1;
    int result =-1;
    
    while(start <=end)
    {
        int mid=int ((start+end)/2);
        if(arr[mid]<arr[0])
        {
            end=mid-1;
        }
        else
        {
            result=mid;
            start=mid+1;
        }
    }
    return result;
}

int main()
{
    vector<int>arr={6,7,20,30,40,1,2,3,4,5};
    int peak=findpeek(arr);
    cout<<peak<<endl;
}