//#include<iostream>
//#include<vector>
//
//using namespace std;
//
// int evalRPN(vector<string> &tokens);
//int main()
//{
//	vector<string> ss;
//	ss.push_back("3");
//	ss.push_back("-4");
//	ss.push_back("+");
//	//ss.push_back("/");
//	//ss.push_back("+");
//	int sum=evalRPN(ss);
//	cout<<sum;
//}
//int evalRPN(vector<string> &tokens)
//{
//	string s;
//	vector<int>num;
//	int sum=0;
//	int a,b;
//	string add="+";
//	string minus="-";
//	string mix="*";
//	string chu="/";
//	for(vector<string>::iterator i=tokens.begin();i!=tokens.end();i++)
//	{
//		sum=0;
//		s=*i;
//		if(s.compare(add)==0)
//		{
//			a=num.back();
//			num.pop_back();
//			b=num.back();
//			num.pop_back();
//			sum=a+b;
//			num.push_back(sum);
//			continue;
//		}
//		if(s.compare(minus)==0)
//		{
//			a=num.back();
//			num.pop_back();
//			b=num.back();
//			num.pop_back();
//			sum=b-a;
//			num.push_back(sum);
//			continue;
//		}
//		if(s.compare(mix)==0)
//		{
//			a=num.back();
//			num.pop_back();
//			b=num.back();
//			num.pop_back();
//			sum=b*a;
//			num.push_back(sum);
//			continue;
//		}
//		if(s.compare(chu)==0)
//		{
//			a=num.back();
//			num.pop_back();
//			b=num.back();
//			num.pop_back();
//			sum=b/a;
//			num.push_back(sum);
//			continue;
//		}
//		bool mark_fu=false;
//		for(int i=0;i<s.size();i++)
//		{
//			if(s[i]=='-')
//			{   
//				mark_fu=true;
//				continue;
//			}
//			sum=sum*10+int(s[i]-'0');
//		}
//		if(mark_fu)
//			sum*=-1;
//		num.push_back(sum);
//	}
//	return num[0];
//}