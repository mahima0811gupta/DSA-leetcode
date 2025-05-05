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

    vector<Node*>NodeRegister ; //it is contain the the clone graph'node address.
    void dfs(Node*actual,Node*clone){
        //// av actual node ke jitne neighbour h use travel krna h
        for(auto neighbor:actual->neighbors){
            //if wo neighbour , noderegister me null h to use create krne dalo
              if(NodeRegister[neighbor->val]==nullptr) {
                   //create newnode and store its add in noderegister
                   Node*newnode=new Node(neighbor->val);
                   NodeRegister[newnode->val]=newnode;
                   //now newnode ko clone ke neighbour me add kro
                   clone->neighbors.push_back(newnode);
                  dfs(neighbor,newnode);
              }
              else {
                // man lo ki noderegister me pehle se ode address store h to direct connect clone neighbor to that node
                 clone->neighbors.push_back(NodeRegister[neighbor->val]);
              }
        }
    }


    Node* cloneGraph(Node* node) {
        //if referne node is null
        if(node==nullptr)  return nullptr;
        Node*clone=new Node(node->val);
       NodeRegister.resize(110,nullptr);  // starting me sbka null rakh
       //now add address of clone node in noderegister
       NodeRegister[clone->val]=clone;
       dfs(node,clone);   /// actualnode    // clone
       return clone;

    }
};