int Solution::lPalin(ListNode* A)
{
    struct ListNode* next= NULL;
    struct ListNode* slow= A;
    struct ListNode* fast= A;
    struct ListNode* prev= NULL;
    while(fast&&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    fast=NULL;
    while(slow)
    {
        next=slow->next;
        slow->next=prev;
        prev=slow;
        slow=next;
    }
    slow=prev;
    while(slow)
    {
        if(slow->val!=A->val)
        {
            return 0;
        }
        slow=slow->next;
        A=A->next;
    }
    return 1;
}
