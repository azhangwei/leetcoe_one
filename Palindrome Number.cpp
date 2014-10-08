//#include <iostream>
//
//using namespace std;
//
//bool isPalindrome(int x);
//
//int main()
//{
//	int a=10000221;
//	bool b=isPalindrome(a);
//	return 0;
//}
//bool isPalindrome(int x)
//{
//	int a=x;int h=1;
//	while(a/10!=0)
//	{
//		h*=10;
//		a=a/10;
//	}
//	a=x;
//	while(a>0)
//	{
//		if(a/h==a%10)
//		{
//			a=a%h;
//			a/=10;
//			h=h/100;
//			continue;
//		}
//		else
//			return false;
//	}
//	return true;
//}