
//2D Array Wave printing (first Top to bottom and second is Bottom to Top)
#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr,int nRows,int mCols)
{
    vector<int> ans;
    for(int col = 0; col < mCols; col++)
    {
        if(col&1)
        {
            //odd index -> Bottom to top
            for(int row = nRows-1; row>=0; row--)
            {
                cout<<arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }
        }
          else{
            // 0 or even index -> Top to Bottom
            for(int row = 0; row < nRows; row++)
            {
                cout<< arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }
          }
    }  
    return ans;
}

int main()
{
    //int arr[3][3];
    // for(int col = 0; col < 3; col++)
    // {
    //     for(int row = 0; row < 4; row++)
    //     {
    //         cin>>arr[row][col];
    //     }
    // }
   
    vector<vector<int>> arr = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

  wavePrint(arr,3,3);

    return 0;
}