class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        //have to solve the overflow issue. 
        k = k%n; //in case k is bigger than the size of the array.
        // todo: keep the k elements in a temp array
        vector<int>temp;
        for(int i = n-k; i<n; i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0; i < n-k; i++){
            temp.push_back(nums[i]);
        }
        for(int i = 0; i<n; i++){
            nums[i] = temp[i];
        }
        
    }
};