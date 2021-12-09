class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int ec1=1,ec2=0,element1=nums[0],element2=0;
        int n=nums.size();
        for (int i=1;i<n;i++)
        {
        if(nums[i]==element1)
            ec1++;
        else if(nums[i]==element2)
            ec2++;
        else if(ec1==0)
        {
            element1=nums[i];
            ec1++;
        }
        else if(ec2==0)
        {
        element2=nums[i];
         ec2++;
        }
        else
            {
            ec1--;
            ec2--;
            }
    }

        int count1=0,count2=0;
         for (int i=0;i<n;i++)
         {
             if(element1==nums[i])
             {
                 count1++;
             }
             if(element2==nums[i])
             {
                 count2++;
             }
         }
        if(count1>n/3){
            res.push_back(element1);}
        if(count2>n/3 && element1!=element2){
            res.push_back(element2);
        }
            return res;
    } 
};
