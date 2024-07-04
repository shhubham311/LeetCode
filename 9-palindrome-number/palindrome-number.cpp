class Solution {
public:
    bool isPalindrome(int x) {
        long revNum=0;
        long dup = x;

        if(dup<0){return false;}
        while(x!=0){
            int rem = x%10;
            revNum = (revNum*10) + rem;
            x = x/10;
        }

        if(dup==revNum){
            return true;
        }else{
            return false;
        }
    }
};