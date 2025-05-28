#include<iostream> 
using namespace std;

/*  Tail recursion
int print(int n)
{
    if(n == 100)  //base case
        return 1;

    cout<< n <<endl;

    print(n+1); //recursive relation
}
*/
//++++++++++++++++++++++++ Head recursion (sidhaa recursion ) ++++++++++++

void print(int n)
{
    if(n == 0)  //base case
        return;


    print(n-1); //recursive relation


     cout<< n <<endl;
}


int main()
{
    int n;
    cin >> n;

 cout << endl;

    print(n);

return 0;
}