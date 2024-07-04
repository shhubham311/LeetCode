class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lt=0, rt=nums.size()-1, mid=0;
        while(mid<=rt){
            if(nums[mid] == 0){
                swap(nums[mid], nums[lt]);
                lt++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid], nums[rt]);
                rt--;   
            }
        }
    }
};