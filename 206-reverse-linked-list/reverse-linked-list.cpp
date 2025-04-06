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
    ListNode* reverseList(ListNode* head) {
        //using recursion
        // breaking big smaller into smaller then more smaller

        if(head==nullptr || head->next==nullptr) return head;
         ListNode* newNode=reverseList(head->next);
           ListNode*front=head->next;
            front->next=head;
            head->next=nullptr;
                return newNode;        

    }
};