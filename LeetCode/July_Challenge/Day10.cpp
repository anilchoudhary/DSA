class Solution {
public:
    Node* flatten(Node* head) {
        //if(head==NULL || head->next==NULL) return head;

        Node* curr = head;
        Node* tail = NULL;
        Node* temp = NULL;
        while (curr != NULL)
        {
            tail = curr->next;
            if (curr->child != NULL)
            {
                // tail = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                temp = curr->next;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = tail;
                if (tail != NULL)
                    tail->prev = temp;
            }
            curr->child = NULL;
            curr = tail;
        }
        return head;
    }
};