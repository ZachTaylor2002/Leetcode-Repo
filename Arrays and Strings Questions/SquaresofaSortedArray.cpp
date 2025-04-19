class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        /*
        Input: nums = [-4,-1,0,3,10]
        first: [16,1,0,9,100]
        then: [0,1,9,16,100]
        */
        vector<int> final_answer;
        for(int index = 0; index < nums.size(); index++){
            final_answer.push_back(( nums[index] * nums[index] ) );
        }
        //Now that we have the squared vector here we need to then sort the numbers here 
        // [16, 1, 0, 9, 100] to [0, 1, 9, 16, 100]
        sort(final_answer.begin(),final_answer.end());
        return final_answer;
    }
    
};
