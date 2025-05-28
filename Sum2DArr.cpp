//sum of 2D array 
#include<iostream>
using namespace std;

// void printRowSum(int arr[][3], int row, int col)
// {
//   cout<<"Printing sum -> "<<endl;
//     for(int row = 0; row < 3; row++)
//     {  int sum = 0;
//         for(int col  = 0; col < 3; col++)
//         {
//            sum += arr[row][col];
//         }
//           cout<< sum <<" ";
//     }
//    cout<<endl;
// }

int largestRowSum(int arr[][3], int row, int col)
{
     int maxi = 0;
    int rowindex = -1;

    for(int row = 0; row < 3; row++)
    { 
         int sum = 0;
        for(int col = 0; col < 3; col++)
        {
           sum += arr[row][col];
        }

          if(sum > maxi)
          {
           maxi = sum;
           rowindex = row;
          }
    }

    cout<<" Largest row sum is :-> "<<maxi <<endl;
   return rowindex;
}


int main()
{
    //create 2D array
   int arr[3][3];
   
   // taking input -> row wise input
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cin>>arr[row][col];
        }
    }

/*
cout<<"Enter numbers  :-> ";
//taking input ->col wise input
for(int col = 0; col < 3; col++)
    {
        for(int row = 0; row < 3; row++)
        {
            cin>>arr[row][col];
        }
    }
 cout<<endl;
 */


//Print  
    for(int row = 0;row < 3; row++)
    {
        for(int col  = 0; col < 3; col++)
        {
            cout<< arr[row][col] <<" ";
        }
           cout<<endl;
    }
  
   //printRowSum(arr, 3, 3);
   int ansIndex = largestRowSum(arr,3,3);
   cout<<" Max row is at index :-> "<<ansIndex<<endl;
   //3 4 11 2 12 1 7 8 7
    return 0;
}
