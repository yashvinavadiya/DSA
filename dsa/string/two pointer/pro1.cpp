#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str="nayan";
    
int i=0;
int j=str.length()-1;
while(i<j)
{
    if(str[i]!=str[j])
    {
        
  
      return false;
    }
    else
    {
         i++;
        j--;

    }
}
   return true;

}
