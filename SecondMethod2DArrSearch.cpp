//search matrix second type ,row and column wise sorted
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool SearchSecondTMatrix(vector<vector<int>>& matrix, int target )
{
       int row = matrix.size();
       int col = matrix[0].size();

       int rowIndex = 0;
       int colIndex = col-1;

       while(rowIndex < row && colIndex >= 0)
       {
        int element = matrix[rowIndex][colIndex];

        if(element == target)
        {
            return 1;
        }
        if(element < target){
            rowIndex++;
        }
      else{
        colIndex--;
      }
    }
      return 0;
}

};



int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10,13,14,17, 24},
        {18,21,23,26, 30}
    };
     int target = 10;
    bool result = sol.SearchSecondTMatrix(matrix,target);
   
   if(result == 1)
    {
        cout<<" Element is Found "<<endl;
        
    }
    else
    {
         cout<<"Element not found ";
    }

    return 0;
}