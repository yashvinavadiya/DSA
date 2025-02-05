#include <iostream>
using namespace std;
int main()
{
string name[3]={"yashvi","nidhi","jensi"};
int age[4]={5,7,8,9};


for(int i=0;i<4;i++)
{
    cout<<"age: "<<age[i]<<endl;
}

for(int i=0;i<3;i++)
{
    cout<<"name: "<<name[i]<<endl;

}
return 0;
}