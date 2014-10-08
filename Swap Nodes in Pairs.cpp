//#include <iostream>
//
//using namespace std;
//
// struct ListNode 
// {
//	     int val;
//	     ListNode *next;
//         ListNode(int x) : val(x), next(NULL) {}
// };
//
//ListNode *swapPairs(ListNode *head);
//ListNode *reverseKGroup(ListNode *head, int k);
//int main()
//{
//	ListNode *one=new ListNode(1);
//	ListNode *one1=new ListNode(2);
//	ListNode *one2=new ListNode(3);
//	ListNode *one3=new ListNode(4);
//	ListNode *one4=new ListNode(5);
//	ListNode *one5=new ListNode(6);
//	one->next=one1;
//	one1->next=one2;
//	one2->next=one3;
//	one3->next=one4;
//	one4->next=one5;
//	ListNode *head=reverseKGroup(one,3);
//	return 0;
//}
//ListNode *swapPairs(ListNode *head)
//{
//	if(head==NULL)
//		return NULL;
//	ListNode *first=head;
//	ListNode *second=first;
//	ListNode *ahead=NULL;
//	ListNode *last=NULL;
//	if(first->next==NULL)
//		return head;
//	else
//		second=first->next;
//	ahead=second;
//	last=first;
//	bool one=false;
//    while(second->next)
//	{
//		last->next=second;
//		first->next=second->next;
//		second->next=first;
//		last=first;
//
//		first=first->next;
//		if(first->next)
//		  second=first->next;
//		else
//		{
//			one=true;
//			break;
//		}
//	}
//	if(one)
//	{
//		last->next=first;
//		first->next=NULL;
//	}
//	else
//	{
//		last->next=second;
//		second->next=first;
//		first->next=NULL;
//	}
//	return ahead;
//}
//
//ListNode *reverseKGroup(ListNode *head, int k)
//{
//	if(k==1)
//		return head;
//	ListNode *first=head;
//	ListNode *end=head;
//	ListNode *mid_one=head;
//	ListNode *mid_two=head;
//	ListNode *mid=head;
//	ListNode *last=NULL;
//	if(head==NULL)
//		return head;
//	if(head->next==NULL)
//		return head;
//	mid_two=head->next;
//	bool mar=true;
//	while(end->next)
//	{
//		for(int i=0;i<k-1;i++)
//		{
//			if(end==NULL)
//				return head;
//			end=end->next;
//		}
//		if(end==NULL)
//			return head;
//		if(mar)
//		{
//			head=end;
//			mar=false;
//		}
//		first->next=end->next;
//		for(int i=0;i<k-2;i++)
//		{
//			mid_one=mid_two;
//			mid_two=mid_two->next;
//			mid_one->next=mid;
//			mid=mid_one;
//		}
//		mid_two->next=mid_one;
//		if(last==NULL)
//		   last=first;
//		else
//		{
//			last->next=end;
//			last=first;
//		}
//
//		if(first->next==NULL)
//			return head;
//
//		first=first->next;
//		end=first;
//		if(end->next==NULL)
//			return head;
//		mid_one=end;
//		mid=mid_one;
//		mid_two=end->next;
//	}
//	return head;
//}