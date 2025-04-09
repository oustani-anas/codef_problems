
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <bitset>
#include <array>

#define ll long long
#define endl '\n'

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> nums;
        
        // Push all elements from list1
        while (list1) {
            nums.push_back(list1->val);
            list1 = list1->next;
        }

        // Push all elements from list2
        while (list2) {
            nums.push_back(list2->val);
            list2 = list2->next;
        }

        // If both lists are empty
        if (nums.empty()) return nullptr;

        sort(nums.begin(), nums.end());

        // Create the new sorted linked list
        ListNode* NewList = new ListNode(nums[0]);
        ListNode* current = NewList;
        for (size_t i = 1; i < nums.size(); i++) {
            current->next = new ListNode(nums[i]);
            current = current->next;
        }

        return NewList;
    }

    void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
};

int main() {
    ListNode *a, *b;

    // list1 = [1,2,4], list2 = [1,3,4]

    a = new ListNode(1);
    a->next = new ListNode(2);
    a->next->next = new ListNode(4);

    b = new ListNode(1);
    b->next = new ListNode(3);
    b->next->next = new ListNode(4);

    Solution test;
    // ListNode *t = new ListNode(), *y = new ListNode();
    test.printList(test.mergeTwoLists(t, y));
}
