#include <iostream>
#include <vector>

using namespace std;

bool hasPairWithSum(const vector<int>& nums, int target) {
    //We need to check here that
    // return true if there exists a pair of numbers that sum to target, false otherwise
    bool result = false;
    int left = 0;
    int right = nums.size()-1;
    while(left < right){
        int sum = nums[left] + nums[right];
        if( sum > target ){
            //Here we need to move the right pointer to the left since we are given a sorted array
            right--;
        }
        else if( sum < target ){
            //Here since the target is less than the sum for a sorted array we need to move to the value up!
            left++;
        }
        else{ return true; }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 2, 4, 6, 8, 9, 14, 15};
    int target = 13;

    if (hasPairWithSum(nums, target)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
