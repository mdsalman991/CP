int ind = 0;
unordered_map<int,int>m;
class Solution{
    public:
    Node* solve(int in[], int pre[], int l , int h){
        if(l > h) return NULL;
        Node * r = new Node(pre[ind++]);
        if(l==h) return r;
        int mid = m[r->data];
        r->left = solve(in,pre,l,mid-1);
        r->right = solve(in,pre,mid+1,h);
        return r;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        ind =0;
        m.clear();
        for(int i=0;i<n;i++){
            m[in[i]] = i;
        }
        Node * res = solve(in,pre,0,n-1);
        return res;
    }
};
// tree from inorder and preorder

// concept is traverse preorder array create new node in same order as you traverse. check the position of // preorder data in inorder array