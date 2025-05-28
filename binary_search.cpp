#include<iostream>
using namespace std;
      
  binarysearch(int arr[], int size, int key)
  {

          int start = 0;
        int end = size-1;

     int mid = start + (end - start)/2;

     while(start <= end)
 {
           
           if(arr[mid] == key)
           {
              return mid;
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

               return -1;

             }


    int main()
    {
    int even[6] = {2,4,6,12,14,18};
   
   int evenindex = binarysearch(even, 6 , 18);
   cout<< "key 18 is present index number is " << evenindex <<endl;
    evenindex = binarysearch(even, 6 , 14);
    cout<< "key 14 is present index number is " << evenindex <<endl;
    evenindex = binarysearch(even, 6 , 24);

   cout<< "key 24 is present index number is " << evenindex <<endl;

    }