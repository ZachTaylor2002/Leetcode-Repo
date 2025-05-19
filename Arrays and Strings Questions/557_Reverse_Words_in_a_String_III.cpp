class Solution {
public:
    string reverseWords(string s) {
        //Two Pointer Aproach 
        int left = 0;
        int right;
        bool Broken_word = false;
        string my_string = "";
        for(int index = 0; index < s.size(); index++){
            //We have reached a space within the string
            if(s[index] == 32){
                Broken_word = true;
                right = index-1;
                while(right > left){
                    my_string += (s[right]);
                    right--;
                }
                //If Left is unchanged meaning that we are at the start of string
                if(left == 0){
                    //Then append the first letter after the reversal
                    my_string += s[0];
                }
                //We need to focus our attention now on the first letter 
                //Appending the space to the string
                my_string += 32;
                left = index;
                //So we have the index at which we have a space 
                // Let's
                /*
                     LET'S()
                     |   |
                     L   R  
                     0 1 2 3
                     We can set the right index to index-1
                     and until we have reached the Left pointer position
                     Then set left equal to index and so on and so forth
                */
            }
            //else then we are approaching the end of the string
            else if(index == s.size()-1 && Broken_word == true){
                //We are going to need to set right to index
                right = index;
                while(right > left){
                    my_string += (s[right]);
                    right--;
                }
                //my_string += s[left];

            }
            else if(index == s.size()-1 && Broken_word == false){
                //We are going to need to set right to index
                right = index;
                while(right > left){
                    my_string += (s[right]);
                    right--;
                }
                my_string += s[left];

            }
        }
        return my_string;
    }
};