#include<iostream>
using namespace std;

long long int binarySearch(int n)
{
int s = 0;
int e = n; 
long long int mid = s+(e-s)/2;

long long int ans = -1;

while(s<=e)
{
   long long int squre = mid*mid;

    if(squre == n)
         return mid;

    if(squre < n)
    {
        ans = mid;
        s = mid+1;
    }

    else
    {
        e = mid - 1;
    }
    mid  = s + (e-s)/2;
}
  return ans;
}


int main(){

int n = 1000000;

int ans = binarySearch(n);

if(ans*ans == n){
    cout<< ans <<" is the square root of "<< n <<endl;
}
 else {
     cout<< n <<" is not a perfectr square . The closest integer square root is "<<ans<< endl;
 }
  return 0;
}