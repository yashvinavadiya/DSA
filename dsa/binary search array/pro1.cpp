#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector<int>arr,int t)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==t)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8};
    int t=5;
    int result=linearsearch(arr,t);
    cout<<result<<endl;
    return 0;
}