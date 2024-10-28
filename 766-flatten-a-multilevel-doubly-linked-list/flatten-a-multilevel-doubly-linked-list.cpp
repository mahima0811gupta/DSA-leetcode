/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
       if (!head) return NULL;  

        Node* current = head;
        Node* tail = head;  

        while (current) {
            if (current->child) {
              
                Node* child = current->child;

               
                if (current->next) {
                   
                    while (child->next) {
                        child = child->next;
                    }

                    
                    child->next = current->next;
                    if (current->next) {
                        current->next->prev = child;  
                    }
                }

             
                current->next = current->child;
                current->child->prev = current; 
                current->child = NULL;  
            }
            tail = current; 
            current = current->next;  
        }

        return head;  
    }
};