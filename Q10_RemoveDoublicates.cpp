

#include<iostream>
using namespace std;

int main() 
{
  
  string str = "abbaca";

 for(int i = 0; i < str.size(); i++)
 {
     if(str[i] == str[i+1])
       {
        //   str[i] = 0;
        //   str[i+1] = 0;
          
          str.erase(str.find(i),str.length());

       }
       
      
 }
  cout<<"Now remove element is -> "<<str<<endl;

 return 0;
}