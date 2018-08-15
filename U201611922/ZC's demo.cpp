#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c,m,p,q,det,x1,x2;
    cout<<"请输入方程的系数\n";
	cin>>a>>b>>c;
	det=pow(b,2)-4*a*c;
  if(a==0&&b==0)
  {     
	  if(c==0)
      cout<<"方程有无数解\n";
	  else
      cout<<"方程无解\n";
  }
  else if(a==0&&b!=0)
  {
	  m=-c/b;
	  cout<<"该一元一次方程解x="<<double(m)<<endl;
  }
  else if(a!=0)
  {
	  p=-b/(2*a);
	   if(det>0)  
	   {
		   q=sqrt(det)/(2*a);   
		   x1=p+q;  
		   x2=p-q;
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
		   { 
			   cout<<"方程有两不等虚根x1="<<double(p)<<'+'<<double(q)<<'i'<<"\t"<<"x2="<<double(p)<<'-'<<double(q)<<'i'<<endl;
		   }
		   else
cout<<"方程有两不等虚根x1="<<double(p)<<'+'<<double(-q)<<'i'<<"\t"<<"x2="<<double(p)<<'-'<<double(-q)<<'i'<<endl;
	   }
  };
  return 0;
}
