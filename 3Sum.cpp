//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<vector<int> > threeSum(vector<int> &num);
//int threeSumClosest(vector<int> &num, int target);
//vector<vector<int> > fourSum(vector<int> &num, int target);
//int main()
//{
//	vector<int> num(6);
//	num[0]=-3;
//	num[1]=-1;
//	num[2]=0;
//	num[3]=2;
//	num[4]=4;
//	num[5]=5;
//	vector< vector<int> >en=fourSum(num,2);
//	return 0;
//}
//
//vector<vector<int> > threeSum(vector<int> &num)
//{
//	sort(num.begin(),num.end());
//	vector<vector<int> > op;
//	vector<int> nu(3);
//	if(num.size()<3)
//		return op;
//	if(num[num.size()-1]<0)
//		return op;
//	if(num[0]>0)
//		return op;
//	int start=0;
//	for(int i=0;i<num.size();i++)
//	{
//		if(num[i]>=0)
//		{
//			start=i;
//			break;
//		}
//	}
//	int a=num[0];
//	int b=num[1];
//	int c=num[2];
//	bool mark_one=false;
//	bool mark_two=false;
//	bool mark_three=false;
//	for(int i=0;i<num.size()-2;i++)
//	{
//		if(num[i]==a&&mark_one)
//			continue;
//		a=num[i];
//		mark_one=true;
//		mark_two=false;
//		for(int j=i+1;j<num.size()-1;j++)
//		{
//			if(num[j]==b&&mark_two)
//				continue;
//			b=num[j];
//			mark_two=true;
//			mark_three=false;
//			for(int k=j+1>start?j+1:start;k<num.size();k++)
//			{
//		        if(c==num[k]&&mark_three)
//					continue;
//				c=num[k];
//				mark_three=true;
//				if(num[i]>0)
//					return op;
//				if(num[i]+num[j]+num[k]==0)
//				{
//					nu[0]=num[i];
//					nu[1]=num[j];
//					nu[2]=num[k];
//					op.push_back(nu);
//				}
//			}
//		}
//	}
//	return op;
//}
//
//int threeSumClosest(vector<int> &num, int target)
//{    
//	int numlen = num.size();
//	if(numlen<3)return -1;
//
//	sort(num.begin(),num.end());
//	int minGap = num[0]+num[1]+num[2]-target;
//	for(int i = 0; i <= numlen-3; i++)
//	{
//		int begin = i+ 1;
//		int end = numlen-1;
//		while(begin < end)
//		{
//			int curGap = num[i]+num[begin]+num[end]-target;
//			if(curGap == 0)	return target;
//			if(abs(curGap) < abs(minGap)) minGap = curGap;
//			if(curGap < 0)	begin++;
//			else end--;
//		}
//	}
//	return target+minGap;
//}
//vector<vector<int> > fourSum(vector<int> &num, int target) 
//{
//	sort(num.begin(),num.end());
//    vector<vector<int> > op;
//	vector<int>op_tmp(4);
//	if(num.size()<4)
//		return op;
//	int i,j,begn,edy;
//	int ai=num[0];
//	int aj=num[1];
//	int abegn=num[2];
//	int aedy=num[num.size()-1];
//	bool mark1=false;
//	bool mark2=false;
//	bool mark3=false;
//	bool mark4=false;
//	for(i=0;i<num.size()-3;i++)
//	{
//		if(num[i]==ai&&mark1)
//			continue;
//		mark1=true;
//		mark2=false;
//		ai=num[i];
//		for(j=i+1;j<num.size()-2;j++)
//		{
//			if(num[j]==aj&&mark2)
//				continue;
//			mark2=true;
//			mark3=false;
//			mark4=false;
//			aj=num[j];
//			begn=j+1;
//			edy=num.size()-1;
//			while(begn<edy)
//			{
//				if(num[begn]==abegn&&mark3)
//				{
//					begn++;
//					continue;
//				}
//				abegn=num[begn];
//				if(num[edy]==aedy&&mark4)
//				{
//					edy--;
//					continue;
//				}
//				aedy=num[edy];
//				if(num[i]+num[j]+num[begn]+num[edy]<target)
//				{
//					begn++;
//					mark3=true;
//					mark4=false;
//				}
//				else if(num[i]+num[j]+num[begn]+num[edy]>target)
//				{
//					edy--;
//					mark4=true;
//                    mark3=false;
//				}
//				else
//				{
//					op_tmp[0]=(num[i]);
//					op_tmp[1]=(num[j]);
//					op_tmp[2]=(num[begn]);
//					op_tmp[3]=(num[edy]);
//					op.push_back(op_tmp);
//					begn++;
//					mark3=true;
//					mark4=false;
//				}
//			}
//		}
//	}
//	return op;
//}