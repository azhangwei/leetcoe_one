//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<string> generateParenthesis(int n);
//bool isM(vector<int> s);
//void dfs(vector<int> &num,int len,vector<string>&op);
//int main()
//{
//	vector<string>num=generateParenthesis(4);
//	return 0;
//}
//
//vector<string> generateParenthesis(int n)
//{
//	vector<int>num(2*n);
//	num[0]=0;
//	num[2*n-1]=1;
//	vector<string>op;
//	dfs(num,1,op);
//	return op;
//}
//void dfs(vector<int> &num,int len,vector<string>&op)
//{
//	if(len==num.size()-1)
//	{
//		if(isM(num))
//		{
//			string n;
//			for(int i=0;i<num.size();i++)
//			{
//				if(num[i]==0)
//					n=n+'(';
//				else
//					n=n+')';
//			}
//			op.push_back(n);
//		}
//		return;
//	}
//		num[len]=1;
//		dfs(num,++len,op);
//		len--;
//		num[len]=0;
//		dfs(num,++len,op);
//		len--;
//	return;
//}
//bool isM(vector<int>s)
//{
//	vector<char> num;
//	for(int i=0;i<s.size();i++)
//	{
//		if(s[i]==0)
//			num.push_back(s[i]);
//		else
//		{
//			if(s[i]==1)
//			{
//				if(num.size()==0)
//					return false;
//				if(num.back()==0)
//				{
//					num.pop_back();
//				}
//				else
//					return false;
//			}
//		}
//	}
//	if(num.size()==0)
//		return true;
//	else
//		return false;
//}