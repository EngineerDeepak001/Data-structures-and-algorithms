//Jb bhi bda element milega use shifte kr dega or nhi
// milega to break kr ke bahar nikal jayega
#include<iostream>
using namespace std;

void InsertionSort(int n, int arr[])
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for(j = i-1; j>=0; j--)
        {

            if(arr[j] > temp)
            {
                //Shift Right
                arr[j+1] = arr[j];
            }
            
            else
              {
                  //ruk jao
                  // loop se bahar nikal jao 
                  //j index le ke
                    break;
               }
        }

        arr[j+1] = temp;//loop break j is j+1 
    }
}


int main()
{
    int n = 4;
    int arr[n] = {5,4,3,2};

     InsertionSort(n,arr);

     for(int i = 0; i<n; i++)
     {

        cout<< arr[i]  <<" ";
     } 

    return 0;
}