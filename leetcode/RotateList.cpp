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
  } typedef ListNode;

ListNode* rotateRight(ListNode* head, int k) {

    vector<int> nums;
    ListNode *tmp = head;
    if(!head || k == 0)
        return head;
    while(tmp) {
        nums.push_back(tmp->val);
        tmp = tmp->next;
    }
    int rotatenum = k % nums.size();
    while(rotatenum--){
        int num = nums[nums.size() - 1];
        nums.pop_back();
        nums.insert(nums.begin(), num);
    }

    //for(int i = 0; i < nums.size(); i++)
      //  cout << nums[i] << endl;
    
    tmp = head;
    int i = 0;
    while(tmp)
    {
        tmp->val = nums[i++];
        tmp = tmp->next;
    }

    return head;
}

int main() {
    ListNode *one = new ListNode(1);
    ListNode *two = new ListNode(2);
    ListNode *three = new ListNode(3);
    ListNode *four = new ListNode(4);

    one->next = two;
    two->next = three;
    three->next = four;
    rotateRight(one, 2);


}