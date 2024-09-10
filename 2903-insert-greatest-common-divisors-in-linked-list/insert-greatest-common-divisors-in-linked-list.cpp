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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
    ListNode*temp=head;
    ListNode*fast=head->next;
    ListNode*slow=head;
    while(fast!=nullptr){
    int x=gcd(slow->val,fast->val);
    ListNode *newnode=new ListNode(x);
    slow->next=newnode;
    newnode->next=fast;
    slow=slow->next->next;
    fast=fast->next;



    }
    return head;

    }
};