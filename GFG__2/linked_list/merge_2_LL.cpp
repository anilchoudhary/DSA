Node* sortedMerge(Node* head_A, Node* head_B)
{
    Node* ans = NULL;
    Node* head = NULL;
    while (head_A && head_B)
    {
        int x = head_A -> data;
        int y = head_B -> data;
        if (x < y)
        {
            if (head == NULL)
            {
                head = head_A;
                ans = head;
            }
            else
            {
                head->next = head_A;
            }
            head_A = head_A-> next;
        }
        else
        {
            if (head == NULL)
            {
                head = head_B;
                ans = head;
            }
            else
            {
                head->next = head_B;
            }
            head_B = head_B->next;
        }
        while (head_A)
        {
            if (head == NULL)
            {
                head = head_A;
                ans = head;
            }
            else
            {
                head->next = head_A;
            }
            head_A = head_A -> next;
        }
        while (head_B)
        {
            if (head == NULL)
            {
                head = head_B;
                ans = head;
            }
            else
            {
                head->next = head_B;
            }
            head_B = head_B -> next;
        }
    }
    return ans;
}