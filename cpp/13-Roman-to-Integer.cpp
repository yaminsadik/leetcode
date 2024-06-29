class Solution {
public:
    int romanToInt(string s) {
        //create an unordered map
        unordered_map<char, int> rToI{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50}, 
            {'C', 100},
            {'D', 500}, 
            {'M', 1000}
        };
        // variable to hold the result
        int result = 0;
        /*if the previous element is less than the next element, substract the vlaue of
        the previous element */ 
        for(size_t i = 0; i < s.size(); i++ ){
            if(i+1 < s.size() && rToI[s[i]] < rToI[s[i+1]]){
                result -= rToI[s[i]];
            }
            else{
                result+= rToI[s[i]];
            }
        }
        return result;


        
    }
};