//#include <iostream>
//#include <time.h>
//using namespace std;
//
//char *strStr(char *haystack, char *needle);
//
//int main()
//{
//	clock_t start,finish;
//	double totaltime;
//	char *a="mississippi";
//	char *b="a";
//	char *aa="acabaabaabcacaabc";
//	char *bb="abaabcac";
//	start=clock();
//	for(int i=0;i<100000;i++)
//	char *c=strStr(aa,bb);
//	finish=clock();
//	totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
//	return 0;
//}
//
//char *strStr(char *haystack, char *needle)
//{
//	///////////////////////////////////////////方法1 ppt
//	//int len_stack=strlen(haystack);
//	//int len_need=strlen(needle);
// //   
//	////////////////////////get next[j]
// //   int j=0,k=-1;
//	//int *next=new int[len_need];
//	//next[0]=-1;
//	//while(j<len_need)
//	//{
//	//	if(k==-1||needle[j]==needle[k])
//	//	{
//	//		j++;
//	//		k++;
//	//		next[j]=k;
//	//	}
//	//	else
//	//		k=next[k];
//	//}
//
//	//int posP=0,posT=0;
//	//while(posP<len_need&&posT<len_stack)
//	//{
//	//	if(posP==-1||needle[posP]==haystack[posT])
//	//	{
//	//		posP++;
//	//		posT++;
//	//	}
//	//	else
//	//	{
//	//		posP=next[posP];
//	//	}
//	//}
//	//if(posP<len_need)
//	//	return NULL;
//	//else
//	//	return haystack+posT-len_need;
//
//
//	/////////////////////////////////////////////方法2  网上方法
//	//int hayLen = strlen(haystack);
//	//int needLen = strlen(needle);
//
//	//for(int i = 0; i <= hayLen - needLen; i++)
//	//{
//	//	char *p = haystack + i;
//	//	char *q = needle;
//	//	while(*q != '\0')
//	//	{
//	//		if (*p != *q)
//	//			break;
//	//		else
//	//		{
//	//			p++;
//	//			q++;
//	//		}
//	//	}
//
//	//	if (*q == '\0')
//	//		return haystack + i;            
//	//}
//
//	//return NULL;
//
//
//    /////////////////////////////////////////////////////方法3 算法导论
//
//	int n=strlen(haystack);
//	int m=strlen(needle);
//	int *pai=new int[m+1];
//	pai[1]=0;
//	int k=0;
//	int q;
//	for( q=2;q<=m;q++)
//	{
//		while(k>0&&needle[k]!=needle[q-1])
//			k=pai[k];
//		if(needle[k]==needle[q-1])
//			k=k+1;
//		pai[q]=k;
//	}
//	//for(int i=0;i<m+1;i++)
//	//	pai[i]=0;
//	q=0;
//	for(int i=1;i<=n;i++)
//	{
//		while(q>0&&needle[q]!=haystack[i-1])
//			q=pai[q];
//		if(needle[q]==haystack[i-1])
//			q=q+1;
//		if(q==m)
//			return haystack+i-m;
//
//	}
//	return NULL;
//}