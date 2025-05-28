#include<iostream>
using namespace std;

getPivot(int arr[], int n)
{

    int s = 0, e = n-1;

    int mid = s + (e-s)/2;
  
   while(s<e)
   {
         if(arr[mid] >= arr[0]){
             s = mid+1;
         }
         else{  //arr[mid] < arr[0]
       
             e = mid;
         }
         mid = s+(e-s)/2;
  
         return s;
   }

}


int main()
{

    int arr[5] = {8,1,17,2,3};
   int ans = getPivot(arr,5);

    cout<<" Pivot is in index " << ans << endl;

     cout<<" Pivot value is " << arr[ans] << endl;
    
}