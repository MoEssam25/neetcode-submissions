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
    bool hasCycle(ListNode* head) {
        ListNode* Fptr = head;
        ListNode* Sptr = head;

        if(!head)
            return false;
        if(! head->next)
            return false;
        while(Fptr != NULL)
        {
            Sptr = Sptr->next;
            Fptr = Fptr->next;
            if(Fptr)
            {
                Fptr = Fptr->next;
            }
            if(Fptr == Sptr)
                return true;
        }

        return false;
    }
};
