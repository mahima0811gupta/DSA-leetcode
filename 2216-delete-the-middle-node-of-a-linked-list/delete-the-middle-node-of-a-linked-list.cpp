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
    ListNode* deleteMiddle(ListNode* head) {
        
         if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode*temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        if(cnt==1) {
        delete(head);
        return nullptr;
        }

        temp=head;
        int x=ceil(cnt/2);
        while(temp!=nullptr){
            x=x-1;
           
            if(x==0) break;
             temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;


    }
};