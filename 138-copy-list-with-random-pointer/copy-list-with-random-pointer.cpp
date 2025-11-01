/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)  return nullptr;
        unordered_map<Node*,Node*>mp;
        Node*oldtemp=head->next;
        Node*newhead=new Node(head->val);
        Node*newtemp=newhead;
        mp[head]=newhead;           //old-->new
        while(oldtemp!=NULL){
           Node*copynode=new Node(oldtemp->val);
           mp[oldtemp]=copynode;
           newtemp->next=copynode;
           oldtemp=oldtemp->next;
           newtemp=newtemp->next;
        }

        //random pointer assign
        oldtemp=head;
           newtemp=newhead;
           while(oldtemp!=nullptr){
            newtemp->random=mp[oldtemp->random];
            oldtemp=oldtemp->next;
           newtemp=newtemp->next;

           }
           return newhead;
    }
};