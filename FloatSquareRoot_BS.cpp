#include<iostream>
using namespace std;

long long int findRoot(int n)
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

double moreDecimal(int n, int Rundecimal , int asmroot)
{
  
  double factor = 1;
  double ans = asmroot;  

  for(int i = 0; i < Rundecimal; i++)
  {

     factor = factor/10; //it is converting in decimal
                          
   for( double j = ans; j*j < n; j = j+factor)
   {

       ans = j; //value converting in decimal
   }

  }  
  return ans;

}

int main()
{
    int n = 87;

int asmroot = findRoot(n);

if(asmroot*asmroot == n){
    cout<< asmroot <<" is the square root of "<< n <<endl;
}
 else {
     cout<< n <<" is not a perfectr square . The closest integer square root is "<<asmroot<< endl;
 }

   // cout<<" Enter the number "<<endl;
     //cin>> n;

     
     cout<<"\n  And Exact Root is "<< moreDecimal(n, 4, asmroot);

     return 0;
}