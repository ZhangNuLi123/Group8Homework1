// ConsoleApplication2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


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
