//User function Template for C++

class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        int minute=0;
        unordered_map<int,Node*> m;
        queue<Node*> q;
        q.push(root);
        m[root->data]=NULL;
        Node*start=NULL;
        if(root->data==target){
            start=root;
        }
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                if(q.front()->data==target){
                    start=q.front();
                }
                if(q.front()->left){
                    m[q.front()->left->data]=q.front();
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    m[q.front()->right->data]=q.front();
                    q.push(q.front()->right);
                }
                q.pop();
            }
        }
        
        map<int,int> visited;
        q.push(start);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                if(q.front()->left && visited.find(q.front()->left->data)==visited.end()){
                    q.push(q.front()->left);
                }
                if(q.front()->right && visited.find(q.front()->right->data)==visited.end()){
                    q.push(q.front()->right);
                }
                if(m[q.front()->data]!=NULL && visited.find(q.front()->data)==visited.end()){
                    q.push(m[q.front()->data]);
                }
                visited[q.front()->data]=1;
                q.pop();
            }
            minute++;
        }
        return minute-2;
    }
};