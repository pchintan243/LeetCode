// Problem 58
// If in last whitespaces are there then first remove it after that removing last space count the size of last word.

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int flag = 0;

        for(int i = s.size()-1; i>=0; i--) {
            if(s[i] == ' ' && flag) {
                break;
            }
            if(s[i] != ' ') {
                flag = 1;
                count++;
            }
        }
        return count;
    }
};