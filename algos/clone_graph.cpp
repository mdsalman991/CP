
class Solution {
public:
    void dfs(Node* copy,Node* node, vector<Node*>&vis){
     vis[copy->val] = copy;
     for(auto x : node->neighbors){
         if(vis[x->val]==NULL){
             Node * newNode = new Node(x->val);
             (copy->neighbors).push_back(newNode);
             dfs(newNode,x,vis);
         }
         else{
             (copy->neighbors).push_back(vis[x->val]);
         }
     }  
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL) return NULL;
        vector<Node*>vis(103,NULL);
        Node * copy = new Node(node->val);
        dfs(copy,node,vis);
        return copy;
        
    }
};

// clone graph