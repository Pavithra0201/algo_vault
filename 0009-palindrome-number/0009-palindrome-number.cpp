class Solution {
public:
    bool isPalindrome(long x) {
        long  revnum = 0;
        long truenum=x;
        while (x > 0) {
           
            revnum = revnum * 10 + x%10;
            
            x = x / 10;
        }

        if (revnum == truenum)
            return true;
        else
            return false;
    }
};

