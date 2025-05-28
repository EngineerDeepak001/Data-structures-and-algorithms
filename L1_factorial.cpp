#include<iostream> 
using namespace std;


void factorial(int n)
{
    // base case
    if(n == 0)
       return;


    // int smallProblem = factorial(n-1);
    // int biggerProblem = n * smallProblem;

  
    return  n * factorial(n-1);  //recursive relation
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);

  cout<< ans <<endl;
}