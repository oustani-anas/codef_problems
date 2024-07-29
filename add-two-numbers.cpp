
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
    vector<int> vect1;
    vector<int> vect2;

    while (h1 != nullptr)
    { 
        vect1.push_back(h1->val);
        h1 = h1->next;
    }
    for (int i = vect1.size() - 1; i >= 0; i--)
        s1 = s1 * 10 + vect1[i];
    
    while (h2 != nullptr)
    { 
        vect2.push_back(h2->val);
        h2 = h2->next;
    }
    for (int i = vect2.size() - 1; i >= 0; i--)
        s2 = s2 * 10 + vect2[i];
    
    sum->val = s2 + s1;

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