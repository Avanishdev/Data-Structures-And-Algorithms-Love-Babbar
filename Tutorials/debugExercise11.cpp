#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};
struct Node
{
    int data;
    Node *next;
};

// ListNode *head;

// void insert(int x)
// {
//     ListNode *temp = new ListNode;
//     temp->data = x;
//     temp->next = NULL;
//     if (head == NULL)
//     {
//         head = temp;
//     }
//     else
//     {
//         ListNode *curr = head;
//         while (curr->next != NULL)
//         {
//             curr = curr->next;
//         }
//         curr->next = temp;
//     }
// }

// void print()
// {
//     ListNode *temp = head;
//     cout << "List: ";
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// // void print(ListNode* head){
// // ListNode* temp=head;
// // while(temp!=NULL){
// //     cout<<temp->data<<endl;
// //     temp=temp->next;
// // }
// // }
// ListNode* middleNode(ListNode* &head);
// int main()
// {
//     head = NULL;

//     insert(1);
//     insert(2);
//     insert(3);
//     // head=middleNode(head);
//     print();

//     return 0;
// }

// ListNode *middleNode(ListNode *&head)
// {
//     ListNode *last = head;
//     ListNode *first = head;

//     while (first != NULL && last != NULL)
//     {
//         last = last->next;
//         first = first->next;
//         if (first != NULL)
//         {
//             last = last->next;
//             first = first->next;
//         }
//     }

//     return last;
// }

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head == NULL)
//             return false;
//         ListNode *fast = head;
//         ListNode *slow = head;
//         while(fast != NULL && fast ->next != NULL)
//         {
//             fast = fast->next->next;
//             slow = slow->next;

//             if(fast == slow)
//                 return true;
//         }

//         return false;
//     }
// };

// void rotate(Node *head, int k)
// {
//     if (k == 0)
//         return;
//     Node *current = head;

//     int count = 1;
//     while (count < k && current != NULL)
//     {
//         current = current->next;
//         count++;
//     }

//     if (current == NULL)
//     {
//         return;
//     }
//     Node *kthNode = current;
//     while (current->next != NULL)
//         current = current->next;

//     current->next = head;
//     head = kthNode->next;
//     kthNode->next = NULL;
// }


ListNode* deleteMiddle(ListNode* head) {
        if (head -> next == NULL && head == NULL)
            return NULL;
        
        ListNode *slow = head, *fast = head ->next->next;
        
        while (fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        slow -> next = slow->next->next;
        return head;
    }