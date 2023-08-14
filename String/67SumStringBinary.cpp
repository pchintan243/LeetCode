// Given two string in terms of binary number.

// Sum two string and return the sum string in binary format

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1; // 1011
        int j = b.length() - 1; // 111

        int carry = 0;
        string s;
        while(i >= 0 || j >= 0 || carry == 1) {
            if(i >= 0) {
                carry += a[i--] - '0';
            }
            if (j >= 0) {
                carry += b[j--] - '0';
            }
            s += carry % 2 + '0';
            carry /= 2;
        }
        reverse(begin(s), end(s));
        return s;
    }
};