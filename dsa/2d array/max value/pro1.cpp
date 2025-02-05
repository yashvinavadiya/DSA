#include<iostream>
#include<Vector>

using namespace std;




void maxvalue(vector<vector<int> > matrix, int rows, int cols)
{
    int maxvalue = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j]>maxvalue)
            {
                maxvalue = matrix[i][j];
            }
        }
        cout<<"maxvalue"<<i<<" :"<<maxvalue<<endl;
    }
    cout <<  endl;
  
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

   maxvalue(matrix, rows, cols);
    return 0;
}