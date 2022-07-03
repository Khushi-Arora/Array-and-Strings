    void subset(int i,int n,vector<int>nums,vector<int>&temp,vector<vector<int>>&res)
    {
        if(i==n)
        {
        return;}
        for(int j=i;j<n;j++)
        {
            if(j>i && nums[j]==nums[j-1])continue;
            temp.push_back(nums[j]);
            res.push_back(temp);
            subset(j+1,n,nums,temp,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>temp;
        temp={};
        vector<vector<int>>res;
        res.push_back(temp);
        subset(0,n,nums,temp,res);
        return res;
    }
};
