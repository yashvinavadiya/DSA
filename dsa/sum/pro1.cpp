#include <iostream>
using namespace std;


int printsum(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    return sum;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = printsum(arr, n);
    return 0;
}