/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

    unordered_map<Node*,Node*>mp;
    void dfs(Node* node,Node*clone_node){
        for(Node*neigh:node->neighbors){
            ////if clone is not nor created yet
            if(mp.find(neigh)==mp.end()){
                //then create the new clone node
                Node*clone=new Node(neigh->val);
                //also store in map
                mp[neigh]=clone;
                //also connect the neigh in clone graph
                clone_node->neighbors.push_back(clone);
                dfs(neigh,clone);
            }
            else  //if the node is already connected
            {
            clone_node->neighbors.push_back(mp[neigh]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==nullptr)  return NULL;
          //clone the give new
          Node*clone_node=new Node(node->val);
            mp[node]=clone_node;

            dfs(node,clone_node);
    return clone_node;
    }
};