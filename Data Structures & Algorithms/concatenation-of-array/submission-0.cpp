class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();

        vector<int>num(2*n);
       

        for(int i=0;i<n;i++){
            num[i]=nums[i];
            num[i+n]=nums[i];
        }

        return num;

    }
};