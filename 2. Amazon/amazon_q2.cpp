class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int count = 0;
        int ans = INT_MIN;
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                count++;
            }
            else if(arr[i]==arr[i-1]){
                count=0;
            }
            else{
                if(count > 0){
                    while(i<n && arr[i]<arr[i-1]){
                        i++;
                        count++;
                    }
                    ans=max(ans,count+1);
                    if( i<n && arr[i]==arr[i-1]){
                        count=0;
                    }else{
                        count=1;
                    }
                }
            }
        }
        return ans==INT_MIN?0:ans;
    }
};