
//Replace space into the string @40 se 
// i/p-> my name is  //-> i/o -> my@40name@40is
#include<iostream>
using namespace std;

string ReplaceSpaces(string &str);

int main()
{
    string str = "my name is deepak";
    // cout<<"Enter Charcters -> ";
    // cin>>str;


 string result = ReplaceSpaces(str);
 
//  for(int i =0 ; i<str.length(); i++)
//  {
    
 cout<<result;
//  }

}

string ReplaceSpaces(string &str)
{
    string temp = "";

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else 
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}