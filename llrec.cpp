#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) {
    /*
    Node *smallerTail = nullptr;
    Node *largerTail = nullptr;
    Node *current = head;
    while (current != nullptr) {
        Node *next = current->next;
        if (current->data < pivot) {
            if (smaller == nullptr) {
                smaller = current;
                smallerTail = current;
            } else {
                smallerTail->next = current;
                smallerTail = current;
            }
        } else {
            if (larger == nullptr) {
                larger = current;
                largerTail = current;
            } else {
                largerTail->next = current;
                largerTail = current;
            }
        }
        current = next;
    }
    if (smallerTail != nullptr) {
        smallerTail->next = nullptr;
    }
    if (largerTail != nullptr) {
        largerTail->next = nullptr;
    }
    */

    if (!head) {
        return;
    }

    Node* curr = head;
    head = head->next;

    llpivot(head, smaller, larger, pivot);

    if (curr->val <= pivot) {
        curr->next = smaller;
        smaller = curr;
    }
    else {
        curr->next = larger;
        larger = curr;
    }
}
