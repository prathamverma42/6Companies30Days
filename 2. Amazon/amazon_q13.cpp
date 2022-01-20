class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int min=0;
        queue<pair<int,int>> q;
        int m = grid.size();
        int n = grid[0].size();
        int number1=0;
        int number2=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    number2++;
                }        
                if(grid[i][j]==1){
                    number1++;
                }
            }
        }
        
        //There is no fresh orange         
        if(number1==0){
            return 0;
        }
        
        //There is no rotten orange         
        if(number2==0){
            return -1;
        }
        while(!q.empty() && number1){
            int len=q.size();
            
            bool flag = false;
            for(int k=0;k<len;k++){
                int i=q.front().first;
                int j=q.front().second;
            
                //UP
                if(i-1>=0){
                    if(grid[i-1][j]==1){
                        flag = true;
                        number1--;
                        grid[i-1][j]=2;
                        q.push({i-1,j});
                    }                    
                }

                //DOWN
                if(i+1<m){
                    if(grid[i+1][j]==1){
                        flag = true;
                        number1--;
                        grid[i+1][j]=2;
                        q.push({i+1,j});
                    }                    
                }

                //LEFT
                if(j-1>=0){
                    if(grid[i][j-1]==1){
                        flag = true;
                        number1--;
                        grid[i][j-1]=2;
                        q.push({i,j-1});
                    }                    
                }

                //RIGHT
                if(j+1<n){
                    if(grid[i][j+1]==1){
                        flag = true;
                        number1--;
                        grid[i][j+1]=2;
                        q.push({i,j+1});
                    }                    
                }
                q.pop();
            }
            if(!flag && number1!=0){
                return -1;
            }else{
                min++;
            }
        }
        return min;
    }
};