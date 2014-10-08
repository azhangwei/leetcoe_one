//#include <iostream>
//using namespace std;
//
//bool isMatch(const char *s, const char *p);
//
//int main()
//{
//	    bool a1=isMatch("aaaaaaaaaaaaab","a*a*a*a*a*a*a*a*a*a*c"); 
//		bool a2=isMatch("aa","aa"); 
//		bool a3=isMatch("aaa","aa");
//		bool a4=isMatch("aa", "a*"); 
//		bool a5=isMatch("aa", ".*") ;
//		bool a6=isMatch("ab", ".*c") ;
//		bool a7=isMatch("aab", "c*a*b") ;
//	return 0;
//}
//
//bool isMatch(const char *s, const char *p)
//{
//	if(*p=='\0')
//		return *s=='\0';
//	if(*s=='\0')
//		return *p=='\0'||(*(p+1)=='*'&&*(p+2)=='\0');
//	if(*(p+1)=='\0')
//	{
//		return ((*s==*p||*p=='.')&&*(s+1)=='\0');
//	}
//	else
//	{
//		if(*(p+1)=='*')
//		{	
//			while(*p==*s||(*p=='.'&&*s!='\0'))
//			{
//				if(isMatch(s,p+2)) return true;
//				s++;
//			}
//			return isMatch(s,p+2);
//		}
//		else
//		{
//			if(*p!=*s&&*p!='.')
//				return false;
//			else
//				return isMatch(s+1,p+1);
//		}
//	}
//
//
//
//	//if (*p == '\0') return *s == '\0';
//	//if (*(p+1) != '*')
//	//{
//	//	return ((*p == *s) || (*p == '.' && *s != '\0')) && isMatch(s+1, p+1);
//	//}
//
//	//// next char is '*'
//	//while ((*p == *s) || (*p == '.' && *s != '\0')) 
//	//{
//	//	if (isMatch(s, p+2)) return true;
//	//	s++;
//	//}
//	//return isMatch(s, p+2);
//
//}