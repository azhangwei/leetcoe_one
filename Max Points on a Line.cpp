//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
// struct Point {
//     int x;
//     int y;
//     Point() : x(0), y(0) {}
//     Point(int a, int b) : x(a), y(b) {}
// };
//
//int maxPoints(vector<Point> &points) ;
//
//int main()
//{
//	Point a(0,0);
//	Point b(1,1);
//	Point c(1,-1);
//	vector<Point>n;
//	//n.push_back(a);
//	//n.push_back(b);
//	//n.push_back(c);
//	int te=maxPoints(n);
//
//	return 0;
//}
//
//int maxPoints(vector<Point> &points)
//{
//	  if(points.size()==0)
//		  return 0;
//	  int ans=0;
//      map<double,int>count;
//	  int linx=0;
//	  int same=0;
//	  int x,y,xx,yy;
//	  double k;
//	  for(int i=0;i<points.size();i++)
//	  {
//		  x=points[i].x;
//		  y=points[i].y;
//		  count.clear();
//		  linx=0;
//		  same=0;
//		  for(int j=0;j<points.size();j++)
//		  {
//			  if(i==j)
//				  continue;
//			  xx=points[j].x;
//			  yy=points[j].y;
//			  if(x==xx&&y==yy)
//			  {
//				  same++;
//				  continue;
//			  }
//			  if(x==xx)
//			  {
//				  linx++;
//				  continue;
//			  }
//			  k=double(yy-y)/double(xx-x);
//			  ++count[k];
//		  }
//		for(map<double,int>::iterator ii=count.begin();ii!=count.end();ii++)
//		{
//			if(ans<ii->second+same)
//				ans=ii->second+same;
//		}
//		if(ans<linx+same)
//			ans=linx+same;
//	}
//	
//	  return ans +1;
//}