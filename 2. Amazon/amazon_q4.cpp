
class Solution{
public:
    int dp[101][101];
    int bracket[501][501];
    
    void print(string &ans,int i,int j)
    {
        if(i>j)
        return;
        if(i==j-1 || i==j)
        {
            ans+='A'+j-1;
            return;
        }
        ans+='(';
        print(ans,i,bracket[i][j]);
        print(ans,bracket[i][j],j);
        ans+=')';
    }
    int solve(int arr[],int i,int j)
    {
       if(i==j)
       return 0;
       if(dp[i][j]!=-1)
       return dp[i][j];
       
       int mini = INT_MAX;
       int temp=0;
       for(int k=i;k<j;k++)
       {
           int x = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
           if(x<mini)
           {
               mini=x;
               temp=k;
           }
       }
       bracket[i-1][j]=temp;
       return dp[i][j] = mini;
    }
    string matrixChainOrder(int p[], int n){
        string ans="";
        memset(dp,-1,sizeof(dp));
        solve(p,1,n-1);
        print(ans,0,n-1);
        return ans;
        
    }
};