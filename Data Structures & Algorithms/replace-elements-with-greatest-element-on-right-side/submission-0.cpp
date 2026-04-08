class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int curr_max=-1;
        vector<int> v;
        for (int i=0;i<arr.size();i++) v.push_back(0);
        for (int i=arr.size()-1;i>=0;i--){
            v[i]=curr_max;
            curr_max=max(curr_max,arr[i]);
        }
        return v;
    }
};