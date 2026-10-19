class Solution {
private:

    bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }


public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j)
        {
            if(s[i] != s[j])
            {
                return isPalindrome(s, i, j - 1) || 
                       isPalindrome(s, i + 1, j);
            }
            i++;
            j--;
        }

        return true;
    }
};