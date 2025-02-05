#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string str=" fullstack";
    int count=0;
    int n=str.length();

    for(char c:str)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            count ++;
        }
    }
    cout<<count<<endl;
    return 0;
}