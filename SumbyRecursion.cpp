#include<iostream> 
using namespace std;

int RecSumProg(int arr[], int size)
{
    //base case
    if(size == 0)
        return 0;

    if(size == 1)
    {
        return arr[0];
    }
    
    int reamingPart = RecSumProg(arr + 1, size - 1);
    int  sum = arr[0] + reamingPart;
    
    return sum;    
}

int main()
{
    int size = 5;
    int arr[size] = {2,4,9,9,9};

  int sum = RecSumProg(arr, size);
   
   cout<< " Sum of Recursion Program : "<<sum<<endl;

return 0;
}