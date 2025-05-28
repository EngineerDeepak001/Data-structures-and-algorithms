/* #include<iostream>
using namespace std;

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

  //name[2] = '\0';

  cout<<" Length: "<<getLength(name) <<endl;
}
*/
   //fuctions = cin.getline(str,len,delim) 


#include<iostream>
using namespace std;
int main()
{
    
    char str[] = {apna college};
 
 int len = 0;
    for(int i =0 ; i< str[i ] !='\0'; i++)
    {
        len++;
    }
    cout<<" Lenth of char :- "<<len<<endl;
    // cin.getline(str,100);

    // for(char ch : str)
    // {
    //     cout<< ch <<" ";
    // }
    // cout<<endl;
    return 0;
}
