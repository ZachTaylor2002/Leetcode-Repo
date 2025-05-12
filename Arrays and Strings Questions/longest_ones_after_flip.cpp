#include <iostream>
#include <string>

using namespace std;

// TODO: Implement your function to find the longest substring of 1's after flipping at most one 0
//We want the longest string containing 1's 
//We are allowed to filp one 0 to change it into a 1

int longestOnesAfterFlip(const string& s) {
    //Using the sliding window algorithm here. 
    int left = 0;
    int zero_counter = 0; //Keep track of the zeros in the string
    int current = 0;
    int answer = 0;    
    //Remember here that we are constantly increasing the right bound with this for loop
    for(int right = 0; right <s.size(); right++){
        if(s[right] == '1'){
            current += 1;
        }
        else if (s[right] == '0'){
            zero_counter += 1;
            current += 1;
        }
        while(zero_counter > 1){
            if(s[left] == '0'){
                zero_counter -= 1;
            }
             left++;
            
        }
        answer = max(answer, right-left+1);
        }
        
    return answer;
}

int main() {
    string s = "1101100111"; // Example input
    int result = longestOnesAfterFlip(s);
    cout << "Longest substring of 1's after flip: " << result << endl;
    return 0;
}
