class Solution {
public:
    void XOR(int index, vector<int> &nums, vector<int> &curr, vector<vector<int>> &result){
        result.push_back(curr);
        for (int i=index; i<nums.size(); i++){
            curr.push_back(nums[i]);
            XOR(i+1, nums, curr, result);
            curr.pop_back();
        }
    }

    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> curr;
        XOR(0, nums, curr, result);
        int s=0;
        for (auto i:result){
            int xval=0;
            for (auto j:i){
                xval=xval^j;
            }
            s+=xval;
        }
        return s;
    }
};