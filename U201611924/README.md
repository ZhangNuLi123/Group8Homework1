
# 对所编demo的描述

## 功能
---
1. 输入三角形三边长
2. 根据三角形的三边求三角形的面积和周长

没错这是**一道经典的c艹题目**。
只会一点c艹的**菜鸡**觉得，当年刚学完c艹后的我已经走到了个人的编程巅峰。
而今已过一年半载，虽说这段代码差强人意，没有涉及指针数组及一些更复杂的应用，
但按照**展示目前自我水平**的要求，把它祭出来还是很适合的。

![](markdown用图\被虐.jpg)

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
		cout << "各边长为：" << a << ',' << b << ',' << c << endl;
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
![？？？](markdown用图\yxt.png '我终于加载出来了')