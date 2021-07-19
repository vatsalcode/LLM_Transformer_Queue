int strStr(string haystack, string needle) {
         if(!needle.size()) 
             return 0;
        if(!haystack.size()) 
            return -1;
        if(haystack.size() < needle.size()) 
            return -1;
        
        for(int i=0; i<=haystack.size()-needle.size(); i++)
        {
            if(haystack.substr(i,needle.size()) == needle){
                return i;
            }
        }
        return -1;
    }
