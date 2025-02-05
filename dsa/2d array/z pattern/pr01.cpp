#include<iostream>
#include<vector>
using namespace std;

void printrow(vector<vector<int>> matrix, int rows, int cols)
{
    for(int i=0; i<cols; i++)
    {
        cout << matrix[0][i]<<" "<< endl;
    }


    for(int i=1; i<rows; i++)
    {
        for(int j=cols-2; j>=0; j--)
        {
            if(i+j==rows-1)
            {
                  cout << matrix[i][j] <<" "<<endl;
            }
        }
    }

    for(int i=1; i<cols; i++)
    {
        cout << matrix[rows-1][i]<<" "<<endl;
    }

}

int main()
{
      vector<vector<int> > matrix={
        {10,20,30,40},
        {22,33,44,55},
        {23,34,45,56},
        {24,43,44,11}
    };
    int rows = matrix.size();
    int cols = matrix[0].size();

    printrow(matrix, rows, cols);

}