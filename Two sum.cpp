//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> twoSum(vector<int> &numbers, int target); 
//
//int main()
//{
//	vector<int>num;
//	vector<int>oup;
//	int target=0;
//	num.push_back(0);
//	num.push_back(1);
//	num.push_back(2);
//	num.push_back(0);
//	oup=twoSum(num,target);
//	return 0;
//}
//
//vector<int> twoSum(vector<int> &numbers, int target)
//{
//	int end=numbers.size();
//	int start_one=0;
//	int start_two=end-1;
//	vector<int>num=numbers;
//	sort(numbers.begin(),numbers.end());
//	vector<int>sum;
//	while(1)
//	{
//		if(numbers[start_two]+numbers[start_one]<target)
//		{
//			start_one++;
//		}
//		if(numbers[start_two]+numbers[start_one]>target)
//			start_two--;
//		if(numbers[start_two]+numbers[start_one]==target)
//			break;
//	}
//	int i=0;
//	int one=numbers[start_one];
//	int two=numbers[start_two];
//	int index1;
//	int index2;
//	for(int i=0;i<numbers.size();i++)
//	{
//		if(num[i]==one)
//			index1=i;
//		if(num[numbers.size()-i-1]==two)
//			index2=numbers.size()-i-1;
//	}
//	index1++;
//	index2++;
//	if(index1<index2)
//	{
//		sum.push_back(index1);
//		sum.push_back(index2);
//	}
//	else
//	{
//		sum.push_back(index2);
//		sum.push_back(index1);
//	}
//	return sum;
//}