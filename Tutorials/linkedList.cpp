// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next; // pointer
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     ~Node(){
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;
//         }
//     }
// };
// // insertion in a linked list
// void insertAtHead(Node *&head, int data)
// {
//     // Step 1:- creating a new Node (data)
//     Node *newNode = new Node(data);
//     // Step 2:- pointing newNode to head
//     newNode->next = head;
//     // Step 3:- updating head
//     head = newNode;
// }
// void insertAtTail(Node *&tail, int data)
// {
//     Node *newNode = new Node(data);

//     tail->next = newNode;

//     tail = newNode;
// }
// void insertAtAnyPosition(Node *&head, Node *&tail, int position, int data)
// {
//     // inserting at start
//     if (position == 0)
//     {
//         std::cout << "Input invalid" << endl;
//         return;
//     }
//     if (position == 1)
//     {
//         insertAtHead(head, data);
//         return;
//     }
//     Node *temp = head;
//     // get to correct position
//     int count = 1;
//     while (count < position - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp->next == NULL)
//     {
//         insertAtTail(tail, data);
//         return;
//     }
//     Node *newNode = new Node(data);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
// void deletingNode(Node *&head,Node* &tail, int position)
// {
//     if (position == 1)
//     {
//         Node *temp = head;
//         head = head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     else
//     {
//         Node *curr = head;
//         Node *prev = NULL;
//         int count = 1;
//         while (count < position)
//         {
//             prev = curr;
//             curr = curr->next;
//             count++;
//         }
//         if(curr->next==NULL){
//             tail=prev;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }
// // traversing a linked list
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         std::cout << temp->data << " ";
//         temp = temp->next;
//     }
//     std::cout << endl;
// }
// int main()
// {
//     // creating a linked list node corresponding to the data given here
//     Node *newNode = new Node(10);
//     Node *head = newNode;
//     Node *tail = newNode;
//     insertAtHead(head, 5);
//     insertAtTail(tail, 15);
//     insertAtAnyPosition(head, tail, 3, 12);
//     deletingNode(head,tail, 4);
//     std::cout << "Head-->" << head->data << endl;
//     std::cout << "Tail-->" << tail->data << endl;
//     print(head);
//     return 0;
// }

// Doubly linked list
//  #include<iostream>
//  using namespace std;
//  class Node{
//      public:
//      int data;
//      Node* prev;
//      Node* next;
//      Node(int data){
//          this->data=data;
//          this->next=NULL;
//          this->prev=NULL;
//      }
//      ~Node(){
//          if(this->next!=NULL){
//             this->next=NULL;
//          //    this->prev=NULL;
//          //    delete prev;
//             delete next;
//          }
//      }
//  };
//  void insertAtHead(Node* &head,int data){
//      Node* newNode=new Node(data);

//     newNode->next=head;
//     head->prev=newNode;

//     head=newNode;
// }
// void insertAtTail(Node* &tail,int data){
//     Node* newNode=new Node(data);

//     tail->next=newNode;
//     newNode->prev=tail;

//     tail=newNode;
// }
// void insertAtAnyPosition(Node* &head,Node* &tail,int position,int data){

//     if(position==1){
//         insertAtHead(head,data);
//         return;
//     }

//     Node* temp=head;//creating new node(data)

//     int count=1;
//     while(count<position-1){
//         temp=temp->next;
//         count++;
//     }

//     if(temp->next==NULL){
//         insertAtTail(tail,data);
//         return;
//     }

//     Node* newNode=new Node(data);

//     newNode->next=temp->next;
//     temp->next->prev=newNode;
//     newNode->prev=temp;
//     temp->next=newNode;

// }
// int getLength(Node* &head){
//     Node* temp=head;
//     int count=1;
//     while(temp->next!=NULL){
//         temp=temp->next;
//         count++;
//     }
//     return count;
// }
// void deleteNode(Node*&head,Node* &tail,int position){
//     //empty
//     if(head==NULL){
//         std::cout<<"Linked list is empty!"<<endl;
//         return;
//     }
//     //single node
//     if(head->next==NULL){
//         Node* temp=head;
//         head=NULL;
//         delete head;
//         return;
//     }
//     //first node
//     if(position==1){
//         Node* temp=head;
//         head=temp->next;//head=head->next ie head updated
//         head->prev=NULL;//temp->next->prev=NULL;
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     int len=getLength(head);
//     //last node
//     if(position==len){
//         Node* temp=tail;
//         tail=temp->prev;//temp updated
//         tail->next=NULL;
//         temp->prev=NULL;
//         delete temp;
//         return;
//     }

//     //middle node
//     Node* temp=head;
//     int count=1;
//     while(count<position){
//         temp=temp->next;
//         count++;
//     }
//     Node* left=temp->prev;
//     Node* right=temp->next;

//     left->next=right;//left->next=temp->next;
//     right->prev=left;//right->prev=temp->prev;
//     temp->prev=NULL;
//     temp->next=NULL;
//     delete temp;
// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* node1=new Node(10);
//     Node *head=node1;
//     Node *tail=node1;
//     insertAtHead(head,5);
//     std::cout<<head->data<<endl;
//     std::cout<<head->next<<endl;
//     std::cout<<head->prev<<endl;
//     insertAtTail(tail,15);
//     std::cout<<tail->data<<endl;
//     std::cout<<tail->next<<endl;
//     std::cout<<tail->prev<<endl;
//     insertAtAnyPosition(head,tail,3,12);
//     deleteNode(head,tail,4);
//     std::cout<<"Head->"<<head->data<<endl;
//     std::cout<<"Tail->"<<tail->data<<endl;
//     print(head);
//     return 0;
// }

// middle of linked list
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *findMiddle(Node *head)
// {
//     Node *slow = head;
//     Node *fast = head->next;

//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     return slow;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// Node *reverseKNodesHelper(Node *&head, int k)
// {
//     // base case
//     if (head->next == NULL)
//     {
//         return head;
//     }
//     // ek case solve karte hai
// }
// int getLength(Node *&head)
// {
//     Node *temp = head;
//     int count = 1;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//         count++;
//     }
//     return count;
// }

// Node *reverseKNodes(Node *&head, int k)
// {
//     // empty
//     if (head == NULL)
//     {
//         cout << "Linked list is empty" << endl;
//         return NULL;
//     }
//     int len = getLength(head);
//     if (k > len)
//     {
//         // cout<<"Enter valid value for k"<<endl;
//         return head;
//     }
//     // single node
//     if (head->next == NULL)
//     {
//         return head;
//     }
//     // Step 1:- left,curr,right and reverse in k groups
//     Node *left = NULL;
//     Node *curr = head;
//     Node *right = curr->next;

//     // ek case solve kardo baki recursion sambhal lega
//     int count = 0;
//     while (count < k)
//     {
//         right = curr->next;
//         curr->next = left;

//         // sabko age badhana hai
//         left = curr;
//         curr = right;
//         count++;
//     }
//     // Step 2:- link to recusive call
//     if (right != NULL)
//     {
//         head->next = reverseKNodes(right, k);
//     }

//     // Step 3:-return head for all nodes
//     return left;
// }
// bool isPresentLoop(Node *&head)
// {
//     Node *slow = head;
//     Node *fast = head->next;

//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if (slow == fast)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// Node *findStartingPoint(Node *&head)
// {
//     Node *slow = head;
//     Node *fast = head;

//     while (slow != NULL && fast != NULL)
//     {
//         // Step 1:- slow,fast pointer traversing linked list
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//         // Step 2:- slow=head if(slow==fast)
//         if (slow == fast)
//         {
//             slow = head;
//             break;
//         }
//     }
//     // Step 3:- traverse slow and fast by 1 in LL until they meet
//     while (slow != fast)
//     {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     return slow; // or fast
// }
// void removeLoop(Node* &head){
//     Node* slow=head;
//     Node* fast=head;

//     while(slow!=NULL&&fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//         if(slow==fast){
//             slow=head;
//             break;
//         }
//     }
//     Node* prev=fast;
//     while(slow!=fast){
//         prev=fast;
//         slow=slow->next;
//         fast=fast->next;
//     }
//     prev->next=NULL;
// }
// int main()
// {
//     Node *first = new Node(10);
//     Node *second = new Node(20);
//     first->next = second;
//     Node *third = new Node(30);
//     second->next = third;
//     Node *fourth = new Node(40);
//     third->next = fourth;
//     Node *fifth = new Node(50);
//     fourth->next = fifth;
//     Node *sixth = new Node(60);
//     fifth->next = sixth;
//     Node *seventh = new Node(70);
//     sixth->next = seventh;
//     Node *eighth = new Node(80);
//     seventh->next = eighth;
//     Node *nineth = new Node(90);
//     eighth->next = nineth;
//     nineth->next = fifth;
//     cout << isPresentLoop(first) << endl;
//     cout << findStartingPoint(first)->data << endl;
//     removeLoop(first);
//     cout << isPresentLoop(first) << endl;
//     // print(first);
//     // cout << findMiddle(first)->data << endl;
//     // first = reverseKNodes(first, 3);
//     // print(first);
//     return 0;
// }

// Check if LL is Palindrome or not
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         if (this->next != NULL)
//         {
//             this->next = NULL;
//             delete next;
//         }
//     }
// };
// Node *findMiddle(Node *&head)
// {
//     Node *slow = head;
//     Node *fast = head->next;

//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//     }
//     return slow;
// }
// Node *reverse(Node *&head)
// {
//     Node *left = NULL;
//     Node *curr = head;
//     Node *right = curr->next;

//     while (curr != NULL)
//     {
//         right = curr->next;
//         curr->next = left;

//         left = curr;
//         curr = right;
//     }
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// bool isPalindrome(Node *&head)
// {
//     if (head == NULL)
//     {
//         cout << "LL is empty" << endl;
//         return true;
//     }
//     if (head->next == NULL)
//     {
//         // only 1 node
//         return true;
//     }
//     // middle
//     Node *mid = findMiddle(head);

//     // reverse
//     Node *reverseLLKaHead = reverse(mid->next);
//     // print(head);

//     // compare
//     Node *first = head;
//     Node *second = reverseLLKaHead;
//     while (second != NULL)
//     {
//         if (first->data != second->data)
//         {
//             return false;
//         }
//         first = first->next;
//         second = second->next;
//     }
//     return true;
// }
// void removeDuplicatesSortedLL(Node *&head)
// {
//     // point curr
//     Node *curr = head;
//     // check if equal or not
//     while (curr != NULL)
//     {
//         if (curr->next != NULL && curr->data == curr->next->data)
//         {
//             // equal
//             Node *temp = curr->next;
//             curr->next = curr->next->next;
//             temp->next = NULL;
//             delete temp;
//         }
//         else
//         {
//             // not equal
//             curr = curr->next;
//         }
//     }
// }
// void removeDuplicatesUnSortedLL(Node *&head)
// {
//     // mapping
//     unordered_map<int, bool> mapping;
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (!mapping[temp->data])
//         {
//             mapping[temp->data] = true;
//         }
//         temp = temp->next;
//     }
//     // print
//     temp = head;
//     while (temp != NULL)
//     {
//         if (mapping[temp->data] == true)
//         {
//             cout << temp->data << " ";
//             mapping[temp->data] = false;
//         }
//         temp = temp->next;
//     }
// }
// void sortZerosOnesTwos(Node *&head)
// {
//     Node *temp = head;

//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeroCount++;
//         }
//         else if (temp->data == 1)
//         {
//             oneCount++;
//         }
//         else if (temp->data == 2)
//         {
//             twoCount++;
//         }
//         temp = temp->next;
//     }

//     temp = head;
//     // while(temp!=NULL)-> outer loop
//     while (zeroCount)
//     {
//         temp->data = 0;
//         temp = temp->next;
//         zeroCount--;
//     }
//     while (oneCount)
//     {
//         temp->data = 1;
//         temp = temp->next;
//         oneCount--;
//     }
//     while (twoCount)
//     {
//         temp->data = 2;
//         temp = temp->next;
//         twoCount--;
//     }
// }
// Node *sortZerosOnesTwosInplace(Node *&head)
// {
//     // empty
//     if (head == NULL)
//     {
//         cout << "LL is empty" << endl;
//         return NULL;
//     }
//     // single node
//     if (head->next == NULL)
//     {
//         return head;
//     }
//     // three pointers zero,one,two
//     // creating dummy node
//     Node *zeroKaHead = new Node(-1);
//     Node *zeroTail = zeroKaHead;
//     Node *oneKaHead = new Node(-1);
//     Node *oneTail = oneKaHead;
//     Node *twoKaHead = new Node(-1);
//     Node *twoTail = twoKaHead;

//     Node *curr = head;
//     while (curr != NULL)
//     {
//         if (curr->data == 0)
//         {
//             // make the node standalone
//             Node *temp = curr;
//             curr = curr->next;
//             temp->next = NULL;

//             // append the node in zeroKaHead vali LL
//             zeroTail->next = temp;
//             zeroTail = temp;
//         }
//         else if (curr->data == 1)
//         {
//             // make the node standalone
//             Node *temp = curr;
//             curr = curr->next;
//             temp->next = NULL;

//             // append the node in zeroKaHead vali LL
//             oneTail->next = temp;
//             oneTail = temp;
//         }
//         else if (curr->data == 2)
//         {
//             // make the node standalone
//             Node *temp = curr;
//             curr = curr->next;
//             temp->next = NULL;

//             // append the node in zeroKaHead vali LL
//             twoTail->next = temp;
//             twoTail = temp;
//         }
//     }

//     // remove dummy

//     // modified zero
//     Node *temp = zeroKaHead;
//     zeroKaHead = zeroKaHead->next; // zeroKaHead updated
//     temp->next = NULL;
//     delete temp;

//     // modified one
//     temp = oneKaHead;
//     oneKaHead = oneKaHead->next; // oneKaHead updated
//     temp->next = NULL;
//     delete temp;
//     // modified two
//     temp = twoKaHead;
//     twoKaHead = twoKaHead->next; // twoKaHead updated
//     temp->next = NULL;
//     delete temp;

//     // teeno LL ko join karr
//     if (oneKaHead != NULL)
//     {

//         zeroTail->next = oneKaHead;
//         if (twoKaHead != NULL)
//         {
//             oneTail->next = twoKaHead;
//         }
//     }
//     else
//     {
//         // one vali LL
//         if (twoKaHead != NULL)
//         {
//             zeroKaHead->next = twoKaHead;
//         }
//     }

//     // return overall ka head

//     return zeroKaHead;
// }
// int main()
// {
//     Node *first = new Node(2);
//     Node *second = new Node(1);
//     first->next = second;
//     Node *third = new Node(1);
//     second->next = third;
//     Node *fourth = new Node(0);
//     third->next = fourth;
//     Node *fifth = new Node(0);
//     fourth->next = fifth;
//     Node *sixth = new Node(2);
//     fifth->next = sixth;
//     Node *seventh = new Node(1);
//     sixth->next = seventh;

//     // cout << isPalindrome(first) << endl;
//     // removeDuplicatesSortedLL(first);
//     // removeDuplicatesUnSortedLL(first);
//     // sortZerosOnesTwos(first);
//     first = sortZerosOnesTwosInplace(first);
//     print(first);
//     return 0;
// }

// Add two numbers in LL
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *reverse(Node *&head)
// {
//     Node *left = NULL;
//     Node *curr = head;
//     Node *right = curr->next;
//     while (curr != NULL)
//     {
//         right=curr->next;
//         curr->next = left;

//         left = curr;
//         curr = right;
//     }
//     return left;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// Node *addLL(Node *&head1, Node *&head2)
// {
//     // Step1:- reverse both LL
//     head1 = reverse(head1);
//     head2 = reverse(head2);
//     // Step 2:- add LL
//     // ans vali LL
//     Node *ansKaHead = NULL;
//     Node *ansKaTail = NULL;
//     int carry = 0;
//     while (head1 != NULL && head2 != NULL)
//     {
//         // sum nikalo
//         int sum = head1->data + head2->data + carry;
//         // digit nikalo = 258 ka 2 niklega
//         int digit = sum % 10;
//         carry = carry / 10; // carry updated
//         // creating newNode for data equal to digit
//         Node *newNode = new Node(digit);
//         // pointing ko thik karo
//         if (ansKaHead == NULL)
//         {
//             // sabse pehli node hai
//             ansKaHead = newNode;
//             ansKaTail = newNode;
//         }
//         else
//         {
//             ansKaTail->next = newNode;
//             ansKaTail = newNode; // tail updated
//         }
//         // age badh jao
//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     // head1 left
//     while (head1 != NULL)
//     {
//         int sum = head1->data + carry;
//         int digit = sum % 10;
//         carry = carry / 10;
//         Node *newNode = new Node(digit);
//         ansKaTail->next = newNode;
//         ansKaTail = newNode;
//         head1 = head1->next;
//     }
//     // head2 left
//     while (head2 != NULL)
//     {
//         int sum = head2->data + carry;
//         int digit = sum % 10;
//         carry = carry / 10;
//         Node *newNode = new Node(digit);
//         ansKaTail->next = newNode;
//         ansKaTail = newNode;
//         head2 = head2->next;
//     }
//     // carry ko alag se handle karo
//     while (carry != 0)
//     {
//         int sum = carry;
//         int digit = sum % 10;
//         carry /= 10;
//         Node *newNode = new Node(digit);
//         ansKaTail->next = newNode;
//         ansKaTail = newNode;
//     }
//     // Step 3:- reverse kardo ans vali LL
//     ansKaHead = reverse(ansKaHead);
//     return ansKaHead;
// }
// int main()
// {
//     Node *head1 = new Node(2);
//     Node *second = new Node(3);
//     head1->next = second;
//     Node *third = new Node(4);
//     second->next = third;

//     Node *head2 = new Node(2);
//     Node *two = new Node(4);
//     head2->next = two;

//     head1 = addLL(head1, head2);
//     print(head1);
//     // print(head2);
//     return 0;
// }

// Increment LL by 1
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
// Node *reverse(Node *&head)
// {
//     Node *left = NULL;
//     Node *curr = head;
//     Node *right = curr->next;
//     while (curr != NULL)
//     {
//         right = curr->next;
//         curr->next = left;

//         left = curr;
//         curr = right;
//     }
//     return left;
// }
// Node *incrementByOneLL(Node *&head)
// {
//     // reverse
//     head = reverse(head);
//     // add 1
//     head->data = head->data + 1;
//     //reverse
//     head = reverse(head);
//     return head;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *head = new Node(2);
//     Node *second = new Node(3);
//     head->next = second;
//     Node *third = new Node(4);
//     second->next = third;
//     print(head);

//     // cout<<"After revesing: ";
//     // head=reverse(head);
//     // print(head);

//     cout << "After incrementing LL by 1: ";
//     head = incrementByOneLL(head);
//     print(head);
//     return 0;
// }

//
// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *next = NULL;
// };
// int getLength(Node *llist)
// {
//     int count = 0;
//     while (llist != NULL)
//     {
//         count++;
//         llist = llist->next;
//     }
//     return count;
// }
// int getNode(Node *head, int position)
// {
//     int len = getLength(head);
//     // cout<<len<<endl;
//     int i = 0;
//     while (i < len - position-1)
//     {
//         head = head->next;
//         i++;
//     }
//     return head->data;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     // Using struct
//     Node *head = new Node();
//     head->data = 3;
//     Node *second = new Node();
//     second->data = 2;
//     head->next = second;
//     Node *third = new Node();
//     third->data = 1;
//     second->next = third;
//     Node *fourth = new Node();
//     fourth->data=0;
//     third->next = fourth;

//     cout << getNode(head, 3) << endl;

//     return 0;
// }

