class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         int minlen = 10000000;

        for(string f : strs)
        {
            if(f.size() < minlen)
                minlen =f.size();
        }

        string result = "";
        bool stop = false;

        for(int j = 0 ; j < minlen ; ++j)
        {
            char choice;
            for(int i = 0 ; i < strs.size() ; ++i) {

                if(!(strs[i][j] == strs[0][j]))
                {
                    stop = true;
                    break;
                }
                choice = strs[0][j];
            }
            if(stop)
                break;
            result += choice;
        }

        return result;
    }
};