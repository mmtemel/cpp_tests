#include <iostream>

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
		struct ListNode* merge = NULL;
		/*hold head*/
		struct ListNode* head = NULL;

		/*check first elements*/
		if(!list1 && !list2)
			return merge;
		else if(!list2)
			return list1;
		else if(!list1)
			return list2;
		else if(list1->val < list2->val)
		{
			merge = list1;
			list1 = list1->next;
		}
		else
		{
			merge = list2;
			list2 = list2->next;
		}
		head=merge;
		/*check rest elements*/
		while(list1 || list2)
		{
			if(!list2)
			{
				merge->next = list1;
				break;
			}
			else if(!list1)
			{
				merge->next = list2;
				break;
			}
			else if(list1->val < list2->val)
			{
				merge->next = list1;
				merge = merge->next;
				list1 = list1->next;
			}
			else
			{
				merge->next = list2;
				merge = merge->next;
				list2 = list2->next;
			}
		}
		return (head);
	}
};

int main()
{
	/* Initialize ListNodes */
	struct ListNode *head;
	struct ListNode *one = NULL;
	struct ListNode *two = NULL;
	struct ListNode *three = NULL;

	/* Allocate memory */
	one = (ListNode *)malloc(sizeof(struct ListNode));
	two = (ListNode *)malloc(sizeof(struct ListNode));
	three = (ListNode *)malloc(sizeof(struct ListNode));

	/* Assign val values */
	one->val = 1;
	two->val = 3;
	three->val=5;

	/* Connect ListNodes */
	one->next = two;
	two->next = three;
	three->next = NULL;

	/* Save address of first ListNode in head */
	head = one;

	//-------------------------------------------------

	/* Initialize ListNodes */
	struct ListNode *head1;
	struct ListNode *one1 = NULL;
	struct ListNode *two1 = NULL;
	struct ListNode *three1 = NULL;

	/* Allocate memory */
	one1 = (ListNode *)malloc(sizeof(struct ListNode));
	two1 = (ListNode *)malloc(sizeof(struct ListNode));
	three1 = (ListNode *)malloc(sizeof(struct ListNode));

	/* Assign val values */
	one1->val = 2;
	two1->val = 4;
	three1->val=6;

	/* Connect ListNodes */
	one1->next = two1;
	two1->next = three1;
	three1->next = NULL;

	/* Save address of first ListNode in head */
	head1 = one1;

	Solution s;

	struct ListNode *sol = NULL;
	sol = (ListNode *)malloc(sizeof(struct ListNode));
	sol = s.mergeTwoLists(head, head1);

	while(sol)
	{
		std::cout<<sol->val<<std::endl;
		sol = sol->next;
	}
}