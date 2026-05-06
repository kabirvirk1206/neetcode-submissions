/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        int size = 0;
        ListNode *curr = head;
        while (curr != nullptr) {   
          size++; 
          curr=curr->next;
        }

    int *arr = new int[size];

int i = 0;
for (ListNode * curr = head; curr !=nullptr; curr=curr->next) {
    arr[i] = curr->val;
    i++;
}

int first = 0; int second = size - 1;
while (first < second) {
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;


    first++;
    second--;
}

if (size == 0) return nullptr;

ListNode *newHead = new ListNode(arr[0]);
ListNode *newTail = newHead;

for (int i = 1; i < size; i++) {
    newTail->next = new ListNode(arr[i]);
    newTail = newTail->next;
}

return newHead;
    
}



        

};
