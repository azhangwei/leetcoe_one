//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//string longestCommonPrefix(vector<string> &strs);
//int main()
//{
//	vector<string>num(3);
//	num[1]="absssew";
//	num[2]="absssqq";
//	num[0]="absc";
//	string a=longestCommonPrefix(num);
//	return 0;
//}
//string longestCommonPrefix(vector<string> &strs)
//{
//	int num=strs.size();
//	char a;
//	int j=0;
//	string op;
//	if(num==0)
//		return op;
//	while(1)
//	{
//		if(j<strs[0].size())
//			a=strs[0][j];
//		int i;
//		for(i=1;i<num;i++)
//		{
//		  if(j<strs[i].size())
//			  if(strs[i][j]==a)
//				 continue;
//			break;
//		}
//		if(i==num)
//			op=op+a;
//		else
//			break;
//		j++;
//	}
//	return op;
//}