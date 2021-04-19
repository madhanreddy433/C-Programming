/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *slow = head, *fast = head;
    
    int i;
    
    for(i=0;i<n;i++){
        fast = fast->next;
    }
    
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    
    struct node *tmp = slow->next;
    
    slow->next = slow->next->next;
    
    free(tmp);
    
    return head;
}
