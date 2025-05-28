#include <iostream>
#include <vector>
using namespace std;

void getPerms(vector<string>& nums, int idx, vector<vector<string>>& ans)
{
    if(idx == nums.size())
    {
        ans.push_back(nums);
        return;
    }

      for(int i = idx; i < nums.size(); i++)
       {
        swap(nums[idx], nums[i]);  //idx place => ith element choice
        getPerms(nums, idx+1, ans);

        swap(nums[idx], nums[i]);  //backtracking
       }
}

   vector<vector<string>> permute(vector<string>& nums)
   {
    vector<vector<string>> ans;
    getPerms(nums, 0, ans);

    return ans;
   }

   int main()
   {
      vector<string> nums = {"a","b","c"};
     
      vector<vector<string>> result = permute(nums);

    for(  const auto& v : result) 
    { 
       for(const string& val : v)
       {
        cout<< val <<" ";
       }
         cout << endl;
    }
      return 0;
   }