class Solution {
    public int strStr(String haystack, String needle) {
        int n=needle.length();
        int h=haystack.length();

        if (n>h) return -1;

        for (int i=0;i<= h-n;i++)
        {
            String sub=haystack.substring(i,n+i);
            if (sub.equals(needle)) return i;

        }
        return -1;
        
    }
}