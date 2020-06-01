class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        { 
            return head;
        }
        if(head->next->next==NULL)
        {
            return head;
        }
        int i=0;
        ListNode *temp1=head;
        ListNode *temp2=head->next;
        ListNode *temp=temp2->next;
        ListNode *x=head->next;
        while(temp)
        {
            if(i%2==0)
            {
                temp1->next=temp;
                temp1=temp1->next;
            }
            else
            {
                temp2->next=temp;
                temp2=temp2->next;
            }
            i++;
            temp=temp->next;
        }
        temp2->next=NULL;
        temp1->next=x;
        return head;
    }
};
