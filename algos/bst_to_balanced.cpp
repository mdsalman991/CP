void inorder_vec(Node* root, vector<int>&ans){
    // inorder trav
    // left root right
    if(!root) return;
    inorder_vec(root->left,ans);
    ans.push_back(root->data);
    inorder_vec(root->right,ans);
}

Node * solve(vector<int> &ans,int start, int end){
    if(start > end) return NULL;
    int mid = (start + end)/2;
    Node * root = new Node(ans[mid]);
    root->left = solve(ans,start,mid-1);
    root->right = solve(ans,mid+1,end);
    return root;
}
Node* buildBalancedTree(Node* root)
{
	// Code here
	// get the inorder traversal of the tree 
	vector<int> ans;
	inorder_vec(root,ans);
	return solve(ans,0,ans.size()-1);
	
	
}
// bst to balanced bst
