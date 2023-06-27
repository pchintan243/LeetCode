// Problem 13

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        map<char,int> rom;
        rom['I'] = 1;
        rom['V'] = 5;
        rom['X'] = 10;
        rom['L'] = 50;
        rom['C'] = 100;
        rom['D'] = 500;
        rom['M'] = 1000;
        for(int i = 0; i < s.length(); i++) {
            if(rom[s[i]] < rom[s[i + 1]]) {
                num = num - rom[s[i]];
            }
            else {
                num = num + rom[s[i]];
            }
        }
        return num;
    }
};