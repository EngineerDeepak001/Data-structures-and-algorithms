//Basics of 2D Array \
//search element 
#include<iostream>
using namespace std;

bool isPossible(int arr[][3],int target,int row,int col)
{
    for(int row = 0; row < 3; row++)
    {
        for(int col  = 0; col < 3; col++)
        {
            if(arr[row][col] == target)
            {
                cout<<"index is -> "<<row<<col<<endl;
                 return 1;
            }
        }
     
    } 
    return 0;
}

int main()
{
    //create 2D array
   int arr[3][3];
    //int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}
    //int arr[3][4] =  {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
   
    //taking input -> row wise input
    // for(int row = 0; row < 3; row++)
    // {
    //     for(int col = 0; col < 4; col++)
    //     {
    //         cin>>arr[row][col];
    //     }
    // }



cout<<"Enter numbers 1 2 3 4 5 6 7 8 9 10 11 12 :-> ";
//taking input ->col wise input
for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            cin>>arr[col][row];
        }
    }
 cout<<endl;


//Print  
    for(int row = 0;row < 3; row++)
    {
        for(int col  = 0; col < 3; col++)
        {
            cout<< arr[row][col] <<" ";
        }
           cout<<endl;
    }
  
  cout<<"Search Element :-> ";
  int target;
  cin>>target;

   if(isPossible(arr, target, 3, 3))
   {
    cout<<"Element is Found";
   }
   else{
    cout<<"Element is Not Found";
   }


    return 0;
}