class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        if(m==1) return 1;
        if(m==2) return 2;
        long long int dp[m+1];
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=m;i++)    dp[i]=1+dp[i-2];
        return dp[m];
    }
};