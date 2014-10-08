//#include <iostream>
//using namespace std;
// struct ListNode {
//	     int val;
//	     ListNode *next;
//	     ListNode(int x) : val(x), next(NULL) {}
//	 };
//void sortLista(ListNode **head) ;
//ListNode *find_mid(ListNode *head);
//ListNode *merge(ListNode *a,ListNode *b);
//int main()
//{
//	ListNode *head=new ListNode(3);
//	ListNode *one=new ListNode(2);
//	ListNode *two=new ListNode(4);
//	head->next=one;
//	head->next->next=two;
//	ListNode *A=NULL;
//	sortLista(&A);
//	return 0;
//	
//}
//void sortLista(ListNode **head) 
//{
//	ListNode *a=*head;
//	ListNode *b=NULL;
//	if(*head==NULL)
//		return;
//	if(a->next==NULL)
//		return;
//	b=find_mid(*head);
//	sortLista(&a);
//	sortLista(&b);
//	*head=merge(a,b);
//
//}
//ListNode *find_mid(ListNode *head)
//{
//	ListNode *slow=head;
//	ListNode *fast=head;
//	ListNode *tmp=slow;
//	if(head==NULL)
//		return slow;
//	if(head->next==NULL)
//		return slow;
//	while(fast!=NULL)
//	{
//		tmp=slow;
//		slow=slow->next;
//		if(fast->next==NULL)
//			break;
//		if(fast->next->next==NULL)
//			break;
//		fast=fast->next->next;
//
//	}
//	tmp->next=NULL;
//	return slow;
//}
//
//ListNode *merge(ListNode *a,ListNode *b)
//{
//	ListNode *tmp;
//	ListNode *head;
//	if(a==NULL)
//		return b;
//	if(b==NULL)
//		return a;
//	if(a->val<b->val)
//	{
//		head=a;
//		a=a->next;
//	}
//	else
//	{
//		head=b;
//		b=b->next;
//	}
//	tmp=head;
//	while(a!=NULL&&b!=NULL)
//	{
//		if(a->val<b->val)
//		{
//			tmp->next=a;
//			a=a->next;
//		}
//		else
//		{
//			tmp->next=b;
//			b=b->next;
//		}
//		tmp=tmp->next;
//	}
//	if(a!=NULL)
//	{
//		tmp->next=a;
//	}
//	else
//	{
//		tmp->next=b;
//	}
//	return head;
//}