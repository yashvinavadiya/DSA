#include<iostream>
#include<vector>

using namespace std;


void printn(vector<vector<int>> matrix, int rows, int cols)

{

}


int main()
{
  
      vector<vector<int> > matrix={
        {10,20,30,40},
        {22,33,44,77},
        {23,34,45,76},
        {11,12,13,14}
    };
    int rows = matrix.size();
    int cols = matrix[0].size();

    printn(matrix, rows, cols);

}