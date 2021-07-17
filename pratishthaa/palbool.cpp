bool isAlpha(char c)
    {
        if( (48<=c && c<=57) || (65<=c && c<=90) || (97<=c && c<=122))
        {
            return true;
        } 
        return false;
    }
    
    char lower(char c)
    {
        if(65<=c && c<=90)
        {
            return c+32;
        }
        else
        {
            return c;
        }
    }
    
    bool isPalindrome(string s) 
    {
        string str;
        for(char c:s)
        {
            if(isAlpha(c))
                str+= lower(c);
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        if(str==rev)
        {
            return true;
        }    
        else
        {
            return false;
        }
            
    }
