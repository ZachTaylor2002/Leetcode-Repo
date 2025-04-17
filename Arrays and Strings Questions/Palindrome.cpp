/*Leetcode Question #1 
Example 1: Given a string s, return true if it is a palindrome, false otherwise.

A string is a palindrome if it reads the same forward as backward. That means, after reversing it, it is still the same string. For example: "abcdcba", or "racecar"

My implementation:
*/
#include <iostream>
#include <string>

using namespace std;

//Write Logic here to check for a Palindrome
bool isPalindrome(string s) {
    //Okay we have the string of s
    //Let's assume the result is going to be false
    bool result = true;
    int left = 0;
    int right = s.size()-1;
    //We need logic in here to check the string!
    while(left < right){
        if(s[left] != s[right]){
            return false;   //We need in here to STOP the while loop immeditely not just assign the variable so return false because then it would keep checking.
        }
        else{
            left++;
            right--;
        }
    }
    return result;
}

int main() {
    string input = "Hello";

    if (isPalindrome(input)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
