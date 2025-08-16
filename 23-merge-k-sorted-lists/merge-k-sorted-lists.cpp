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

    class mycamparator{
        public:
        bool operator()(ListNode*a,ListNode*b)
        {
               return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,mycamparator>pq;
      for(ListNode*list:lists){
        if(list)
        pq.push(list);         //pushing the head of the each list
      }

      ListNode*dummy=new ListNode(0);
      ListNode*tail=dummy;
      while(!pq.empty()){
         ListNode*curr=pq.top();
         pq.pop();
         tail->next=curr;
         tail=tail->next;
      
         if(curr->next){
            pq.push(curr->next);
         }
      }

      return dummy->next;
    }
};