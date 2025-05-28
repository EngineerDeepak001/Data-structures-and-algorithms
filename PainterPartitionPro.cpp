// Mujhe is board ka partition krna he ki jitna esa ki sabse minimam time lage
// 
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to check if it's feasible to partition the array with given maxLoad
bool isPossible(int arr[], int n, int k, int mid) {
    int painters = 1;
    int currentLoad = 0;

    for (int i = 0; i < n; i++) {
        if (currentLoad + arr[i] > mid) 
        {
            painters++;
            currentLoad = arr[i];

            if (painters > k) 
            {
                return false;
            }
        } 
        else 
        {
            currentLoad += arr[i];
        }
    }
    return true;
}

// Function to find the minimum load
int findMinLoad(int arr[], int n, int k) {
   int s = 0; // Minimum possible value
   int sum = 0;
    for(int i = 0; i<n; i++)
{
     sum += arr[i];
}
int e = sum;    // Maximum possible value

    while (s < e) {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, k, mid)) {
            e = mid; // Try for a smaller maximum load
        } 
        else
         {
            s = mid + 1; // Increase the maximum load
        }
    }
    return s;
}

int main() {
    const int n = 4; // Number of partitions
    int arr[n] = {5, 5, 5, 5}; // Partitions
    int k = 2; // Number of painters

    int result = findMinLoad(arr, n, k);
    cout << "The minimum  load is: " << result << endl;

    return 0;
}
