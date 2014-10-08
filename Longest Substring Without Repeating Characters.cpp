//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int lengthOfLongestSubstring(string s); 
//
//int main()
//{
//	string a="qopubjguxhxdipfzwswybgfylqvjzhar";
//	int en=lengthOfLongestSubstring(a);
//	return 0;
//}
//
//int lengthOfLongestSubstring(string s)
//{
//	int hash[256];
//	for(int i=0;i<256;i++)
//		hash[i]=-1;
//	int currentStart=0;
//	int start=0;
//	int end=0;
//	int i=0;
//	for(;i<s.size();i++)
//	{
//		if(currentStart>hash[s[i]])
//		{
//			hash[s[i]]=i;
//		}
//		else
//		{
//			if(i-currentStart>(end-start))
//			{
//				start=currentStart;
//				end=i;
//			}
//			currentStart=hash[s[i]]+1;
//			hash[s[i]]=i;
//		}
//	}
//	if(i-currentStart>(end-start))
//	{
//		start=currentStart;
//		end=i;
//	}
//	if(end==0)
//	{
//		return s.size();
//	}
//	else
//	{
//		return end-start;
//	}
//}