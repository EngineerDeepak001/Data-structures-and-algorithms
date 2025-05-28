#include<iostream> 
#include<vector>
using namespace std;
 
void Merge(vector<int>&arr, int st, int mid, int end)
{
    vector<int> temp; 
    int i = st;
    int j = mid+1;

    while(i <= mid && j <= end)
    {
       if(arr[i] <= arr[j])
       {
        temp.push_back(arr[i]);
        i++;
       }
       else{
        temp.push_back(arr[j]);
         j++;
       }
    }
      while( i <= mid)
      {
        temp.push_back(arr[i]);
        i++;
      }

      while( j <= end)
      {
        temp.push_back(arr[j]);
        j++;
      }

   for(int idx = 0; idx < temp.size(); idx++)
   {
       arr[idx+st] = temp[idx];
   }


}

void MergeSort(vector<int>&arr, int st, int end)
{
    //base case
    if(st >= end)
        return;
   
   int mid = st+(end-st)/2;

    //Left part sort ke liye
    MergeSort(arr, st, mid);

    //Right part sort ke liye
    MergeSort(arr, mid+1, end);

    Merge(arr, st, mid, end);

}

 int main()
 {
     vector<int> arr = {4,3,5,4};
    int st = 0;
    int end = arr.size()-1;

     MergeSort(arr, st, end);

  for(int val : arr)
  {
    cout<< val <<" ";
  }

 }