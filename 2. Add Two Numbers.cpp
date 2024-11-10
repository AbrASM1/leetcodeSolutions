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
    bool isLastNode(ListNode* node) {
        if(node == nullptr) return true;
        else return false;
    }
    void addNode(ListNode*& head, int newValue) {
    ListNode* newNode = new ListNode(newValue);
    if (head == nullptr) {
       
        head = newNode;
    } else {
       
        ListNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode; 
        }
    }
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int l1_num=0,l2_num=0;
        int sum_num=0,mult=1;
        ListNode* sum= nullptr;

        while(!isLastNode(l1)||!isLastNode(l2)||sum_num>0){
            
            l1_num=(!isLastNode(l1)) ? l1->val : 0 ;
            l1=(!isLastNode(l1)) ? l1->next : nullptr;
            l2_num=(!isLastNode(l2)) ? l2->val : 0;
            l2=(!isLastNode(l2)) ? l2->next : nullptr;
            sum_num+=l1_num+l2_num;
            addNode(sum,sum_num%10);
            sum_num=sum_num/10;


        }
        return sum;

    }
};