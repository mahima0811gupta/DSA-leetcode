/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode*reversemiddle(ListNode* head){
     if(head==nullptr || head->next==nullptr) return head;

     ListNode* newhead=reversemiddle(head->next);
            ListNode*front=head->next;
            front->next=head;
            head->next=nullptr;
            return newhead;
    }
  
    bool isPalindrome(ListNode* head) {
           if(head==nullptr || head->next==nullptr) return true;
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
         ListNode*newNode=reversemiddle(slow->next);
         ListNode*first=head;
         ListNode*sec=newNode;

         while(sec!=nullptr){
            if(first->val!=sec->val){
                reversemiddle(newNode);
                return false;
            }
            first=first->next;
            sec=sec->next;
         }

          reversemiddle(newNode);
                return true;
    }
};