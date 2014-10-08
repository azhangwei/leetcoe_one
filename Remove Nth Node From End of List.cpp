//#include <iostream>
//
//using namespace std;
//
//struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//  };
//
//ListNode *removeNthFromEnd(ListNode *head, int n); 
//
//int main()
//{
//
//	return 0;
//}
//
//ListNode *removeNthFromEnd(ListNode *head, int n)
//{
//	if(head==NULL)
//		return NULL;
//	if(n==0)
//		return head;
//	ListNode *fast=head;
//	ListNode *slow=head;
//	for(int i=0;i<n;i++)
//	{
//		if(fast->next!=NULL)
//			fast=fast->next;
//		else
//		{
//			if(i==n-1)
//			{
//				head=head->next;
//			}
//			return head;
//		}
//	}
//	while(fast->next!=NULL)
//	{
//		fast=fast->next;
//		slow=slow->next;
//	}
//	slow->next=slow->next->next;
//	return head;
//}