#include<iostream>
using namespace std;
                                        
peakIndexA(int arr[], int size){        

int s = 0, e = size-1;
 
 int mid = s + (e-s)/2;

 while(s<e)
 {
    if(arr[mid] < arr[mid+1])
    {
        s = mid + 1;
    }
    else{
          e = mid;
    }
    mid = s + (e-s)/2;
 }
 return s;
   
}

int main()
{
//     int arr[7] = {2,3,4,6,5,4,2};
   
//    int ans = peakIndexA(arr, 7);

// cout<<" The Mountain Peak element is "<<arr[ans] <<endl;
//   cout<<" The Mountain Peak element index is "<<ans <<endl;

  int brr[6] = {2,3,4,5,6,1};
   
int solve = peakIndexA(brr, 6);

cout<<" The Mountain Peak brr element is "<<brr[solve] <<endl;
  cout<<" The Mountain Peak brrelement index is "<< solve <<endl;
}