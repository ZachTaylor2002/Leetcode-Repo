#include <iostream>
#include <vector>

using namespace std;

// TODO: Write your function to find the longest subarray with sum <= k
int longestSubarrayWithSumAtMostK(const vector<int>& nums, int k) {
    //Subarray questions: Sliding Window!!!
    int left = 0;
    int current = 0;
    int answer = 0;
    //This for loop will act as the right bound of the window
    for(int right = 0; right < nums.size();right++){
        current += nums[right];
        //This while loop will check if the window is invalid!
        while(current > k ){
            current -= nums[left];
            left++;
             
        }
        answer = max(answer,(right-left)+1);
    }
    return answer;
  
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5}; // Example input array
    int k = 9;                          // Example constraint

    int result = longestSubarrayWithSumAtMostK(nums, k);

    cout << "Length of longest subarray: " << result << endl;

    return 0;
}
