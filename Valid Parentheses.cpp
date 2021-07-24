    bool matching(char a, char b){
        if(a=='(' and b ==')') return true;
        if(a=='{' and b =='}') return true;
        if(a=='[' and b == ']') return true;
        return false;
    }
    
    bool isValid(string s) {
        stack<char> str;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' or s[i]=='[' or s[i] == '{')
                str.push(s[i]);
            else
            {
                if(!str.empty() and matching(str.top(),s[i]))
                {
                    str.pop();
                }
                else
                   return false;
            }
        }
                   if(!str.empty())
                        return false;
        return true;
    }
