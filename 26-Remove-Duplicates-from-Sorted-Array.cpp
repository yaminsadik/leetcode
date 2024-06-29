class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int u = 0;
        for (int i = 0; i<nums.size()-1;i++){
            if(nums[i] != nums[i+1]){
                nums[u++] = nums[i];
            }
        }
        nums[u++] = nums[nums.size()-1];
        return u;
        
    }
};