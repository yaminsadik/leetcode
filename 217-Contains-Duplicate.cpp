class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // declare an unordered set to store unique elements
        unordered_set<int> uset;

        // create a range based for loop to iterate through every elements of nums
        for(int num:nums) {
            // check if num is on uset, if it is it returns 1 means true.
            if (uset.count(num) > 0){
                return true;

            }
            // insert num in uset
            uset.insert(num);
        }
        // anythin else return false.
        return false;
    }
};