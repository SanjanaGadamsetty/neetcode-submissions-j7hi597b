class Solution {
public:
    void backtracking(int index, vector<int> &nums, vector<int> &curr_subset, vector<vector<int>> &result_subsets){
        result_subsets.push_back(curr_subset);
        for (int i=index; i<nums.size(); i++){
            curr_subset.push_back(nums[i]);
            backtracking(i+1, nums, curr_subset, result_subsets);
            curr_subset.pop_back();
        }
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result_subsets;
        vector<int> curr_subset;
        backtracking(0, nums, curr_subset, result_subsets);
        return result_subsets;
    }
};
