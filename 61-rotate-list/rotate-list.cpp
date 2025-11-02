class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL )  return head;
         int cnt=0;
          ListNode*temp=head;
          while(temp!=NULL){
            temp=temp->next;
            cnt++;
          }
            k=k%cnt;
            if(k==0)  return head;
        int l=cnt-k-1;
        temp=head;
         while(l){
            temp=temp->next;
            l--;
         }   
         ListNode*newhead=temp->next;
         temp->next=NULL;
         temp=newhead;
    

          while(temp->next!=NULL){
           temp=temp->next;
          }
         
         temp->next=head;

         return newhead;
        
    }
};