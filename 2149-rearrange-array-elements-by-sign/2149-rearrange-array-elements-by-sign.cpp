class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> pos;
        vector<int> neg;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        int n1 = pos.size();
        int n2 = neg.size();

        int s1=0, s2=0;

        while(s1<n1 && s2<n2){
            ans.push_back(pos[s1]);
            s1++;
            ans.push_back(neg[s2]);
            s2++;
        }
        return ans;
    }
};