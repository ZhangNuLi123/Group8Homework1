# 徐瑞阳的Demo
## 程序功能
一个描述二维坐标系中点对象的类Point
它具有下述成员函数：
1. –	计算极坐标的极半径：double r();
2. –	计算极坐标的极角：double theta();
3. –	计算与点p的距离：double distance(Point& p); 
   
   输出为点的极半径，极角以及与点p 的距离。


## 程序代码
```c++
#include<iostream>
#include<cmath>
using namespace std;
class point
{ 
	double x,y;
public:
	point(point &c);
 point(double a=0,double b=0)
	 	{x=a;y=b;}
	double r()
	{
		double r;
	r=sqrt(x*x+y*y);
	return r;
	}                    //求极半径
	double theta()
	{
		double t,k;
	k=y/x;
	t=atan(k);
	return t;
	}           //求极角
double distance(const point&p)         //计算与p点的距离
{
  return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
}
};
int main()
{
    point p(3,4);
        int x1,y1;
        cout<<"请输入一个横坐标和纵坐标";
        cin>>x1>>y1;
        point p1(x1,y1);
        cout<<"p1点的极半径为:"<<p1.r()<<endl;
    cout<<"p1点的极角为:"<<p1.theta()<<endl;
        cout<<"p1点相对于p点的距离为:"<<p1.distance(p)<<endl;
        return 0;
}
```
# 运行结果框图
![嘿嘿看不到吧](xry\233.jpg "老师真帅")

