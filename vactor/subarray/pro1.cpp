#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printarray(vector<int>subarray)
{
    for(int sub:subarray)
    {
        cout<<sub<<" ";
    }
    cout<<endl;
}

void gensubarray(vector<int>arr)
{
    for(int i=0;i<arr.size();i++)
    {
        vector<int>subarray;
        for(int j=i;j<arr.size();j++)
        {
            subarray.push_back(arr[j]);
            printarray(subarray);
        }
    }
}

int main()
 {
    vector<int> arr = {1, 2, 3, 4, 5};
    gensubarray(arr);
    return 0;
}