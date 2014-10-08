//#include <iostream>
//#include <vector>
//
//using namespace std;
//bool isValid(string s);
//int main()
//{
//	string s="]";
//	bool m=isValid(s);
//	return 0;
//}
//bool isValid(string s)
//{
//	vector<char> num;
//	for(int i=0;i<s.size();i++)
//	{
//		if(s[i]=='('||s[i]=='{'||s[i]=='[')
//			num.push_back(s[i]);
//		else
//		{
//			if(s[i]==')')
//			{
//				if(num.size()==0)
//					return false;
//				if(num.back()=='(')
//				{
//					num.pop_back();
//				}
//				else
//					return false;
//			}
//		if(s[i]=='}')
//		{
//			if(num.size()==0)
//				return false;
//			if(num.back()=='{')
//			{
//				num.pop_back();
//			}
//			else
//				return false;
//		}
//		if(s[i]==']')
//		{
//			if(num.size()==0)
//				return false;
//			if(num.back()=='[')
//			{
//				num.pop_back();
//			}
//			else
//				return false;
//		}
//	  }
//	}
//	if(num.size()==0)
//		return true;
//	else
//		return false;
//}