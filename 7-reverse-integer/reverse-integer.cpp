class Solution {
public:
    int reverse(int x) {
        long revNum=0;
        int last_dg;
        while(x!=0){
          last_dg = x%10;
          revNum = (revNum*10) + last_dg;
          x = x/10;

           if (revNum > INT_MAX || revNum < INT_MIN) {
                return 0;
            }
        }
        return revNum;
    }
};