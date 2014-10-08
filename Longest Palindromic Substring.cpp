//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string longestPalindrome(string s);
//
//int main()
//{
//	string a="ccd";
//	string s=longestPalindrome(a);
//	return 0;
//}
//
//string longestPalindrome(string s)
//{
//	int min_loc=0;
//	int max_oup_two=0;
//	int loc=0;
//		string line_ou;
//		for(int j=0;j<s.size()-1;j++)
//			line_ou=line_ou+s[j]+' ';
//		line_ou=line_ou+s[s.size()-1];
//		int *F_two=new int[2*s.size()-1];
//		for(int j=0;j<(2*s.size()-1);j++)
//			F_two[j]=1;
//		if(s.size()>1)
//			if(line_ou[0]==line_ou[2])
//				F_two[1]=3;
//		min_loc=1;
//		if(s.size()>1)
//		{
//			max_oup_two=F_two[1];
//			loc=1;
//		}
//		else
//			max_oup_two=1;
//		for(int j=2;j<(2*s.size()-1);j++)
//		{
//			if(max_oup_two>=2*(2*s.size()-1-j))
//				break;
//			F_two[j]=F_two[2*min_loc-j]>F_two[min_loc]-2*(j-min_loc)?F_two[min_loc]-2*(j-min_loc):F_two[2*min_loc-j];
//			if(F_two[j]<1)
//				F_two[j]=1;
//			for(int k=F_two[j]/2+1;;k++)
//			{
//				if(j-k<0)
//					break;
//				if(j+k>=(2*s.size()-1))
//					break;
//				if(line_ou[j-k]==line_ou[j+k])
//					F_two[j]+=2;
//				else
//					break;
//			}
//			int tmp=F_two[j];
//			if(max_oup_two<tmp||(max_oup_two==tmp&&line_ou[j]==' '))
//			{
//				max_oup_two=tmp;
//				loc=j;
//			}
//			if((j+F_two[j]/2)>(j-1+F_two[j-1]/2))
//				min_loc=j;
//		}
//		string oo;
//		oo=oo+line_ou[loc];
//		for(int ii=0;ii<max_oup_two/2;ii++)
//		{
//			oo=line_ou[loc-ii-1]+oo+line_ou[loc+ii+1];
//		}
//		string os;
//		for(int ii=0;ii<oo.size();ii++)
//		{
//			if(oo[ii]!=' ')
//			os=os+oo[ii];
//		}
//		delete []F_two;
//		return os;
//}