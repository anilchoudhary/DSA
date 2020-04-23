#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

class ll
{
private:
    node *head, *tail;
public:
    ll()
    {
        head = NULL;
        tail = NULL;
    }
    node* create_node(int);
    void insert_begin();
    void insert_pos();
    void insert_last();
    void delete_pos();
    void sort();
    void search();
    void update();
    void reverse();
    void display();
};

node* ll :: create_node(int value)
{
    node* temp = new node;
    temp->data = value;
    temp->next = NULL;
        return temp;
}

void ll :: insert_begin()
{
    int value;
    cout<<"Enter the value: "<<endl;
    cin>>value;
    node *temp, *p;
    temp = create_node(value);
    temp->next = head;
    head = temp;
    if(tail==NULL)
        tail = temp;
}

void ll :: insert_last()
{
    int value;
    cout<<"Enter the value: "<<endl;
    cin>>value;
    node *temp, *itr= head;
    temp = create_node(value);
    while(itr!=NULL && itr->next!=NULL)
    {
        itr = itr->next;
    }
    itr->next = temp;
    tail = temp;
}

void ll :: delete_pos()
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
        return ;
    }
    int pos, total = 0;
    cout<<"Enter the position of value to be deleted: "<<endl;
    cin>>pos;
    node *s, *ptr;
    s = head;
    if(pos==1)
    {
        head = s -> next;
    }
    else
    {
        while(s!=NULL)
        {
            s=s->next;
            total++;
        }
        if(pos>1 and pos <= total)
        {
            s= head;
            for(int i=1;i < pos; i++)
            {
                ptr = s;
                s = s-> next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout<<"Enter valid position"<<endl;
        }
        free(s);
        cout<<"Element Deleted"<<endl;
    }
}

void ll :: insert_pos()
{
    int value, pos, counter = 0;
    cout<<"Enter the value to be inserted: "<<endl;
    cin>>value;
    struct node *temp, *s, *ptr;
    temp = create_node(value);
    cout<<"Enter the position at which node to be inserted: "<<endl;
    cin>>pos;
    int i;
    s = head;
    while (s != NULL)
    {
        s = s->next;
        counter++;
    }
    if (pos == 1)
    {
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }
    else if (pos > 1  && pos <= counter)
    {
        s = head;
        for (i = 1; i < pos; i++)
        {
            ptr = s;
            s = s->next;
        }
        ptr->next = temp;
        temp->next = s;
    }
    else
    {
        cout<<"Position out of range"<<endl;
    }
}

void ll :: sort()
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
        return ;
    }
    else
    {
        node *p = head;
        node *s;
        int value;
        while(p!=NULL)
        {
            for(s = p->next; s!=NULL; s= s->next)
            {
                if(p->data > s->data)
                {
                    value = p->data;
                    p->data = s->data;
                    s->data = value;
                }
            }
            p = p->next;
        }
    }
}

void ll :: search()
{
    int value,pos=0;
    bool flag=false;
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the value to be searched: "<<endl;
    cin>>value;
    node *s;
    s= head;
    while(s != NULL)
    {
        pos++;
        if(s->data == value)
        {
            flag = true;
            cout<<"Element "<<value<<" is found at position "<<pos<<endl;
        }
        s = s->next;
    }
    if(!flag)
        cout<<"Element "<<value<<" not found in the list"<<endl;
}

void ll :: update()
{
    int value,pos;
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the node position to be updated: "<<endl;
    cin>>pos;
    cout<<"Enter the new value: "<<endl;
    cin>>value;
    node *s, *p;
    s = head;
    if(pos == 1)
    {
        head -> data = value;
    }
    else
    {
        for(int i=1;i<pos;i++)
        {
            if(s == NULL)
            {
                cout<<"There are less than "<<pos<<" elements";
                return;
            }
            s = s->next;
        }
        s -> data = value;
    }
    cout<<"Node Updated"<<endl;
}

void ll :: reverse()
{
        node *ptr1, *ptr2, *ptr3;
    if (head == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    if (head->next == NULL)
    {
        return;
    }
    ptr1 = head;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = NULL;
    ptr2->next = ptr1;
    while (ptr3 != NULL)
    {
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;
    }
    head = ptr2;
}


void ll :: display()
{
    node* itr = head;
    if(head == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    cout<<"Elements of list are: "<<endl;
    while(itr!= NULL)
    {
        cout<<itr->data<<" -> ";
        itr = itr -> next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    ll sl;
    int choice;

    while (1)
    {
        cout<<endl<<"---------------------------------"<<endl;
        cout<<endl<<"Operations on singly linked list"<<endl;
        cout<<endl<<"---------------------------------"<<endl;
        cout<<"1.Insert Node at beginning"<<endl;
        cout<<"2.Insert node at last"<<endl;
        cout<<"3.Insert node at position"<<endl;
        cout<<"4.Sort Link List"<<endl;
        cout<<"5.Delete a Particular Node"<<endl;
        cout<<"6.Update Node Value"<<endl;
        cout<<"7.Search Element"<<endl;
        cout<<"8.Display Linked List"<<endl;
        cout<<"9.Reverse Linked List "<<endl;
        cout<<"10.Exit "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Inserting Node at Beginning: "<<endl;
            sl.insert_begin();
            cout<<endl;
            break;
        case 2:
            cout<<"Inserting Node at Last: "<<endl;
            sl.insert_last();
            cout<<endl;
            break;
        case 3:
            cout<<"Inserting Node at a given position:"<<endl;
            sl.insert_pos();
            cout<<endl;
            break;
        case 4:
            cout<<"Sort Link List: "<<endl;
            sl.sort();
            cout<<endl;
            break;
        case 5:
            cout<<"Delete a particular node: "<<endl;
            sl.delete_pos();
            break;
        case 6:
            cout<<"Update Node Value:"<<endl;
            sl.update();
            cout<<endl;
            break;
        case 7:
            cout<<"Search element in Link List: "<<endl;
            sl.search();
            cout<<endl;
            break;
        case 8:
            cout<<"Display elements of link list"<<endl;
            sl.display();
            cout<<endl;
            break;
        case 9:
            cout<<"Reverse elements of Link List"<<endl;
            sl.reverse();
            cout<<endl;
            break;
        case 10:
            cout<<"Exiting..."<<endl;
            exit(1);
            break;
        default:
            cout<<"Wrong choice"<<endl;
        }
}
}
