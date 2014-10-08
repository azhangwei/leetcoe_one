//#include <iostream>
//
//using namespace std;
//
//int search(int A[], int n, int target);
//
//int main()
//{
//	int A[]={4,5,6,7,0,1,2};
//	int n=search(A,7,0);
//	return 0;
//}
//
//int search(int A[], int n, int target)
//{
//	int mid;
//	int start=0;
//	int end=n-1;
//	while(start<end-1)
//	{
//	   if(A[end]==target)
//		   return end;
//	   if(A[start]==target)
//		   return start;
//	   mid=start+(end-start)/2;
//	   if(A[mid]==target)
//		   return mid;
//	   if(A[mid]>A[start])
//	   {
//		   if(target>A[start]&&A[mid]>target)
//			   end=mid;
//		   else
//			   start=mid;
//	   }
//	   else
//	   {
//		   if(A[mid]<target&&target<A[end])
//			   start=mid;
//		   else
//			   end=mid;
//	   }
//	}
//
//	if(A[start]==target)
//		return start;
//	if(A[end]==target)
//		return end;
//	return -1;
//}