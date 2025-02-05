#include <iostream>
#include <vector>
using namespace std;

void antidiagonal(vector<vector<int> > matrix,int rows,int cols)
{
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            if (i + j == rows - 1) 
            {
                cout << matrix[i][j] << " ";
            }
            else{
                cout<<" - "<<" ";
            }
        }
         cout << endl;
    } 
   
}

int main()
{
    vector<vector<int> >matrix={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    antidiagonal(matrix, rows, cols);
    return 0;
}