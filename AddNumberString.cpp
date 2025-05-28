#include<iostream>
#include<algorithm> // reverse() function
using namespace std;

void addRE(string &num1, int p1, string &num2, int p2, int carry, string &ans) {  
    // Base case
    if (p1 < 0 && p2 < 0) {
        if (carry != 0) {
            ans.push_back(carry + '0');
        }
        return;
    }
    
    // एक केस सॉल्व करें
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';  // '5' - '0' = 5
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    int csum = n1 + n2 + carry;  // <- यहाँ सेमीकोलन जोड़ना था
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit + '0');  

    // Recursive call
    addRE(num1, p1 - 1, num2, p2 - 1, carry, ans);
}

string addString(string num1, string num2) {
    string ans = "";
    addRE(num1, num1.size() - 1, num2, num2.size() - 1, 0, ans);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string num1 = "11";
    string num2 = "123";

    cout << "Sum: " << addString(num1, num2) << endl;

    return 0;
}
