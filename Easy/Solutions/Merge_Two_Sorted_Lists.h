#pragma once



/* Definition for singly-linked list. */
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode* res_head = nullptr;
		ListNode* res_curr = nullptr;

		if (list1 == nullptr && list2 == nullptr) return {};

		if (list1 == nullptr) {
			res_head = list2;
			res_curr = list2;
			list2 = list2->next;
		}
		else if (list2 == nullptr) {
			res_head = list1;
			res_curr = list1;
			list1 = list1->next;
		}
		else if (list1->val < list2->val) {
			res_head = list1;
			res_curr = list1;
			list1 = list1->next;
			
		}
		else if (list2->val <= list1->val) {
			res_head = list2;
			res_curr = list2;
			list2 = list2->next;
		}

		while (list1 != nullptr && list2 != nullptr) {
			if (list2->val < list1->val) {
				res_curr->next = list2;
				list2 = list2->next;
				res_curr = res_curr->next;
			} 
			else {
				res_curr->next = list1;
				list1 = list1->next;
				res_curr = res_curr->next;
			}
		}


		while (list1 != nullptr) {
			res_curr->next = list1;
			list1 = list1->next;
			res_curr = res_curr->next;
		}

		while (list2 != nullptr) {
			res_curr->next = list2;
			list2 = list2->next;
			res_curr = res_curr->next;
		}

		return res_head;
	}
};