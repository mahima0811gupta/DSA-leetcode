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
    vector<Node*>NodeRegister;
    void dfs(Node*actual,Node*clone){
        for(auto neighbor:actual->neighbors){
             if(NodeRegister[neighbor->val]==nullptr){
                Node*newnode=new Node(neighbor->val);
                NodeRegister[newnode->val]=newnode;
                clone->neighbors.push_back(newnode);
                dfs(neighbor,newnode);
             }
             else
             {
               clone->neighbors.push_back(NodeRegister[neighbor->val]); 
             }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==nullptr)   return nullptr;
             Node*clone=new Node(node->val);
             //resize is must
             NodeRegister.resize(110,nullptr);
             NodeRegister[clone->val]=clone;
             dfs(node,clone);
             return clone;
       
    }
};