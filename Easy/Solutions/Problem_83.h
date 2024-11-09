#pragma once
#include <set>

/**/
 // Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		std::set<int> exist{};

		ListNode* curr_node = head;
		ListNode* prev_node = nullptr;

		while (curr_node != nullptr) {
			
			if (!exist.count(curr_node->val)) {
				exist.emplace(curr_node->val);
				prev_node = curr_node;
			}
			else {
				prev_node->next = curr_node->next;
			}

			curr_node = curr_node->next;
		}

		return head;
	}
};