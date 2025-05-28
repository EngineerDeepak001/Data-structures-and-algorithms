#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) 
{  
    int row = matrix.size();
    int col = matrix[0].size();
    
    int start = 0;
    int end = row*col-1;
  
     while(start<=end)
     {
        int mid = start+(end-start)/2;
        int midal = matrix[mid/col][mid%col];

        if(midal == target)
        {  
            return 1;
        }

     if(target > midal) //target > middal
        {
            start = mid+1;
        }  
        
        else
        {  //midal > target
            end = mid-1;
        }
        
     }
     return 0;
    }      
};


int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1,   3,  5, 7},
        {10, 15, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 60;
   
    bool result = sol.searchMatrix(matrix, target);
    // for (int num : result) {
    //     cout << num << " ";
    // }
        
    if(result == 1)
    {
        cout<<" Element Found in index :-> "<< result <<endl;
        
    }
    else
    {
         cout<<"Element not found ";
    }

    
    cout << endl;

    return 0;
}