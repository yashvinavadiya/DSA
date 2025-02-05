#include<iostream>
#include<string>
using namespace std;

void print (string str) {
    int max=-1;
    for(int i=0; i<str.length(); i++)
    {
        string substr="";
        for(int j=i; j<str.length(); j++)
        {
            substr+=str[j];
           string str2;
    for(int i=str.length()-1; i>=0; i--) {
        str2+=str[i];
    }
    bool result=str2==substr;
           if(result)
           {
            int curr=substr.length();
            if(curr>max)
            {
                max=curr;
            }
           }
        }
    }
    cout<<max<<endl;
}

int main()
{
    string str="yashvi";
    print(str);
  
}