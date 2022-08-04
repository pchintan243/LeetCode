// Definition for singly-linked list.
#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *createNode(int val)
{
    struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->val = val;
    temp->next = NULL;
    return temp;
};

int checkMax(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *newList = NULL;
    struct ListNode *tempNewList;
    struct ListNode *temp;
    int i = 0;

    if (list1 == NULL && list2 == NULL)
    {
        return NULL;
    }
    else if (list1 == NULL && list2 != NULL)
    {
        return newList = list2;
    }
    else if (list2 == NULL && list1 != NULL)
    {
        return newList = list1;
    }

    while (list1 != NULL && list2 != NULL)
    {
        i = checkMax(list1->val, list2->val);

        if (i == list1->val)
        {
            if (newList == NULL)
            {
                temp = createNode(list1->val);
                newList = temp;
                tempNewList = newList;
            }
            else
            {
                temp = createNode(list1->val);
                tempNewList->next = temp;
                tempNewList = tempNewList->next;
            }
            list1 = list1->next;
        }
        else
        {

            if (newList == NULL)
            {
                temp = createNode(list2->val);
                newList = temp;
                tempNewList = newList;
            }
            else
            {
                temp = createNode(list2->val);
                tempNewList->next = temp;
                tempNewList = tempNewList->next;
            }
            list2 = list2->next;
        }
    }

    if (list1 == NULL)
    {
        tempNewList->next = list2;
    }
    else if (list2 == NULL)
    {
        tempNewList->next = list1;
    }

    return newList;
}

void traversal(struct ListNode *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->val);
        ptr = ptr->next;
    }
}
int main()
{
    struct ListNode *head1;
    struct ListNode *second1;
    struct ListNode *third1;
    struct ListNode *fourth1;

    head1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    second1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    third1 = (struct ListNode *)malloc(sizeof(struct ListNode));
    fourth1 = (struct ListNode *)malloc(sizeof(struct ListNode));

    head1->val = 1;
    head1->next = second1;

    second1->val = 3;
    second1->next = third1;

    third1->val = 5;
    third1->next = fourth1;

    fourth1->val = 7;
    fourth1->next = NULL;


    struct ListNode *head2;
    struct ListNode *second2;
    struct ListNode *third2;
    struct ListNode *fourth2;

    head2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    second2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    third2 = (struct ListNode *)malloc(sizeof(struct ListNode));
    fourth2 = (struct ListNode *)malloc(sizeof(struct ListNode));

    head2->val = 2;
    head2->next = second2;

    second2->val = 4;
    second2->next = third2;

    third2->val = 6;
    third2->next = fourth2;

    fourth2->val = 8;
    fourth2->next = NULL;

    struct ListNode *list;
    list = (struct ListNode *)malloc(sizeof(struct ListNode));
    list = mergeTwoLists(head1, head2);
    traversal(list);
    
    return 0;
}