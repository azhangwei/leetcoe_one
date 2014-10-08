//#include <iostream>
//
//using namespace std;
//
//int divide(int dividend, int divisor);
//
//int main()
//{
//	int a=divide(-2147483648,-2147483648);
//	return 0;
//}
//
//int divide(int dividend, int divisor)
//{
//	int num=1;
//	int a=1;
//	int b=1;
//	int tmp_divisor;
//	int total=0;
//	int add=0;
//	bool too_max=false;
//	if(dividend==-2147483648)
//	{
//		dividend=2147483647;
//		add=1;
//		a=-1;
//		if(divisor==1)
//			return -2147483648;
//
//	}
//	else if(dividend<0)
//	{
//		dividend=-1*dividend;
//		a=-1;
//	}
//	if(dividend==0)
//		return 0;
//	if(divisor==-2147483648)
//	{
//		if(dividend==2147483647&&add==1)
//			return 1;
//		else
//		   return 0;
//	}
//	if(divisor<0)
//	{
//		divisor*=-1;
//		b=-1;
//	}
//	while(dividend>=divisor)
//	{
//		num=0;
//		tmp_divisor=divisor;
//		while(dividend>=tmp_divisor)
//		{
//			if(tmp_divisor>2147483647/2)
//			{
//				break;
//			}
//			tmp_divisor=tmp_divisor<<1;
//			if(num==0)
//				num=1;
//			else
//				num=num<<1;
//			too_max=true;
//		}
//		if(too_max)
//		{
//			total+=num;
//			dividend-=tmp_divisor>>1;
//			dividend+=add;
//			add=0;
//			too_max=false;
//		}
//		else
//		{
//			 if(dividend>=tmp_divisor)
//			 {
//				 dividend-=tmp_divisor;
//				 total+=1;
//				 dividend+=add;
//				 add=0;
//			 }
//		}
//
//	
//	}
//	return a*b*total;
//}