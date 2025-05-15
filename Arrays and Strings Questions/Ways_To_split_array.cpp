#include <iostream>
#include <vector>
using namespace std;

/*
Example 2: 2270. Number of Ways to Split Array

Given an integer array nums, find the number of ways to split the array into two parts so that the first section has a sum greater than or equal to the sum of the second section. The second section should have at least one number.
*/
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        //Rules:
        //First section: sum greater than or equal to the second section
        //Second section must have atleast one number
        //{10,14,6,13}
        int right_bound_sum;
        int total_sides = 0;
        //Going to be pre-proceesing the prefixed array here
        vector<int>prefix;
        prefix.push_back(nums[0]);
        for(int index = 1; index<nums.size(); index++){
            prefix.push_back(prefix.back() + nums[index]);
        }
        // We need to do some thinking here
        //This loop needs to stop at one minus becuase we must atleast have one slot in the right bound
        for(int index = 0; index < nums.size()-1; index++){
            //We need to access the right bound sum!
            //prefix[index] is the left bound!
            // left bound minus the last element in the prefix should give us the right_bound_sum
            right_bound_sum = (prefix.back() - prefix[index] );
            if( prefix[index] >= right_bound_sum){
                total_sides++;
            }
        }
        return total_sides;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 4, -8, 7}; // Example input
    int result = sol.waysToSplitArray(nums);
    cout<<result<<endl;
}