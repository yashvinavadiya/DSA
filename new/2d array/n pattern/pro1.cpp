#include<iostream>
#include<vector>

using namespace std;


void printn(vector<vector<int>> matrix, int rows, int cols)

{
    for(int i=rows-1; i>=0; i--)
    {
        cout<<matrix[i][0]<<" " <<endl;
    }

    for(int i=1; i<rows; i++)
    {
       for(int j=0; j<cols; j++)
       {
        if(i==j)
        cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
    }

    for(int i=rows-2; i>=0; i--)
    {
        cout<<matrix[i][rows-1]<<" " <<endl;
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

    printn(matrix, rows, cols);

}