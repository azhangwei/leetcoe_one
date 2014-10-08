//#include <iostream>
//#include <string>
//
//using namespace std;
//string convert(string s, int nRows);
//int main()
//{
//	string a="PAYPALISHIRING";
//	string aa="abc";
//	string aaa="abcd";
//	string aaaa="abcde";
//	string bb="abcdef";
//	string b=convert(bb,5);
//	return 0;
//}
//string convert(string s, int nRows)
//{
//    int num=2*nRows-2;
//	if(nRows==1)
//		num=1;
//	string op;
//	int k=0;
//	for(int i=0;i<nRows;i++)
//	{
//		k=i;
//	    while(k<s.size())
//		{
//			op=op+s[k];
//			if(i>0&&i<nRows-1)
//				if(k+2*(nRows-i-1)<s.size())
//				   op=op+s[k+2*(nRows-i-1)];
//			k+=num;
//		}
//	}
//	return op;
//}
////PAHNAPLSIIGYIR