// first and last occurance in increasing order binary search 

#include<iostream>
using namespace std;
      
  firstoccur(int arr[], int size, int key)
  {

          int start = 0;
          int end = size-1;
          int ans = -1;
     int mid = start + (end - start)/2;

     while(start <= end)
   {
       if(arr[mid] == key)
           {
               ans = mid;
               end = mid - 1;
            }
        if(key > arr[mid])
                  {
                       start = mid+1;    
                  }
          else {
                  end = mid-1;
                }    
         mid = start+(end-start)/2;
             
                }

               return ans;

             }



lastoccur(int arr[], int n, int key)
  {

          int s = 0, e = n-1;
           int mid = s + (e - s)/2;
          int ans = -1;

     while(s <= e)
   {    
           if(arr[mid] == key)
           {
               ans = mid;
               s = mid + 1;
            }

       else if(key > arr[mid])
      {
           s = mid+1;    
      }

         else 
          {
            e = mid-1;
          }
             
             mid = s+(e-s)/2;
             
            }
               return ans;
             }


    int main()
    {

    int even[10] = {1,1,4,4,4,4,4,4,4,5};

      int last = lastoccur(even, 10, 4);
   
   cout<< " last occurantion 1 at index in " << last  <<endl;

   int first = firstoccur(even, 10 , 4);

   cout<< " first occurantion 1 at index in " << first <<endl;

   int  total = (last - first) + 1;

     cout<< " Total number of occurace " << total <<endl;


   
    }