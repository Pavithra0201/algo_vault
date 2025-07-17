class Solution {
public:
bool matched(char a,char b)
    {
         return ((a=='[' && b==']') ||
             (a=='{' && b=='}' ) ||
              (a=='(' && b==')'));
     }

    bool isValid(string s) {
    stack<char>para;
        for (char ch:s)
        {
            if (ch=='[' || ch=='{' || ch=='(')
            {
               para.push(ch);
            }

            else if (ch=='}' || ch==']' || ch==')')
            {
               if (para.empty())
                return false;
                    
                char top=para.top();
                para.pop();
                if(! matched(top,ch))
                    return false;
            }
           
           
        }

        
        
   return para.empty();  
}

};