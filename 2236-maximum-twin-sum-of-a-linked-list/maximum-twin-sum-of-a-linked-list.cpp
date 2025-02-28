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
   int pairSum(ListNode* head) {
    
    int sum=0;
    vector<int>v;
    while(head!=nullptr){
        v.push_back(head->val);
        head=head->next;
    }

    int n=v.size();

    int s=0;
    int e=n-1;
    while(s<=e){
          
          sum=max(sum,(v[s++]+v[e--]));

    }



        return sum;
    }
};