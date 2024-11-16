class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) return "";
      int left,right;
        if(s.length()==1){
            return s;
        }
        string longestpalindrome="";
        //odd palindrome
        for(int i=1;i<s.length();i++){
             left=i;
             right=i;
             while(s[left]==s[right]){
                left--;
                right++;
                if(left<0 || right>=s.length()){
                    break;
                }
             }
             string palindrome=s.substr(left+1,right-left-1);
             longestpalindrome=palindrome.length()>longestpalindrome.length() ? palindrome:longestpalindrome;
        }
        
        //Even Palindrome
        for(int i=1;i<s.length();i++){
             left=i-1;
             right=i;
             while(s[left]==s[right]){
                left--;
                right++;
                if(left<0 || right>=s.length()){
                    break;
                }
             }
             string palindrome=s.substr(left+1,right-left-1);
             longestpalindrome=palindrome.length()>longestpalindrome.length() ? palindrome:longestpalindrome;
            
           }
        return longestpalindrome;
    }
};