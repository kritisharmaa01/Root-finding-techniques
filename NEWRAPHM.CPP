#include<iostream.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
 return(x*x-x-1);
}
float dif(float x)
{
 return(2*x-1);
}
void main()
{
 clrscr();
 float a,m;
 cout<<"Enter a -:";
 cin>>a;
 float fa=f(a);
 float ffa = dif(a);
 m=a-(fa/ffa);
 float fm=f(m);
 int i=1;
 if(fm>=-0.0001 && fm<=0.0001)
 {
  cout<<"root is "<<m;
  getch();
 }
 else
 {
  while(fm<-0.0001 || fm>0.0001)
  {
   cout<<"Step 1 "<<i<<"\tf((m) "<<fm<<"\tm "<<m<<endl;
   a=m;
   fa=f(a);
   ffa=dif(a);
   m=a-(fa/ffa);
   fm=f(m);
   i++;
  }
 }
 cout<<"step :"<<i<<"\tf(m): "<<fm<<"\tm :"<<m<<endl;
 cout<<"root is : "<<m;
 getch();
}



