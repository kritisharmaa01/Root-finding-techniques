#include<iostream.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
 return(x*x-x-1);
}
void main()
{
 clrscr();
 float a,b,m,e=0.0001;
 cout<<"Enter a and b-:";
 cin>>a>>b;
 int i=1;
 float fa=f(a);
 float fb=f(b);
 if(fa*fb>0)
 {
  cout<<"interval is invalid";
  getch();
 }
 else
 {
  while(fm>0.0001 || fm<-0.0001)
  {
   cout<<"step :"<<i<<"\tf(m) "<<fm<<"\tm :"<<m;
   if(fa*fm>0)
   {
    a=m;
   }
   else
   {
    b=m;
   }
   m=(a+b)/2;
   fm=f(m);
   i++;
  }
 }
 cout<<"step :"<<i<<"\tf(m): "<<fm<<"\tm :"<<m<<endl;
 cout<<"root is "<<m;
 getch();
}