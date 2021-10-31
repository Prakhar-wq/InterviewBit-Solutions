ListNode* Solution::deleteDuplicates(ListNode *head) {
    if (head == NULL) return NULL;
    ListNode* fakeHead = new ListNode(0);
    fakeHead->next = head;
    ListNode* pre = fakeHead;
    ListNode* cur = head;
    while (cur != NULL) {
        while (cur->next != NULL && cur->val == cur->next->val) {
            cur = cur->next;
        }
        if (fakeHead->next == cur) {
            fakeHead=fakeHead->next;
        } else {
            fakeHead->next = cur->next;
        }
        cur = cur->next;
    }
    return pre->next;
}
