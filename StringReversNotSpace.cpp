//Reverse string Not reverse space and null characters
// Do reverse string 
#include <iostream>
#include <algorithm>
using namespace std;

string ReverseWithLastWordModified(string name) {
    // Reverse the entire string
    reverse(name.begin(), name.end());

    // Find the position of the first space to separate the last word
    size_t lastSpace = name.find(' ');
    if (lastSpace != string::npos) {
        // Get the last word (everything after the last space)
        string lastWord = name.substr(0, lastSpace);
        string remaining = name.substr(lastSpace + 1);

        // Reverse the last word
        reverse(remaining.begin(), remaining.end());
        
        // Create the final string
        return lastWord + " " + remaining;
    }

    return name; // If there's no space, return the reversed string
}

int main() {
    string str = "My name is deepak";

    cout << "Enter name -> " << str << endl;

    // Call the function and get the transformed string
    string result = ReverseWithLastWordModified(str);

    // Change the last character of the last word to 'd'
    result[result.length() - 1] = 'd';

    cout << "Reversed Name is -> " << result << endl;

    return 0;
}
