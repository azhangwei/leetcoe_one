//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int longestValidParentheses(string s);
//
//int main()
//{
//	string n="()";
//	int test=longestValidParentheses(n);
//	return 0;
//}
//
//int longestValidParentheses(string s)
//{
//	vector<int> rong;
//	vector<char> num;
//	char tmp;
//	for(int i=0;i<s.size();i++)
//	{
//		tmp=s[i];
//		if(tmp=='(')
//		{
//			rong.push_back(i);
//			num.push_back('(');
//		}
//		else
//		{
//			if(num.size()==0)
//			{
//				rong.push_back(i);
//				continue;
//			}
//			if(num.back()=='(')
//			{
//				rong.pop_back();
//				num.pop_back();
//			}
//		}
//	}
//	rong.push_back(s.size());
//	int total;
//	total=rong[0];
//	for(int i=1;i<rong.size();i++)
//	{
//		if(rong[i]-rong[i-1]-1>total)
//			total=rong[i]-rong[i-1]-1;
//	}
//	return total;
//}