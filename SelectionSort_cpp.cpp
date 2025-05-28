// Selection sort is selecting a minimam element and than swap 
//when in program define only varibales so Space complexity is most be 0(1)
// ye sabse chhote element ko find karta he or fir age lata he 

#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{

    for(int i = 0; i < n-1; i++)
    {
        int minIndex = i;

        for(int j = i+1; j < n; j++)
        {
           if(arr[j] < arr[minIndex])
           {
             minIndex = j;
           }
        }
        swap(arr[i], arr[minIndex]);
    }
}
   

int main ()
{   
    int n = 5;
    // int arr[n] = {6,8,2,1,11};
    cout<<" size of array  ";
     cin>> n;
     
    int arr[n];
    cout<<" Enter array element  ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    SelectionSort(arr, n);

   cout<< "Sorted array: ";
    for(int i = 0;i < n ;i++)
    {
        cout<< arr[i] << " ";
    }

    return 0;

}