//#include <iostream>
//
//using namespace std;
//struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//  };
//
//ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
//        
//int main()
//{
//	ListNode *l1=new ListNode(0);
//	ListNode *l2=new ListNode(0);
//	ListNode *l=addTwoNumbers(l1,l2);
//	return 0;
//}
//
//ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
//{
//	ListNode *start=NULL;
//	ListNode *sta=start;
//	if(l1==NULL&&l2==NULL)
//		return start;
//	int num;
//	int jin=0;
//	while(l1!=NULL&&l2!=NULL)
//	{
//		num=l1->val+l2->val+jin;
//		jin=0;
//		if(num>=10)
//		{
//			num=num%10;
//			jin=1;
//		}
//		ListNode *tmp=new ListNode(num);
//		if(start==NULL)
//		{
//			start=tmp;
//			sta=start;
//		}
//		else
//		{
//			start->next=tmp;
//			start=start->next;
//		}
//		l1=l1->next;
//		l2=l2->next;
//	}
//	while(l1!=NULL)
//	{
//		num=l1->val+jin;
//		jin=0;
//		if(num>=10)
//		{
//			num=num%10;
//			jin=1;
//		}
//		ListNode *tmp=new ListNode(num);
//		if(start==NULL)
//		{
//			start=tmp;
//			sta=start;
//		}
//		else
//		{
//			start->next=tmp;
//			start=start->next;
//		}
//		l1=l1->next;
//	}
//	while(l2!=NULL)
//	{
//		num=l2->val+jin;
//		jin=0;
//		if(num>=10)
//		{
//			num=num%10;
//			jin=1;
//		}
//		ListNode *tmp=new ListNode(num);
//		if(start==NULL)
//		{
//			start=tmp;
//			sta=start;
//		}
//		else
//		{
//			start->next=tmp;
//			start=start->next;
//		}
//		l2=l2->next;
//	}
//	if(jin==1)
//	{
//		ListNode *tmp=new ListNode(1);
//		start->next=tmp;
//	}
//	return sta;
//}