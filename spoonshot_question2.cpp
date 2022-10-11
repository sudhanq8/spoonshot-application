vector<int> productExceptSelf(vector<int>& nums) {
        int prefix[nums.size()];
        int rest[nums.size()];
        int n=nums.size();
        prefix[0]=1;
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        rest[nums.size()-1]=1;
        for(int j=n-2;j>=0;j--){
            rest[j]=rest[j+1]*nums[j+1];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(prefix[i]*rest[i]);
        }
        return ans;
    }