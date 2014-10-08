//#include <iostream>
//#include <map>
//#include <vector>
//#include <string>
//using namespace std;
//
//vector<int> findSubstring(string S, vector<string> &L);
//
//int main()
//{
//	vector<string>L;
//	L.push_back("fooo");
//	L.push_back("barr");
//	L.push_back("wing");
//	L.push_back("ding");
//	L.push_back("wing");
//	string S="lingmindraboofooowingdingbarrwingmonkeypoundcake";
//	vector<int> en=findSubstring(S,L);
//	return 0;
//}
//
//vector<int> findSubstring(string S, vector<string> &L)
//{
//	map<string,int> ma;
//	vector<int>enp;
//	int heng=0;
//	int len=L[0].size();
//	int total=len*L.size();
//	if(total>S.size())
//		return enp;
//	for(int i=0;i<L.size();i++)
//	{
//		++ma[L[i]];
//		for(int j=0;j<len;j++)
//		{
//			heng+=int(L[i][j]);
//		}
//	}
//	vector<int>tmp;
//	int tmp_heng=0;
//	for(int i=0;i<total;i++)
//	{
//	     tmp_heng+=int(S[i]);
//	}
//	if(tmp_heng==heng)
//		tmp.push_back(0);
//	for(int i=total;i<S.size();i++)
//	{
//		tmp_heng+=int(S[i]);
//		tmp_heng-=int(S[i-total]);
//		if(tmp_heng==heng)
//			tmp.push_back(i-total+1);
//	}
//	int wei=0;
//	map<string,int>tmp_ma;
//	for(int i=0;i<tmp.size();i++)
//	{
//		tmp_ma=ma;
//		wei=tmp[i];
//		int j;
//		for( j=0;j<L.size();j++)
//		{
//			string tmp_s(S,wei+len*j,len);
//			if(tmp_ma.count(tmp_s)==0)
//				break;
//			else
//			{
//				if(tmp_ma[tmp_s]==1)
//					tmp_ma.erase(tmp_s);
//				else
//				{
//					tmp_ma[tmp_s]--;
//				}
//			}
//		}
//		if(j==L.size())
//			enp.push_back(wei);
//	}
//	return enp;
//}
