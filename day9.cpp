#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

ListNode *moveToFront(ListNode *head)
{

    if (head->next == NULL)
        return head;
    ListNode *t = head;
    ListNode *p = t->next;
    ;
    while (p->next != NULL)
    {
        t = t->next;
        p = p->next;
    }

    t->next = NULL;
    p->next = head;
    head = p;
    return head;
}