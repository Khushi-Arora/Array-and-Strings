 class Solution {
public:
    void subset(int n,int i,vector<int> &temp,vector<int>& nums, vector<vector<int>> &res)
{
    if(i==n)
    {
       res.push_back(temp);
        return ;
    }
    temp.push_back(nums[i]);
    subset(n,i+1,temp,nums,res);
        temp.pop_back();
    subset(n,i+1,temp,nums,res);
}
    vector<vector<int>> subsets(vector<int>& nums) {
    int n;
        vector<int>temp;
    n=nums.size();
    vector<vector<int>>res;
   subset(n,0,temp,nums,res);
        return res;
    }

};
