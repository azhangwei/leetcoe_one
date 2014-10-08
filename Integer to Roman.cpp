//#include <iostream>
//
//using namespace std;
//string intToRoman(int num);
//int romanToInt(string s);
//int main()
//{
//	int num=2333;
//	string a=intToRoman(num);
//	int b=romanToInt("CMDCD");
//	return 0;
//}
//
//string intToRoman(int num)
//{
//	int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
//	string r[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
//	int i=0;
//	string re="";
//	while(num>0)
//	{
//		while(num>=a[i])
//		{
//			re+=r[i];
//			num-=a[i];
//		}
//		i++;
//	}
//	return re;
//}
//int romanToInt(string s)
//{
//	int mp[256];
//	mp['I']=1;
//	mp['V']=5;
//	mp['X']=10;
//	mp['L']=50;
//	mp['C']=100;
//	mp['D']=500;
//	mp['M']=1000;
//	int t,re,pre;
//	re=pre=mp[s[0]];
//	for(t=1;t<s.size();t++)
//	{
//		if(mp[s[t]]<=pre)
//			re+=mp[s[t]];
//		else
//			re=re-2*pre+mp[s[t]];
//		pre=mp[s[t]];
//	}
//	return re;
//}
