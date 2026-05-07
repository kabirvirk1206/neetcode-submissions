class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        int size = 0;
        ListNode* curr1 = list1;
        while(curr1 != nullptr) {
            size++;
            curr1 = curr1->next;
        }

        ListNode* curr2 = list2;
        while(curr2 != nullptr) {
            size++;
            curr2 = curr2->next;
        }

        if (size == 0) return nullptr;

        int *arr = new int[size];
        int index = 0;

        for (ListNode* c1 = list1; c1 != nullptr; c1 = c1->next) {
            arr[index++] = c1->val;
        }

        for (ListNode* c2 = list2; c2 != nullptr; c2 = c2->next) {
            arr[index++] = c2->val;
        }

        int n = size;
    
        for (int i = 0; i < n - 1; i++) {
            int min_idx = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
            if (min_idx != i) {
                std::swap(arr[min_idx], arr[i]);
            }
        }

        ListNode *newHead = new ListNode(arr[0]);
        ListNode *newTail = newHead;

        for (int i = 1; i < size; i++) {
            newTail->next = new ListNode(arr[i]);
            newTail = newTail->next;
        }

        delete[] arr;
        return newHead; 
    }
};