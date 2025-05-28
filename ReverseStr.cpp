// Do reverse string 
#include<iostream>
using namespace std;


void Reverse(char name[], int n)
{
    int s = 0, e = n-1;

    while(s<e)
    {
        swap(name[s++], name[e--]);
    }
}


int getLength(char name[])
{

  int count = 0;
  for(int i = 0; name[i] != '\0'; i++)
  {
       count++;
  }
  return count;
}
 
int main()
{
 char name[20];

 cout<<"Enter name -> ";
 cin>>name;

 //cout<<"Enter name -> "<<name<<endl;

  //name[2] = '\0';
  int len = getLength(name);

  cout<<" Length: "<< len <<endl;
  
// void Reverse(Length);
    
    Reverse(name, len);

  cout<<" Reverse Name is -> "<< name <<endl;

return 0;
}