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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode*temp=head;
        while(temp!=nullptr){
        temp=temp->next;
        cnt++;
        }
        if(cnt==n){
            ListNode*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int r=cnt-n-1;
        temp=head;
        while(r--){
            temp=temp->next;
            
        }
         
         ListNode*prev=temp->next;
        temp->next=temp->next->next;
        delete prev;

        return head;
    }
};