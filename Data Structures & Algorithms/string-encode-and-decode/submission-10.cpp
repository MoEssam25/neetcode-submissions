class Solution {

private:

vector<string> split(const string& s, char delimiter) {
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}


public:

    string encode(vector<string>& strs) {
        string sol = "";

        if(strs.empty())
            return "";
        
        for(const auto& item : strs)
        {
            string ed_item = item;
            for(auto& ch : ed_item)
            {
                int num = (int)ch + 1;
                ch = (char)num;
            }
            sol += ed_item + ' ';
        }
        return sol;
    }

    vector<string> decode(string s) {
        vector<string> sol = split(s, ' ');

        for(auto& item : sol)
        {
            for(auto& ch : item)
            {
                int num = (int)ch - 1;
                ch = (char)num;
            }
        }
        return sol;
    }
};
