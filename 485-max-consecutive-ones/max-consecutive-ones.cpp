class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0, temp=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
                temp = max(temp,count);
            }else{
                count =0;
            }
        }
        return max(count, temp);
    }
};