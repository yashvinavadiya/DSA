#include <iostream>
using namespace std;

int main()
{
    int marks[5]={10,20,50,190,200};
    for(int i=0; i<5; i++)
    {
        cout<<marks[i]<<" ";
    }
    cout<<endl;


int i=0;
int j=4;
while (i<j)
{
    int temp=marks[i];
    marks[i]=marks[j];
    marks[j]=temp;
    i++;
    j--;
}
        for(int i=0; i<5; i++)
        {
            cout<<marks[i]<<" ";
        }
        return 0;
}