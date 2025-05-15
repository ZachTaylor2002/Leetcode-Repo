class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        //We have two iteratibles here
        //Two pointer approach! 
        int pointer_word1 = 0;
        int pointer_word2 = 0;
        //Counter (for each iterable) to keep track of each time we appened to the resulting string
        int counter_word1 = 0;
        int counter_word2 = 0;
        string mystring = "";
        while( pointer_word1 < word1.size() && pointer_word2 < word2.size()){
            //Appending the string1 first
            mystring += word1[pointer_word1];
            pointer_word1++;
            counter_word1++;
            mystring += word2[pointer_word2];
            pointer_word2++;
            counter_word2++;
        }
        //Note only one of these while loops will run 
        while(pointer_word1 < word1.size()){
            //check to see if we have filled the characters up!
            if( counter_word1 != word1.size()){
                mystring += word1[pointer_word1];
                counter_word1++;
            }
            pointer_word1++;
        } 
        while( pointer_word2 <  word2.size()){
            if( counter_word2 != word2.size()){
                mystring += word2[pointer_word2];
                counter_word2++;
            }
             pointer_word2++;

        }

        return mystring;



    }
};