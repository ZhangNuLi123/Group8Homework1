#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c,m,p,q,det,x1,x2;
    cout<<"�����뷽�̵�ϵ��\n";
	cin>>a>>b>>c;
	det=pow(b,2)-4*a*c;
  if(a==0&&b==0)
  {     
	  if(c==0)
      cout<<"������������\n";
	  else
      cout<<"�����޽�\n";
  }
  else if(a==0&&b!=0)
  {
	  m=-c/b;
	  cout<<"��һԪһ�η��̽�x="<<double(m)<<endl;
  }
  else if(a!=0)
  {
	  p=-b/(2*a);
	   if(det>0)  
	   {
		   q=sqrt(det)/(2*a);   
		   x1=p+q;  
		   x2=p-q;
           cout<<"һԪ���η����������ȸ�x1="<<double(x1)<<"\t"<<"x2="<<double(x2)<<endl;
	   }
	   else if(det==0)
       {
		   x1=-b/(2*a); x2=-b/(2*a);cout<<"�����������ʵ��x1=x2="<<double(x1)<<"\n";
	   }
	   else
       {
		   q=sqrt(-det)/(2*a);
		   if(a>0)
		   { 
			   cout<<"���������������x1="<<double(p)<<'+'<<double(q)<<'i'<<"\t"<<"x2="<<double(p)<<'-'<<double(q)<<'i'<<endl;
		   }
		   else
cout<<"���������������x1="<<double(p)<<'+'<<double(-q)<<'i'<<"\t"<<"x2="<<double(p)<<'-'<<double(-q)<<'i'<<endl;
	   }
  };
  return 0;
}
