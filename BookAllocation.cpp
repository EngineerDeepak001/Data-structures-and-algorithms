//books ko allocate krena he jisme har ek book har ek studne to allocate hogi,or allocation contigous manner me hoga
// jisme student m=2 he or total n. of book n = 4  book in arry 10,20,30,40
// m1 = trick first student 10 le le or baki 20,30,40=90 dusra stuent
// m2 = first student 10,20 =30 le le or baki 30,40 == 70 dusra student le le
// m3 = first student 10,20,30 == 60 le le or baki 40 dusra student
// in sabki maxima value nikal kr m1 = 90,m2 = 70 or m3 = 60
//or ab in sab mese minimam value nikale jo 60 he this is a answer

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
   int studentCount = 1;
   int pageSum = 0;

     for(int i = 0; i < n; i++)
     {
       if(pageSum + arr[i] <= mid)
       {
        pageSum = pageSum + arr[i];//30
       }
     else
     {
       
       studentCount++;
        if(studentCount > m || arr[i] > mid)
        {
            return false;
        } 
         pageSum = pageSum + arr[i];
       }
     
     }
    return true;
}


int booksAllocate(int arr[], int n, int m){

int s = 0;
int sum = 0;
for(int i = 0; i<n; i++)
{
     sum += arr[i];
}
int e = sum;
int ans = -1;
//int mid = s + (e-s)/2;  //50

while(s<=e)
{         
   int mid = s + (e-s)/2; //50
                // arr,4,2,50
     if(isPossible(arr,n,m,mid))
      { 
         ans = mid;
         e = mid-1;
      }
      else {
        s = mid+1;
      }
}
 return ans;
}


int main(){
    int n = 4;
    int arr[4] = {10,20,30,40};
    int m = 2;

   int ans = booksAllocate(arr, n, m);
  
    cout<<"Book allocated "<<ans;
   
}