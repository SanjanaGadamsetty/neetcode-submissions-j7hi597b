class Solution {
public:
    void backtracking(int index, vector<int> &nums, vector<int> &curr_subset, vector<vector<int>> &result_subsets){
        result_subsets.push_back(curr_subset);
        for (int i=index; i<nums.size(); i++){            
            if (i>index && nums[i]==nums[i-1]) continue;
            curr_subset.push_back(nums[i]);
            backtracking(i+1, nums, curr_subset, result_subsets);
            curr_subset.pop_back();
        }
        return;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result_subsets;
        vector<int> curr_subset;
        backtracking(0, nums, curr_subset, result_subsets);
        return result_subsets;
    }
};
