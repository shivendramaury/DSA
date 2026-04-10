class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return -1;
        int fin = INT_MAX;
        int ans=-1;
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if((nums[i] == nums[j]) && (nums[j] == nums[k])){
                        ans = abs(i-j) + abs(j-k) + abs(k-i);
                        fin = min(ans, fin);
                    }
                }       
            }     
        } 
        if(fin == INT_MAX) return -1;
        return fin;
    }
};