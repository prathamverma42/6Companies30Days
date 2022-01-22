// O(N^3)

class Solution {
  public:
    int maxProfit(int k, int N, int A[]) {
        // code here
        int dp[k+1][N];
        memset(dp,0,sizeof dp);
        for(int i=1;i<=k;i++){
            for(int j=1;j<N;j++){
                dp[i][j]=dp[i][j-1];
                for(int x=0;x<j;x++){
                    
                    dp[i][j]=max(dp[i][j],dp[i-1][x]-A[x]+A[j]);
                }
            }
        }
        return dp[k][N-1];
    }
};

// O(N^2)
class Solution {
  public:
    int maxProfit(int k, int N, int A[]) {
        // code here
        int dp[k+1][N];
        memset(dp,0,sizeof dp);
        int maxdiff=INT_MIN;
        for(int i=1;i<=k;i++){
            maxdiff=INT_MIN;
            for(int j=1;j<N;j++){
                dp[i][j]=dp[i][j-1];
                maxdiff=max(maxdiff,dp[i-1][j-1]-A[j-1]);
                dp[i][j]=max(dp[i][j],maxdiff+A[j]);
            }
        }
        return dp[k][N-1];
    }
};