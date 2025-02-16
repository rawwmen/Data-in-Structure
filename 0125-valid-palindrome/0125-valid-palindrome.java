class Solution {
    public boolean isPalindrome(String s) {
        int st=0;
        int end=s.length()-1;
        s=s.toLowerCase();
        while(st<end){

            while(st<end && !Character.isLetterOrDigit(s.charAt(st))) st++;
            while(st<end && !Character.isLetterOrDigit(s.charAt(end))) end--;

            if(s.charAt(st)!=s.charAt(end)){
            return false;
           }
           st++;
           end--;
        }
        return true;
    }
}