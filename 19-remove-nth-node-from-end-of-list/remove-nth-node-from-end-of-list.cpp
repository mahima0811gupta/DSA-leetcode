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
        if (head == nullptr)  
            return nullptr;

        // Case: Only one node and we have to delete it
        if (head->next == nullptr && n == 1) {
            delete head;
            return nullptr;
        }

        // Special case: delete last node
        if (head->next != nullptr && n == 1) {
            ListNode* temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            ListNode* end = temp->next;
            temp->next = nullptr;
            delete end;
            return head;
        }

        // Count total number of nodes
        ListNode* temp = head;
        int cnt = 0;
        while (temp != nullptr) {
            temp = temp->next;
            cnt++;
        }

        // Case: delete the head node
        if (n == cnt) {
            ListNode* nextNode = head->next;
            delete head;
            return nextNode;
        }

        // Find the (cnt - n)th node (node before the one to delete)
        temp = head;
        ListNode* prev = nullptr;
        for (int i = 0; i <cnt - n; i++) {  
            prev = temp;
            temp = temp->next;
        }

        // Delete the nth node from end
        prev->next = temp->next;
        delete temp;

        return head;
    }
};
