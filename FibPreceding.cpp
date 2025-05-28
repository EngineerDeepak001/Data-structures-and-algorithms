
//Fibonacci sequence , Sum of the two 
//preceding ones starting from 0 and 1. 
// ye apne se age wale two number ke recursion se sum laake dega jo bhi hoga wo sum

#include<iostream> 
using namespace std;

int fib(int n)
{

    if( n == 0)
        return 0;

    if(n == 1)
        return 1;

    int ans = fib(n-1) + fib(n-2);

    return ans;
}

int main()
{
    int n = 6;
    
    int ans = fib(n);
  
   cout<<" Ans = "<<ans<<endl;
    return 0;
}