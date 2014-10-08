//#include <iostream>
//
//using namespace std;
//
//int atoi(const char *str);
//
//int main()
//{
//	const char *str="2147483648";
//	int yy=10522545459;
//	int y=atoi(str);
//	return 0;
//}
//int atoi(const char *str)
//{
//	const char *tmp=str;
//	if(tmp==NULL)
//		return 0;
//	int y=0;
//	int minus=0;
//	int add=0;
//	bool mark=false;
//	bool chao=false;
//	while(*tmp!='\0')
//	{
//		if((*tmp>'9'||*tmp<'0')&&(*tmp!=' '&&*tmp!='0'&&*tmp!='+'&&*tmp!='-'))
//			mark=true;
//		if(mark)
//		{
//		   if(*tmp<'0'||*tmp>'9')
//				  break;
//		}
//		if(*tmp=='-')
//		{
//		    minus++;
//			tmp++;
//			mark=true;
//			continue;
//		}
//		if(*tmp=='+')
//		{
//			add++;
//			tmp++;
//			mark=true;
//			continue;
//		}
//		if(*tmp==' ')
//		{
//			tmp++;
//			continue;
//		}
//		int nu=int(*tmp-'0');
//		if(y>214748364)
//		{
//			y=2147483647;
//			chao=true;
//			break;
//		}
//		if(y==214748364&&nu>7)
//		{
//			y=2147483647;
//			chao=true;
//			break;
//		}
//		y=y*10+nu;
//		tmp++;
//		mark=true;
//	}
//	if(minus==1&&y==2147483647&&chao==true)
//		return -2147483648;	
//	if(minus==1&&y==2147483647&&chao==false)
//		return -2147483647;
//	if(minus==1)
//		return -1*y;
//	return y;
//
//	
//}