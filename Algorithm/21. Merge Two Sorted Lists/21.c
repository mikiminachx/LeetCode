// struct ListNode 
// {
//     int val;
//     struct ListNode *next;
// };
// ListNode;

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) 
{
    struct ListNode *begin;
    struct ListNode *tmp;

    if (list1 == NULL || list2 == NULL)
    {
        return (list1) ? list1 : list2;
    }
    else if (list1->val <= list2->val)
    {
        begin = tmp = list1;
        list1 = list1->next;
    }
    else
    {
        begin = tmp = list2;
        list2 = list2->next;
    }
    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            tmp->next = list1;
            list1 = list1->next;
        }
        else
        {
            tmp->next = list2;
            list2 = list2->next;
        }
        tmp = tmp->next;
    }
    tmp->next = (list1 == NULL) ? list2 : list1;
    return(begin);
    
}