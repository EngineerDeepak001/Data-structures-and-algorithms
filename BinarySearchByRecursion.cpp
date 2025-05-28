#include<iostream> 
using namespace std;
 
 bool BinarySearch(int arr[] ,int s, int e, int key)
 {
    //base case 
    //element not found
    if(s > e)
    {
        return false;
    }
       int mid = s + (e - s)/2;

     //element found
    if(arr[mid] == key)
        return true;

    if(arr[mid] < key)
    {
        BinarySearch(arr, mid+1, e, key);
    }
    else{
         BinarySearch(arr, s , mid-1, key);
    }
 }

int main()
{
    int size = 5;
    int arr[size] = {2,4,6,8,10};
    int key = 11;

    cout<<"Present or Not "<< BinarySearch(arr, 0, size-1,key) <<endl;

return 0;

}