class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2]; // result is in integer and additional float is disgarded unlsess float/ double data type declared. 
    }
};