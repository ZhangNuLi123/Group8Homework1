# 一元二次方程计算器
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
![无数解](image/无数解.jpg "该方程有无数解")
> ### 方程无解
![无解](image/无解.jpg "该方程无解")
> ### 方程为一次方程
![一次方程](image/一次方程.jpg "该方程为一次方程")
> ### 方程有两不等实根
![不等根](image/不等实根.jpg "该方程有两不等实根")
> ### 方程有两相等实根
![等根](image/相等实根.jpg "该方程有两相等实根")
> ### 方程有两共轭虚根
![虚根](image/虚根.jpg "该方程有两共轭虚根")