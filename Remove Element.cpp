//#include <iostream>
//
//using namespace std;
//
//int removeElement(int A[], int n, int elem);
//int removeDuplicates(int A[], int n);
//
//int main()
//{
//	int A[]=NULL;
//	int B=removeElement(A,0,0);
//	return 0;
//}
//
//int removeElement(int A[], int n, int elem)
//{
//	//if(n==0)
//	//	return 0;
//	//int *first=A;
//	//int *end=A+n-1;
//	//int num=0;
//	//int tmp;
//	//while(first!=end)
//	//{
//	//	while(*first!=elem)
//	//	{
//	//		if(first==end)
//	//			break;
//	//		first++;
//	//		num++;
//	//	}
//	//	while(*end==elem)
//	//	{
//	//		if(first==end)
//	//			break;
//	//		end--;
//	//	}
//	//	if(first!=end)
//	//	{
//	//		tmp=*first;
//	//		*first=*end;
//	//		*end=tmp;
//	//	}
//	//}
//	//if(*first!=elem)
//	//	num++;
//	//return num;
//
//	/////////////////////////////////////////////////你好好反思
//	int start=0;
//	for(int i=0;i<n;i++)
//	{
//		if(A[i]!=elem)
//			A[start++]=A[i];
//
//	}
//	return start;
//}
//int removeDuplicates(int A[], int n)
//{
//	int start=0;
//	bool mark=true;
//	int tmp=0;
//	for(int i=0;i<n;i++)
//	{
//		if(mark)
//		{
//			A[start++]=A[i];
//			tmp=A[i];
//			mark=false;
//		}
//		else
//		{
//			if(A[i]!=tmp)
//			{
//				A[start++]=A[i];
//				tmp=A[i];
//			}
//		}
//	}
//	return start;
//}