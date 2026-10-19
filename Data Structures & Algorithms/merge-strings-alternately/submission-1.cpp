class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string sol = "";
        while(i < word1.size() || j < word2.size())
        {
            if(i < word1.size()) sol += word1[i++];
            if(j < word2.size()) sol += word2[j++];
        }

        return sol;
    }
};