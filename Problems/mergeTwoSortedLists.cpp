// 21. Merge Two Sorted Lists

#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int val) {
        this->val = val;
        next = nullptr;
    }
};

// Helper function to create a new ListNode
ListNode *createNode(int val)
{
    ListNode *newNode = new ListNode(val);
    newNode->next = nullptr;
    return newNode;
}

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *newNode = new ListNode(0);
    ListNode *current = newNode;

    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->val < list2->val)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    if (list1 != nullptr)
    {
        current->next = list1;
    }
    else
    {
        current->next = list2;
    }

    ListNode *result = newNode->next;
    delete newNode; // Free the dummy node
    return result;
}

// Helper function to print the linked list
void printList(ListNode *node)
{
    while (node != nullptr)
    {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    // Creating first sorted linked list: 1 -> 2 -> 4
    ListNode *list1 = createNode(1);
    list1->next = createNode(2);
    list1->next->next = createNode(4);

    // Creating second sorted linked list: 1 -> 3 -> 4
    ListNode *list2 = createNode(1);
    list2->next = createNode(3);
    list2->next->next = createNode(4);

    // Merging the two sorted linked lists
    ListNode *mergedList = mergeTwoLists(list1, list2);

    // Printing the merged linked list
    printList(mergedList);

    return 0;
}