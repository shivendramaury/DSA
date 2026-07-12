class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();

        vector<int> arr1 = arr;

      
        sort(arr1.begin(), arr1.end());
        int count=1;

        unordered_map<int, int> arr2;
        for(int i=0; i<n; i++){
            if(i == 0 || arr1[i-1] != arr1[i]){
                arr2[arr1[i]] = count;
                count++;
            }
            
        }

        vector<int> ans;

        for(int i=0; i<n; i++) {
            ans.push_back(arr2[arr[i]]);
        }
        return ans;
    }
};