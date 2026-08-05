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
   ListNode* mergeTwo(ListNode* a,ListNode* b)
{
        ListNode dummy(0);
        ListNode* curr = &dummy;

        while(a&&b){
            if(a->val<=b->val)
            {
                curr->next=a;
                a=a->next;
            }
            else
            {
                curr->next=b;
                b=b->next;
            }
            curr=curr->next;
        }
        curr->next=a?a:b;
        return dummy.next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
                if(lists.empty())
                return nullptr;
                int n=lists.size();
                for(int gap=1;gap<n;gap=2*gap)
                {
                    for(int i=0;i+gap<n;i+=2*gap)
                    {
                        lists[i]=mergeTwo(lists[i],lists[i+gap]);
                    }
                   
                }


         return lists[0];
    }
};
