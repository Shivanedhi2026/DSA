class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;

        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry == 1) {
            if (i >= 0) {
                carry += (a[i] == '1') ? 1 : 0;
                i--;
            }
            if (j >= 0) {
                carry += (b[j] == '1') ? 1 : 0;
                j--;
            }
            result += (carry % 2 == 0) ? '0' : '1';
            carry /= 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
