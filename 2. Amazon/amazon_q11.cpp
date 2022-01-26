class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> ans;
        inorder2(root,ans);
        return ans;
    }
    void inorder2(Node*root,vector<int>&ans){
        if(root==NULL){
            ans.push_back(int(NULL));
            return;
        }
        ans.push_back(root->data);
        inorder2(root->left,ans);
        inorder2(root->right,ans);
    }
    
    //Function to deserialize a list and construct the tree.
    int idx=0;
    Node * deSerialize(vector<int> &a)
    {
         if((a.size()-1)<idx||a[idx]==NULL)
       {
           idx++;
           return NULL;
       }
       Node*root=new Node(a[idx++]);
       root->left=deSerialize(a);
       root->right=deSerialize(a);
       return root;
    }

};