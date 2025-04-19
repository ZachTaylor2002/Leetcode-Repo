#include <iostream>
#include <string>

using namespace std;

// TODO: Write your function to check if s is a subsequence of t
bool isSubsequence(const string& s, const string& t) {
    // We need to see if t HAS elements of s
    //If so then we can return true
    //else false
    bool result = false;
    int counter = 0;
    int s_one = 0;
    int t_two = 0;
    while( (s_one < s.size()) && (t_two < t.size())){
        if( s[s_one] != t[t_two]){
            t_two++;
        }
        else if( s[s_one] == t[t_two] ){
            s_one++;
            t_two++;
            counter++;
            if( counter == s.size() ){
                return true;
            }
        }
        
    }
    while( s_one < s.size()){
        s_one++;
    }
    while( t_two < t.size()){
        t_two++;
    }
    return false;
}

int main() {
    string s = "bgdq";
    string t = "ahbgdc";

    if (isSubsequence(s, t)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
