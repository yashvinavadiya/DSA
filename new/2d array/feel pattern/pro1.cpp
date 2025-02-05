#include<iostream>
#include<vector>

using namespace std;


void printb(vector<vector<int>> matrix, int m, int n)

{
    for(int i = 0; i < m;i++)
    {
        for(int j = 0; j < n;j++)
        {
            if(i==0||j==0||j==n-1||i==m-1)
            {
                 cout<<"-"<<"- ";
            }
            else
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
      vector<vector<int> > matrix={
        {10,20,30,40},
        {22,33,44,55},
        {23,34,45,87},
        {33,12,13,15}
    };
    int rows = matrix.size();
    int cols = matrix[0].size();

    printb(matrix, rows, cols);

}