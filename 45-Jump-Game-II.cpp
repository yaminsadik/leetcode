/*Range Based approach*/

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumpCtr = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();

        while (r<n-1){
            int farthest = 0;
            for(int i = l; i <= r; i++){
                farthest = max(i+nums[i], farthest);
            }
                l = r +1 ;
                r = farthest;
                jumpCtr += 1;
            
        }
        return jumpCtr;


        
    }
};