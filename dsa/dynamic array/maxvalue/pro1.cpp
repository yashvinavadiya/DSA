#include <iostream>
using namespace std;

void maxvalue(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
        
    }
    cout << "Maximum value: " << max << endl;
}


int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout<<"value of array"<<endl;
    maxvalue(arr);
    return 0;
}