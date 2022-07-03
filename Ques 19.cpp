class Solution {
public:
void sum(int i,int n,int target,vector<int>candidates,vector<int>&temp,vector<vector<int>>&res)
    {
        if(i==n)
        {
            if(target==0)res.push_back(temp);
    return;}
    if(candidates[i]<=target)
    {
    temp.push_back(candidates[i]);
    sum(i,n,target-candidates[i],candidates,temp,res);
    temp.pop_back();
    }
    sum(i+1,n,target,candidates,temp,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> res;
        int n=candidates.size();
        vector<int>temp;
        sum(0,n,target,candidates,temp,res);
        return res;
    }
};
