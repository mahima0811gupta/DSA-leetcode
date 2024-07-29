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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
    ListNode*curr=head;
    int L=0;
    while(curr!=nullptr){
    L++;
    curr=curr->next;
    }
    vector<ListNode*> result(k, NULL);
        curr           = head;
        ListNode* prev = nullptr;
        int eachbucketnode=L/k;
        int extranode=L%k;
        
    for(int i=0;i<k;i++){
      result[i]=curr;
    for(int count=1;count<=eachbucketnode+(extranode>0?1:0);count++){
      prev=curr;
      curr=curr->next;

    }
    if(prev!=nullptr)
    prev->next=nullptr;
    //int eachbucketnode=L/k;
     extranode--;

    }
    return result;


        
    }
};