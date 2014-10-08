//#include <iostream>
//#include <vector>
//using namespace std;
//
//double findMedianSortedArrays(int A[], int m, int B[], int n);
//
//int main()
//{
//	int A[]={1,3,5,7};
//	int B[]={20,40,60,80};
//	double en=findMedianSortedArrays(A,4,B,4);
//	return 0;
//}
//
//double findMedianSortedArrays(int A[], int m, int B[], int n)
//{
//	int num1;
//	int num2;
//	if((m+n)%2==0)
//	{
//		num1=(m+n)/2;
//		num2=(m+n)/2+1;
//	}
//	else
//	{
//		num1=num2=(m+n)/2+1;
//	}
//    int start_one=-1;
//	int start_two=-1;
//	int total=0;
//	int a,b;
//
//		while(total<num1)
//		{
//			if(start_one+1<m&&start_two+1<n)
//			{
//				if(A[start_one+1]<B[start_two+1])
//				{
//					start_one++;
//					a=A[start_one];
//				}
//				else
//				{
//					start_two++;
//					a=B[start_two];
//				}
//			}
//			else
//			{
//				if(start_one+1==m)
//				{
//					start_two++;
//					a=B[start_two];
//				}
//				else
//				{
//					start_one++;
//					a=A[start_one];
//				}
//			}
//			total++;
//		}
//		if(num1<num2)
//		{
//			if(start_one+1<m&&start_two+1<n)
//			{
//				if(A[start_one+1]<B[start_two+1])
//				{
//					start_one++;
//					b=A[start_one];
//				}
//				else
//				{
//					start_two++;
//					b=B[start_two];
//				}
//			}
//			else
//			{
//				if(start_one+1==m)
//				{
//					start_two++;
//					b=B[start_two];
//				}
//				else
//				{
//					start_one++;
//					b=A[start_one];
//				}
//			}
//		}
//		else
//			b=a;
//
//	double oup=double(a+b)/2.0;
//	return oup;
//}