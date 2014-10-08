//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//void reverse(string &s);
//void reve(string &s);
//int main()
//{
//	string s;
//	s="a";
//	reve(s);
//	cout<<s<<endl;
//}
//void reverse(string &s)
//{
//	int start=0;
//	int end=0;
//	int ii=0;
//	char a;
//	int size=s.size();
//	string ss;
//    bool mark=false;
//	while(ii<size)
//	{
//		if(s[ii]!=' ')
//		{
//			if(mark)
//			{
//				ss=ss+' ';
//			}
//			ss=ss+s[ii];
//			mark=true;
//		}
//		ii++;
//	}
//	for(int i=0;i<ss.size()/2;i++)
//	{
//		a=ss[i];
//		ss[i]=ss[ss.size()-i-1];
//		ss[ss.size()-i-1]=a;
//	}
//	s=ss;
//	size=s.size();
//	while(end<size)
//	{
//		while(end<size)
//		{
//			if(s[end]==' ')
//				end++;
//			else
//			{				
//				break;
//			}
//		}
//		if(end==size&&start==0)
//		{
//			s="";
//			return;
//		}
//		start=end;
//		while(end<size)
//		{
//			if(s[end]!=' ')
//			   end++;
//			else
//				break;
//		}
//		end--;
//		for(int i=0;i<(end-start+1)/2;i++)
//		{
//			a=s[start+i];
//			s[start+i]=s[end-i];
//			s[end-i]=a;
//		}
//		end++;
//	}
//}
//void reve(string &s)
//{
//	vector<string> num;
//	int ii=0;
//	string ss;
//	bool mark=false;
//	while(ii<s.size())
//	{
//		if(s[ii]!=' ')
//		{
//			ss=ss+s[ii];
//			mark=true;
//		}
//		else
//		{
//			if(mark)
//			{
//				num.push_back(ss);
//				ss="";
//				mark=false;
//			}
//		}
//		ii++;
//	}
//	if(mark)
//		num.push_back(ss);
//	s="";
//	while(num.size()>1)
//	{
//		s=s+num.back();
//		s=s+' ';
//		num.pop_back();
//	}
//	if(num.size()>0)
//	s=s+num[0];
//}