class Solution {
public:
    void reverseString(vector<char>& s) {
        //We need to reverse the string here
        //Creating a vector here just in-case
        int left = 0;
        int right = s.size()-1;
        //Creating a space_holder variable for the character transition
        char space_holder;
        while( left < right ){
          //Since when we do the swap the s[left] value will get lost 
          //storing it into a space_holder variable so that we can assign it to s[right] later
            space_holder = s[left];
            s[left] = s[right];
            s[right] = space_holder;
          
          //Incrementing the left and right pointers
            left++;
            right--; 
        }
    }
};
