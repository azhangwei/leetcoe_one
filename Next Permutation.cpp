//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <time.h>
//using namespace std;
//
//void nextPermutation(vector<int> &num);
//
//int main()
//{
//	vector<int> num(8);
//	num[0]=1;
//	num[1]=2;
//	num[2]=5;
//	num[3]=4;
//	num[4]=3;
//	num[5]=8;
//	num[6]=7;
//	num[7]=6;
//	clock_t start,finish;
//	double totaltime;
//	start=clock();
//	for(int i=0;i<99999;i++)
//	nextPermutation(num);
//	finish=clock();
//	totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
//
//	return 0;
//}
//
//void nextPermutation(vector<int> &num)
//{
//	/*int len=num.size();
//	int hou=len-1;
//	int qian=hou-1;
//	while(num[hou]<num[qian])
//	{
//		if(qian==0)
//		{
//			hou--;
//			if(hou==0)
//			{
//				sort(num.begin(),num.end());
//				return;
//			}
//			qian=hou-1;
//		}
//		else
//			qian--;	
//	}
//
//	int tmp=num[hou];
//	num[hou]=num[qian];
//	num[qian]=tmp;
//	qian++;
//	while(hou>qian)
//	{
//		tmp=num[hou];
//		num[hou]=num[qian];
//		num[qian]=tmp;
//		hou--;
//		qian++;
//	}
//
//	return;*/
//
//////////////////////////////////////////////////////////上面算法就是错的，下边是对的。
//	int end = num.size() - 1;
//	int povit = end;
//	while(povit > 0){
//		if(num[povit] > num[povit - 1]) break;
//		povit --;
//	}
//	if(povit > 0){
//		povit --; 
//		int large = end;
//		while(num[large] <= num[povit]) large --;
//		swap(num[large] , num[povit]);
//		reverse(num.begin() + povit + 1 , num.end());
//	}else{
//		reverse(num.begin() , num.end());
//	}
//}