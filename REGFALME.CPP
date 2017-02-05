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
 float a,b,m;
 cout<<"Enter a and b-:";
 cin>>a>>b;
 float fa=f(a);
 float fb=f(b);
 if(fa*fb>0)
 {
  cout<<"interval is invalid";
  getch();
 }
 else
 {
  m=(a*fb - b*fa)/(fb-fa);
  float fm=f(m);
  if(fm>-0.0001 && fm<0.0001)
  {
   cout<<"root is :"<<m;
   getch();
  }
  else
  {
   while(fm>0.0001 || fm<-0.0001)
  {
   if(fa*fm>0)
   {
    a=m;
   }
   else
   {
    b=m;
   }
   m=(a*fa-b*fa)/(fb-fa);
   fm=f(m);
  }
 }
 cout<<"root is "<<m;
 }
 getch();
}
