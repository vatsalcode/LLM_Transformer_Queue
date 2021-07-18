int myAtoi(string s) {
        while (s[0] == ' ')
        {
            s.erase(0, 1);
        }
        
        int m = 1;
        if (s[0] == '+' || s[0] == '-')
        {
            if (s[0] == '-') 
                m = -1;
            s.erase(0, 1);
        }
        
        int result = 0;
        for (int i = 0; i < s.length(); i++) 
        {
            if (!isdigit(s[i]))
            {
                break;
            }
            int v = s[i] - '0';
            if (result > INT_MAX/10) 
            {
                if (m == 1) 
                    return INT_MAX;
                if (m == -1) 
                    return INT_MIN;
            } 
            else if (result == INT_MAX/10)
            {
                if (m == 1 && v >= 7) 
                    return INT_MAX;
                if (m == -1 && v >= 8) 
                    return INT_MIN;
            }
            result = 10 * result + v;
        }
        return result * m;
    }
