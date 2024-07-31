
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>

using namespace std;

typedef struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
} Listnode;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    int s1 = 0, s2 = 0;
    ListNode * h1 = l1;
    ListNode * h2 = l2;
    ListNode * sum = new ListNode();
    

    return sum;
}

int main()
{
    int x, y, z;
    ListNode *res;
    ListNode* n1 = new ListNode(2);
    ListNode* n2 = new ListNode(4);
    ListNode* n3 = new ListNode(3);
    
    n1->next = n2;
    n2->next = n3;
    
    ListNode* n4 = new ListNode(5);
    ListNode* n5 = new ListNode(6);
    ListNode* n6 = new ListNode(4);
    
    n4->next = n5;
    n5->next = n6;
    res = addTwoNumbers(n1, n4);
    cout << res->val << endl;

    delete n1;
    delete n2;
    delete n3;
    delete n4;
    delete n5;
    delete n6;
    delete res;
}