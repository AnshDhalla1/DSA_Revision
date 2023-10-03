
/*
**********   ITERATIVE   ***************
We need 3 pointers - 
  1. prev - which is initially NULL and as the name suggest it is prev of curr.
  2. curr - the node on which we are currently on.
  3. temp - it will be next of the current

TC = O(N)    SC = O(1)
*/

ListNode* reverseList(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = NULL;
    
    while(curr!= NULL){
        ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}


/*
**********   RECURSIVE   ***************
- We traverse to the end of the list recursively.
- As we reach the end of the list, we make the end node the head. Then receive previous nodes and make them connected to the last one.
- At last, we link the second node to the head and the first node to NULL. We return to our new head.
*/


ListNode* reverseList(ListNode* &head) {

        if (head == NULL||head->next==NULL)
            return head;

        ListNode* nnode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;
    }
