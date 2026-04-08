class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_len=0;
        int curr_len=0;
        for (int n:nums){
            curr_len=n?curr_len+1:0;
            max_len=max(max_len,curr_len);
        }
        return max_len;
    }
};