class Solution {
public:
    void solve(int ind, vector<vector<int>> &ans, vector<int> &ds, vector<int> &nums){
    if(ind==nums.size()){
        int sum=0;
        for(int i=0;i<ds.size();i++){
            sum+=ds[i];

        }
        cout<<sum<<endl;
        ans.push_back(ds);
        return;
    }
        ds.push_back(nums[ind]);
        solve(ind+1,ans,ds,nums);
        ds.pop_back();
        solve(ind+1,ans,ds,nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(0,ans,ds,nums);
        return ans;
    }
};