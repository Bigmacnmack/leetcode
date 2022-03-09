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
    bool isPalindrome(ListNode* head) {
        ListNode* cur=head;
        vector<int> nums;
       
        while(cur!=NULL)
        {
            nums.push_back(cur->val);
            cur=cur->next;
        }
        
        
        for(int i=0;i<nums.size()/2;i++)
        {
            if(nums[i]!= nums[nums.size()-i-1]) return false;
        }
        return true;
    }
};