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
    int numComponents(ListNode* head, vector<int>& nums) 
    {
        set<int>st;
        for(auto num:nums) st.insert(num);

        int ans = 0, val;
        while(head)
        {
            val = head->val;
            while(head and st.count(head->val))
            {
                val = head->val;
                head = head->next;
            }
            if(st.count(val)) ans++;
            if(head) head = head->next;
        }
        return ans;
    }
};