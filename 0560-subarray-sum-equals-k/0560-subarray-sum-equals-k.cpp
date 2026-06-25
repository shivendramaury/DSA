class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // int count=0;

        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum == k){
        //             count++;
        //         }
        //     }
        // }
        // return count;


        int n=nums.size();
        int count=0;
        int sum=0;
        vector<int> preSum;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            preSum.push_back(sum);
        }

        for(int j=0;j<n;j++){
            if(preSum[j]  == k){
                count++;
            }
            for(int i=0;i<j;i++){
                if(preSum[j] - preSum[i] == k){
                    count++;
                }
            }

        }


        return count;
    }
};