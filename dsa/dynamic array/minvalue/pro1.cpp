#include <iostream>
using namespace std;

void minvalue(int arr[])
{
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
        
    }
    cout << "Minimum value: " << min << endl;
}


int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout<<"value of array"<<endl;
    minvalue(arr);
    return 0;
}