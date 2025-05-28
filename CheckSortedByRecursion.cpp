#include<iostream> 
using namespace std; 

bool isSorted(int *arr, int size)
{

    //base case 
   if(size == 0  || size == 1)
        return true;

    if(arr[0] > arr[1])
        return false;
    else
    {
        bool reamingpart = isSorted(arr + 1, size - 1);
        return reamingpart;
    }

}

int main()
{
    int arr[6] = {2,4,6,8,10,12};
    int size = 6;

    bool ans = isSorted(arr, size);

 if(ans){
    cout<<"Array is Sorted "<<endl;
 }
  else {
    cout<<" Array is Not Sorted "<<endl;
  }

return 0;
}