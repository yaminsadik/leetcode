class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> table1;
        int n = nums.size();

        //build the hash table
        for(int i = 0; i<n; i++){
            table1[nums[i]] = i; //array index i is value in hash table which is mapped to key
            }

        // find the complement
        for(int i=0; i<n; i++){
            int complement = target - nums[i];
            if (table1.count(complement) && table1[complement] != i){
                return {i, table1[complement]};
            }
        }
        return {};
        
    }
};