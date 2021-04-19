/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *current = head, *prev = NULL, *next;
    
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

bool isPalindrome(struct ListNode* head){
    struct ListNode *fast = head, *slow = head;
    //go to the middle of the Linked List
    while((fast != NULL) && (fast->next != NULL)){
        slow = slow->next;
        fast = fast->next->next;
    }
    //reverse the second half of Linked List
    struct ListNode *rev = reverseList(slow);
    slow = head;
    //compare first half and second half elements one by one
    while(rev->next != NULL){
        if(slow->val != rev->val){
            return false;
        }
        slow = slow->next;
        rev = rev->next;
    }
    return true;
}
