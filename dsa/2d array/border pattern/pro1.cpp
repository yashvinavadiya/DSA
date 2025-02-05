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
                cout<<matrix[i][j]<<" ";
            }
            else
            {
                cout<<"-"<<"- ";
            }
        }
        cout<<endl;
    }


}

int main()
{
      vector<vector<int> > matrix={
        {10,20,30},
        {22,33,44},
        {23,34,45}
    };
    int rows = matrix.size();
    int cols = matrix[0].size();

    printb(matrix, rows, cols);

}