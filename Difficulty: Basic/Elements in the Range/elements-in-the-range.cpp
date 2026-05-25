class Solution {
  public:
    bool isAva(int num, vector<int> &arr){
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==num){
                return true;
            }
        }
        return false;
    }
    bool checkElements(int start, int end, vector<int> &arr) {
        int n=arr.size();
        // sort(arr.begin(), arr.end());
        
        for(int i=start;i<=end;i++){
            if(!isAva(i, arr)){
                return false;
            }
        }
        return true;
    }
};