class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.size() - 1;
        
        while(i < j)
        {
            while(i < s.size() && ! isalnum(s[i]))
                i++;
            if(i == s.size())
                return true;
            while(j > 0 && ! isalnum(s[j]))
                j--;
            if(j == 0)
                return true;
            if(tolower(s[i++]) != tolower(s[j--]))
                return false;
        }

        return true;
    }
};