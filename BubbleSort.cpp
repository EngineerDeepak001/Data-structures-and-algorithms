// Bubble sort =  Yah array ke largest ya bade element ko last me rakh deta he , waping se......
//swaping ke time jo bhi bda element milega first se use wo swap kr dega or index change kr dega
//isme piche se bade element ko rakhte ata he

#include<iostream>
using namespace std;


bool BubbleSort(int arr[], int n)
{
     bool swapped;
    for(int i = 0; i < n-1; i++)
    {
      //for round 1 to n-1
       swapped = true; //Reset swapped for each pass
         for(int j = 0; j < n - i - 1; j++)
         { 
            //process element till n-i th index
            //compare adjacent elements
              if(arr[j] > arr[j + 1])
                {
                   swapped = false;
                     swap(arr[j],arr[j+1]);    
                }
         }
               //  Agar swapped true hai, toh !swapped false hoga, aur if block execute nahi hoga. False me nhi chalega code ander nhi jaa payega
                //  Agar swapped false hai, toh !swapped true hoga, aur if block execute hoga. if condition ke ander k value k initilize krega
         if(!swapped)
         {
            // alread sorted
           // cout<<"\ncondition False is true (False == True) .......!swapped";
            cout<<"\nThis sort is not a sorted\n";
            return true;
            
         }
    }
    return false; //Return true if swaps occurred
}

int main()
{
     int n = 6;
     int arr[6] = {11,2,3,4,5,6};
 

    bool ans = BubbleSort(arr, n);

  // Print the sorted array
 // Agar ans true hai:
   // if (!ans) nahi chalega.
   
      for(int i = 0; i < n ; i++)
      {
         cout<< arr[i] << " ";
      }
     cout << endl;

      //Print whether the array was already sorted
         if(!ans)
         {
            cout<<"\nBubble sort already sorted";
         }

return 0;
}