#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={10,-10,20,0,100};
   // arr.push_back(100);
    arr.pop_back( );
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << endl;
    }
}