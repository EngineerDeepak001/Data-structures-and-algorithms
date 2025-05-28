#include <iostream>
#include <algorithm>
using namespace std;
          //arr, 5,2,2
bool isPossible(int stalls[], int n, int k, int mid) {
    int cow = 1; // The first cow is placed at the first stall
    int Pos = stalls[0];// 1  // assuming a cow placed in first stall

    for (int i = 1; i < n; i++)
   {
        if (stalls[i] - Pos >= mid)
         {
            cow++;
            if (cow == k)
             {
                return true;
            }
            Pos = stalls[i];
        }
    }
    return false;
}
                   // arr, 5, 2
int aggressiveCows(int arr[], int n, int k)
 {
    // Sort the array
    sort(arr, arr + n); // 1,2,3,4,6

    int s = 0;
    int e = arr[n - 1] - arr[0]; // 5  Maximum possible distance
    int ans = -1;

    while (s <= e)
     {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, k, mid))
         {
            ans = mid; // This distance is possible, try for a larger distance
            s = mid + 1;
        } 
        else
         {
            e = mid - 1; // // This distance is not possible, try smaller distances
        }
    }
    return ans;
}

int main() {
    int n = 5; //size
    int arr[5] = {4, 8, 1, 9, 6};
    int k = 2; //cow
                               //arr , 5, 2
    int result = aggressiveCows(arr, n, k);

    cout << "Maximum distance for cows to be placed is " << result << endl;

    return 0;
}
