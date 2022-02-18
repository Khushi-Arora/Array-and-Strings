class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        vector<long long int>temp(1,1);
        if(n==1) return temp;
        long long int mul=1;
        vector<long long int>larr(n,1);
        vector<long long int>rarr(n,1);
        vector<long long int>res(n,1);
        for(int i=0;i<n;i++)
        {
            mul*=nums[i];
            larr[i]=mul;
        }
        mul=1;
        int j=n-1;
        while(j>=0)
        {
            mul=mul*nums[j];
            rarr[j]=mul;
            j--;
        }
    
       for(int i=0;i<n;i++)
        {
            if(i==0)
            res[i]=rarr[i+1];
            else if(i==n-1)
            res[i]=larr[n-2];
            else
            res[i]=larr[i-1]*rarr[i+1];
        }
        return res;
    }
};
