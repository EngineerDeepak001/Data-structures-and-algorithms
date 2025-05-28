#include <iostream>
using namespace std;

int findPosition(int arr[], int n, int k);
int main() {
    int arr[] = {7, 9, 1, 2, 3};
    int n = 5;
    int key = 2;

    int ans = findPosition(arr, n, key);

    if (ans != -1) {
        cout << "Value " << key << " found at index " << ans << endl;
    } 
    else {
        cout << "Value " << key << " not found" << endl;
    }

    return 0;
}

// Function prototypes
int getPivot(int arr[], int n);
int binarySearch(int arr[], int s, int e, int key);



int getPivot(int arr[], int n) {
    int s = 0, e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } 
        else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(int arr[], int s, int e, int key) {
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

int findPosition(int arr[], int n, int k) {
    int pivot = getPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    }
     else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}




///////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// // int getPivot(int arr[],int n);
// // int binarysearch(int arr[], int s, int e, int key);
// // int findPosition(int arr[], int n, int k);

// int getPivot(int arr[], int n)
// {
//     int s = 0, e = n-1;

//     int mid = s + (e-s)/2;

//     while(s<e){
        
//         if(arr[mid] >= arr[0])
//         {
//             s = mid+1;
//         }
//         else
//         {
//                e = mid;
//         }
//     }
//       return s;
// }

//   int binarysearch(int arr[], int s, int e, int key)
//   {
//         int start = s;
//         int end = e;

//      int mid = start + (end - start)/2;

//      while(start <= end)
//     {
//            if(arr[mid] == key)
//            {
//               return mid;
//             }
//            //go to right wala part
//                 if(key > arr[mid])
//                 {
//                        start = mid+1;    
//                   }

//             else {  //key < arr[mid]
//                   end = mid-1;
//                 }
             
//         }
//          return -1;
//              }


//     int findPosition(int arr[], int n, int k){

//         int pivot = getPivot(arr, n);

//         if( k >= arr[pivot] && k <= arr[n-1])
//         { //BS on second line

//              return binarysearch(arr, pivot, n-1, k);
//         }
//          else { //BS on first line 

//             return binarysearch(arr, 0, pivot-1, k);
//          }
//     }


//     int main(){
 
//      int arr[5] = {7,9,1,2,3};

//      int ans = findPosition(arr, 5, 1);

//         if(ans == 1){
//             cout<<" Pivot value is present ";
//         }
//         if(ans == -1){
//             cout<<"Pivot value is not present";
//         } 
//    //   cout<< "Pivot value present in index "<< ans <<endl;

//     // cout<< "Pivot value is "<< arr[ans] <<endl;

//     }