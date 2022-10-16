 // Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(l1 == nullptr){
            return l2;
        }
        else if(l2 == nullptr){
            return l1;
        }
        else{
            ListNode* current = new ListNode();
            if(l1->val < l2->val){
                current = new ListNode(l1->val);
                current->next = merge(l1->next, l2);
            }
            else{
                current = new ListNode(l2->val);
                current->next = merge(l1, l2->next);
            }
            return current;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        head = merge(list1, list2);
        return head;
    }
};
