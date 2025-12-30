bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return true;

    struct ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

   
    struct ListNode *prev = NULL, *curr = slow, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    struct ListNode *left = head;
    struct ListNode *right = prev;

    while (right != NULL) {
        if (left->val != right->val)
            return false;
        left = left->next;
        right = right->next;
    }

    return true;
}
