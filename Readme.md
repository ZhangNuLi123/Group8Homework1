# **这是我们三个成员的总Readme**
---
---
---
# 张冲’s demo     一元二次方程计算器
## 计算器功能
> 使用该程序能够迅速求出一元二次方程组的根的情况
## 计算器的使用
> 运行程序之后，程序会提示手动输入方程的系数，依次输入方程二次项系数，一次项系，常数后，程序会给出该方程的根
## 计算器代码展示
~~~c++
#include <iostream>
#include <cmath>
using namespace std;
int main()
{double a,b,c,m,p,q,det,x1,x2;
    cout<<"请输入方程的系数\n";
	cin>>a>>b>>c; 
	det=pow(b,2)-4*a*c;
    if(a==0&&b==0) 
    {   
    if(c==0)    cout<<"方程有无数解\n";
        else        cout<<"方程无解\n";
    }
    else if(a==0&&b!=0)
    {
    m=-c/b;
    cout<<"该方程为一元一次方程，解x="<<double(m)<<endl;
    }
    else if(a!=0)	
    {
        p=-b/(2*a);
        if(det>0) 
        {q=sqrt(det)/(2*a);   x1=p+q;    x2=p-q;
cout<<"一元二次方程有两不等根x1="<<double(x1)<<"\t"<<"x2="<<double(x2)<<endl;      
        }
	else if(det==0)
    {
        x1=-b/(2*a); x2=-b/(2*a);cout<<"方程有两相等实根x1=x2="<<double(x1)<<"\n";
    }
	else
    {
        q=sqrt(-det)/(2*a);
	   if(a>0)
       {cout<<"方程有两不等虚根x1="<<double(p)<<'+'<<double(q)<<'i'<<"\t"<<"x2="<<double(p)<<'-'<<double(q)<<'i'<<endl;
       }
	else
    cout<<"方程有两不等虚根x1="<<double(p)<<'+'<<double(-q)<<'i'<<"\t"<<"x2="<<double(p)<<'-'<<double(-q)<<'i'<<endl;
    }
	};
 return 0;
}  
~~~
## 计算器功能展示
> ### 方程有无数解
![无数解](U201611922/image/无数解.jpg "该方程有无数解")
> ### 方程无解
![无解](U201611922/image/无解.jpg "该方程无解")
> ### 方程为一次方程
![一次方程](U201611922/image/一次方程.jpg "该方程为一次方程")
> ### 方程有两不等实根
![不等根](U201611922/image/不等实根.jpg "该方程有两不等实根")
> ### 方程有两相等实根
![等根](U201611922/image/相等实根.jpg "该方程有两相等实根")
> ### 方程有两共轭虚根
![虚根](U201611922/image/虚根.jpg "该方程有两共轭虚根")
---
---
---
# 亢卓凡‘s demo


## 用途
---
1. 输入三角形三边长
2. 根据三角形的三边求三角形的面积和周长

没错这是**一道经典的c艹题目**。
只会一点c艹的**菜鸡**觉得，当年刚学完c艹后的我已经走到了个人的编程巅峰。
而今已过一年半载，虽说这段代码差强人意，没有涉及指针数组及一些更复杂的应用，
但按照**展示目前自我水平**的要求，把它祭出来还是很适合的。

![](U201611924\markdown用图\被虐.jpg)

## 代码
---
```c++
#include <iostream>
#include <cmath>
using namespace std;
class sjx
{
	int a, b, c;
public:
	void setbian(int aa, int bb, int cc)
	{
		a = aa; b = bb; c = cc;
	}
	void showbianchang()
	{
		cout << "各边长为" << a << ',' << b << ',' << c << endl;
	}
	double mianji()
	{
		int p = (a + b + c) / 2;
		return sqrt(p*(p - a)*(p - b)*(p - c));
	}
	double zhouchang()
	{
		return (a + b + c);
	}
};
int main()
{
	sjx x;
	int a, b, c;
	cout << "请输入三角形三边长：" << endl;
	cin >> a >> b >> c;
	x.setbian(a, b, c);
	cout << "三角形面积为：" << x.mianji() << endl;
	cout << "三角形周长为：" << x.zhouchang() << endl;
	cout << "是否显示各边长？是--1 否--0" << endl;
	int t;
	cin >> t;
	if (t == 1)
		x.showbianchang();
	return 0;
}
```
## 执行图片
---
![？？？](U201611924\markdown用图\yxt.png '我终于加载出来了')
---
---
---
# 徐瑞阳's Demo
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
![嘿嘿看不到吧](U201611927\xry\233.jpg "老师真帅")

