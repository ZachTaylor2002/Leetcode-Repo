class Solution {
public:
    //Sliding window Algorthim here but using the (FIXED LENGTH OF K!!!)
    double findMaxAverage(vector<int>& nums, int k) {
        //If the size of the array is one then we can just return that first element since the first element is automatically the average
        if(nums.size() == 1 ){
            return nums[0];
        }
        
        double sum = 0.0;
        //We need to build the first window
        for(int index = 0; index < k; index++){
            //Logic here depedning on the program
            //This case here we are going to add the sums together 
            sum += (nums[index]);
        }
        //Okay first window is Completed! Now we need to focus on removing elements while also respecting the K variable 
        //Delcare answer to have the old avergae before the loop
        double answer = (sum/k);
        
        //Second for loop to add and remove elements while respecting the K constraint!
        for(int index = k; index < nums.size(); index++){
            //Step1: Add the new element to the window size!
            sum += nums[index];
            
            //Remove the first element that was included in the window
            sum -= nums[index - k];
            
            //Find the highest average here 
            answer = max(answer, sum/k );
        }
        //Return the answer 
        return answer;
    }
};