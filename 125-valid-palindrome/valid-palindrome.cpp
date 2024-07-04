class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r =s.length()-1;
        while(l<=r){
           if(!isalnum(s[l])){l++; continue;} //to check for alphanumeric characters
           if(!isalnum(s[r])){r--; continue;}
           if(tolower(s[l])!=tolower(s[r])){
            return false;
           }
           
            l++;
            r--;
        }
      return true;
    }
};