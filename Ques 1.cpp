class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,element;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
         if(count==0)
         {
            element=nums[i]; 
         }
        if(element==nums[i])
        {
               count++;
        }
        else
        count--;
        }
        count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==element)
            {
                count++;
            }
        }
        if(count>n/2)
            cout<<element<<endl;
    return element;
    }
};
