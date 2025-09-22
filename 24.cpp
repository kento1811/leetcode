#include <bits/stdc++.h>

using namespace std;

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

 ListNode* swapPairs(ListNode* head) {
        if(head == nullptr) return nullptr;
        if(head -> next == nullptr) return head;
        ListNode* headAns = head->next;
        head->next = swapPairs(headAns->next);
        headAns->next = head;

        return headAns;
    }

int main(){

return 0;
}