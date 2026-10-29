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
        if (head == nullptr) return nullptr;
        ListNode* curr = head->next; //1
        ListNode* prev = head;
        head->next = nullptr;
        while (curr != nullptr) {
            ListNode* temp = curr->next; //null
            curr->next = prev; //2
            prev = curr; //3
            curr = temp; //null
        }
        //[3 -> 2-> 1 -> 0]
        return prev;
    }
};
