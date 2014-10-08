//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> letterCombinations(string digits);
//void letter(string digits,vector<int>wei,int len,vector<string> phone,vector<string> &op);
//
//int main()
//{
//	string aa="23";
//	vector<string> n=letterCombinations(aa);
//	return 0;
//}
//
//vector<string> letterCombinations(string digits)
//{
//	vector<string> phone(10);
//	phone[0]=" ";
//	phone[1]="";
//	phone[2]="abc";
//	phone[3]="def";
//	phone[4]="ghi";
//	phone[5]="jkl";
//	phone[6]="mno";
//	phone[7]="pqrs";
//	phone[8]="tuv";
//	phone[9]="wxyz";
//	vector<string> num;
//	string one;
//	int len=0;
//	vector<int> wei(digits.size());
//    letter(digits,wei,len,phone,num);
//	return num;
//}
//
//void letter(string digits,vector<int>wei,int len,vector<string> phone,vector<string> &op)
//{
//	if(len==digits.size())
//	{
//		string a;
//		for(int i=0;i<digits.size();i++)
//		{
//			if(digits[i]-'0'==1)
//				continue;
//			a=a+phone[digits[i]-'0'][wei[i]];
//		}
//		op.push_back(a);
//		return;
//	}
//	for(int i=0;i<phone[digits[len]-'0'].size();i++)
//	{
//		wei[len]=i;
//		letter(digits,wei,++len,phone,op);
//		--len;
//	}
//	return;
//}