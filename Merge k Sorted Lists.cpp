//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//struct comparator//: public binary_function<ListNode*, ListNode*, bool> 
//{  
//	bool operator() (const ListNode* a, const ListNode* b)
//	{  
//		return a->val < b->val;  
//	}  
//}; 
//ListNode *mergeKLists(vector<ListNode *> &lists); 
//        
//int main()
//{
//	vector<ListNode *>lsi;
//	ListNode *head=new ListNode(1);
//	ListNode *head1=new ListNode(2);
//	ListNode *head2=new ListNode(0);
//	head->next=head1;
//	//head1->next=head2;
//	lsi.push_back(head);
//	lsi.push_back(head2);
//	//lsi.push_back(head1);
//	ListNode *en=mergeKLists(lsi);
//	return 0;
//}
//ListNode *mergeKLists(vector<ListNode *> &lists)
//{
//     multiset<ListNode*,comparator> S;  
//     for (int i = 0; i < lists.size(); ++i)
//	 {  
//	    if (lists[i])
//		{  
//		   S.insert(lists[i]);  
//		}
//	             
//     }  
//
//	ListNode* head = 0;  
//	ListNode* tail = 0;  
//	while (!S.empty()) 
//	{  
//		ListNode* node = *S.begin();  
//		S.erase(S.begin());  
//		if (!head) 
//		{  
//			head = tail = node;  
//		}  
//		else 
//		{  
//			tail = tail->next = node;  
//		}  
//		if (node->next) 
//		{  
//			S.insert(node->next);  
//		}  
//	}  
//
//    return head;   
//}
//
/////////////////////////////////////////////下面是两种较为慢的方法
////int num=lists.size();
////int total=num;
////if(num==0)
////	return NULL;
////vector<int>st(num);
////ListNode *head=NULL;
////ListNode *lian=NULL;
////int i;
////   for(i=0;i<num;i++)
////{
////	if(lists[i]==NULL)
////	{
////		st[i]=1;
////		total--;
////	}
//
////}
////if(num==0||total==0)
////	return NULL;
////int min=0;
////int min_val;
////while(total>0)
////{
////	for(i=0;i<num;i++)
////	{
////		if(i==-1)
////			continue;
////		if(st[i]==0)
////		{
////			min=i;
////			break;
////		}
////	}
////	min_val=lists[min]->val;
//
////	for( i=min+1;i<num;i++)
////	{
////		if(st[i]==1)
////			continue;
////		if(lists[i]->val<min_val)
////		{
////			min_val=lists[i]->val;
////			min=i;
////		}
////	}
////	if(head==NULL)
////	{
////		head=lists[min];
////		lian=head;
////	}
////	else
////	{
////	   lian->next=lists[min];
////	   lian=lian->next;
////	}
////	if(lists[min]->next==NULL)
////	{
////		total--;
////		st[min]=1;
////	}
////	else
////	{
////		lists[min]=lists[min]->next;
////	}
////}
////return head;
//
////ListNode *head = new ListNode(-1);  
////ListNode *p = head;  
////if(lists.size()==0) return NULL;  
////if(lists.size()==1) return lists[0];  
////ListNode *l1 = lists[0];  
////for(int i=1;i<lists.size();i++){  
////	ListNode *l2 = lists[i];  
////	while(l1!=NULL && l2!=NULL){  
////		if(l1->val<l2->val){  
////			p->next = l1;  
////			l1 = l1->next;  
////			p = p->next;  
////		}else{  
////			p->next = l2;  
////			l2 = l2->next;  
////			p = p->next;  
////		}  
////	}  
////	while(l1!=NULL){  
////		p->next = l1;  
////		p = p->next;  
////		l1 = l1->next;  
////	}  
////	while(l2!=NULL){ 
////		p->next = l2; 
////		p = p->next;  
////		l2 = l2->next;  
////	}  
////	l1 = head->next;  
////	p = head;  
////}  
////return head->next;