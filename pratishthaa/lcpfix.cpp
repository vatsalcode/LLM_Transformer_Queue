string longestCommonPrefix(vector<string>& strs) {
         if (strs.size() < 2)
         {
            return strs.front();
        }
        sort(strs.begin(), strs.end());
        string& s = strs.front();
        string& t = strs.back();
        int len = min(s.size(), t.size());
        int i = 0;
        while (i < len && s[i] == t[i]) {
            ++i;
        }
        
        return s.substr(0, i);
        
    }
