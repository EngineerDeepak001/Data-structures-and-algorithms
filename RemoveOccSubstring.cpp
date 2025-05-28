
#include<iostream>
using namespace std;

string RemoveOccSubstring(string s, string part)
{
    
    while(s.length()!= 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{

    string str = "daabcbaabcbcabccb";
     string part = "abc";

   string result = RemoveOccSubstring(str, part);

   cout<< result <<endl;

return 0;
}