//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int maxArea(vector<int> &height);
//
//int main()
//{
//	vector<int> num(4);
//	num[0]=3;
//	num[1]=1;
//	num[2]=2;
//	num[3]=3;
//	int max=maxArea(num);
//	return 0;
//}
//
//int maxArea(vector<int> &height)
//{
//	//if(height.size()==2)
//	//	return height[0]<height[1]?height[0]:height[1];
//	//int mid=height.size()/2;
//	//vector<int>a;
//	//vector<int>b;
//	//for(int i=0;i<=mid;i++)
//	//	a.push_back(height[i]);
//	//for(int i=mid;i<height.size();i++)
//	//	b.push_back(height[i]);
//	//int aa=maxArea(a);
//	//int bb=maxArea(b);
//	//int tmp_max=aa>bb?aa:bb;
//	//int line;
//	//int h;
//	//int max=0;
//	//for(int i=0;i<mid;i++)
//	//	for(int j=mid;j<height.size();j++)
//	//	{
//	//		 line=j-i;
//	//		 h=height[i]<height[j]?height[i]:height[j];
//	//		 if(line*h>max)
//	//			 max=line*h;
//	//	}
// //   return tmp_max>max?tmp_max:max;
/////////////////////////////////////////////////////////////////////////////////////////¼ò½à·½·¨
//	int left=0;
//	int right=height.size()-1;
//	int max=0;
//	int a;
//	int b;
//	while(left<right)
//	{
//		a=right-left;
//		b=height[left]>height[right]?height[right]:height[left];
//		if(max<a*b)
//			max=a*b;
//		if(height[left]>height[right])
//			right--;
//		else
//			left++;
//	}
//	return max;
//}