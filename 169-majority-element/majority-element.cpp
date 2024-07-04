class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int count =0, ele;
      for(int i=0; i<nums.size(); i++){
        if(count ==0 ){
            count =1;
            ele =nums[i];
        }else if(nums[i] == ele){
            count++;
        }else if(nums[i] != ele){
            count--;
        }
      }

      //now check if the frequency of element or ele is greateer than n/2
      int cnt =0;
      for(int i=0; i<nums.size(); i++){
            if(nums[i] == ele){
                cnt++;
            }
      }
      if(cnt>(nums.size()/2)){
        return ele;
      }
      return 0;
    }
};