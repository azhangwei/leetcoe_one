//#include <iostream>
//
//using namespace std;
//
//int reverse(int x);
//
//int main()
//{
//	int x=-123;
//	int y=reverse(x);
//	return 0;
//}
//
//int reverse(int x)
//{
//	bool mark=false;
//	if(x<0)
//	{
//		mark=true;
//		x*=-1;
//	}
//	int y=0;
//	while(x)
//	{
//		y=y*10+x%10;
//		x=x/10;
//	}
//	if(mark)
//		y*=-1;
//	return y;
//}