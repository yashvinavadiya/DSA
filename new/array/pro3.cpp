#include <iostream>
using namespace std;

int main()
{
    string name [3]={"yashu","nidhi","jensi"};
    int age[5]={9,10,4,7,2};

    for(int i=0; i<3; i++)
    {
        cout << name[i] << endl;
    }

    for(int i=0; i<5; i++)
    {
        cout << age[i] << endl;
    }
    
    return 0;
}