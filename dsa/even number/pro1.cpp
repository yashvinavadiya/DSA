#include <iostream>
using namespace std;

    void evenvalue(int arr[])
    {
        for(int i=0;i<5;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<arr[i]<<" ";
            }
        }
    }

    int main()
    {
        int arr[5] = {11, 22, 33, 44, 55};
        evenvalue(arr);
        return 0;
    }