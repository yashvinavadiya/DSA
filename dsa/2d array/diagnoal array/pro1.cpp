#include <iostream>
#include <vector>
using namespace std;

void diagnoal(vector<vector<int> >matrix,int rows,int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == j)
                cout << matrix[i][j] << " ";
        }
        cout << endl;

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


    diagnoal(matrix, rows, cols);
    
}