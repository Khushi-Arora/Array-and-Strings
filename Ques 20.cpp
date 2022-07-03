class Solution {
public:
    void sum(int i,int n,int target,vector<int>candidates,vector<int>&temp,vector<vector<int>>&res)
    {
            if(target==0)
            {res.push_back(temp);
        return;}
       for(int j=i;j<n;j++){
           if(candidates[j]>target)break;
           if(j>i && candidates[j]==candidates[j-1] )continue;
           temp.push_back(candidates[j]);
        sum(j+1,n,target-candidates[j],candidates,temp,res);
         temp.pop_back();}
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        sum(0,n,target,candidates,temp,res);
        return res;
    }
};
