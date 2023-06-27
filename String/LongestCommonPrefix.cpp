// Problem 14

// We short the vector string array
// after that store first string and last string in one varible
// after that check this two strigs indexes and get the highest common factors among all string


// Why we do sorting in this?
// Because it directly removes the between strings to compare or give the highest difference string

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        
        sort(strs.begin(), strs.end());

        string l1 = strs[0];
        string l2 = strs[strs.size() - 1];

        int prefix = 0, i = 0;

        while((l1.size() > prefix) && (l2.size() > prefix)){
            if(l1[i] == l2[i]) {
                prefix++;
            }
            else {
                break;
            }
            i++;
        }
        return l1.substr(0, prefix);
    }
};