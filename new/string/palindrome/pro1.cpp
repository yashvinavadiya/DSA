#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool ispalidrome(string str) {
    string str2;
    for(int i=str.length()-1; i>=0; i--) {
        str2+=str[i];
    }
    return str2==str;
}


int main()
{
    string str="nayan";

    bool result =ispalidrome(str);
    cout<<result<<endl;
}