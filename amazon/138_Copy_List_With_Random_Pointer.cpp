/* 138. Copy List with Random Pointer
* A linked list is given such that each node contains an additional random pointer 
* which could point to any node in the list or null.
*
* Return a deep copy of the list.
*/


/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
  RandomListNode *copyRandomList(RandomListNode *head) {
    if (head == NULL) return NULL;
    RandomListNode *newHead, *l1, *l2;
    // Create new list
    for (l1 = head; l1 != NULL; l1 = l1->next->next) {
      l2 = new RandomListNode(l1->label);
      l2->next = l1->next;
      l1->next = l2;
    }
    // Set new head
    newHead = head->next;

    // Set new random
    for (l1 = head; l1 != NULL; l1 = l1->next->next) {
      if (l1->random != NULL) l1->next->random = l1->random->next;
    }

    // Separate two lists
    for (l1 = head; l1 != NULL; l1 = l1->next) {
      l2 = l1->next;
      l1->next = l2->next;
      if (l2->next != NULL) l2->next = l2->next->next;
    }

    return newHead;
  }
};