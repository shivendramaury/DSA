class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans(n1, -1);
        int num;
        int idx = -1;
        

        for(int i=0; i<n1; i++){
            num = nums1[i];
            auto it = find(nums2.begin(), nums2.end(), num);

            if(it != nums2.end()){
                idx = it-nums2.begin();
            }
            int maxi=-1;

            for(int j=idx;j<n2; j++){
                if(nums2[idx] < nums2[j]){
                    maxi = max(maxi, nums2[j]);
                    break;
                }
            }
            ans[i] = maxi;
            maxi=-1;
        }
        return ans;
    }
};