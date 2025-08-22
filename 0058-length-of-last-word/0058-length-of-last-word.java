class Solution {
    public int lengthOfLastWord(String s) {
        
        String[] words=s.trim().split(" ");
        int len=words.length;

        return words[len-1].length();
        
    }
}