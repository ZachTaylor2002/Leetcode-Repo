class Solution {
public:
    //Rules! We can only flip at most K zeros!
    //And within this we want the maximum number of consecutive 1's in the array
    //Sliding Window Algorthim will come into play here
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int counter = 0; //This variable will count the number of consecutive ones. 
        int used_ones_counter = 0;
        int answer = 0;
        for(int right = 0; right < nums.size(); right++){
            if( nums[right] == 1 ){
                counter += nums[right];
            }
            else if( nums[right] == 0 ){
                used_ones_counter += 1;
                counter += nums[right];
                
            }
            //The while the window is invalid is when we have flipped over K number of zeros.
            while( used_ones_counter > k ){
                if( nums[left] == 0){
                    counter -= nums[left];
                    used_ones_counter -= 1;
                    
                }
                left++;
                
            }
            
            answer = max(answer,right-left+1);
        }
        return answer;
        
    }
};