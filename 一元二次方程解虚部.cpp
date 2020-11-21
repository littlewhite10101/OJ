#include<stdio.h>
//#include<math.h>
//int main ()
//{
//    double a,b,c,d,x1,x2,m,n;
//    scanf("%lf%lf%lf",&a,&b,&c);
//    d=b*b-4*a*c;
//    if (d>=0)
//    {
//        x1=(-b-sqrt(d))/(2*a);
//        x2=(-b+sqrt(d))/(2*a);
//        if (x1>=x2)
//            printf("%.2lf %.2lf\n",x1,x2);
//        else
//            printf("%.2lf %.2lf\n",x2,x1);
//    }
//    else{
//		m=-b/(2*a);
//		n=sqrt(-d)/(2*a);
//		printf("%.2f+%.2fi %.2f-%.2fi",m,n,m,n);
//		
//} 
//        
//}






#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double s;
	double x1,x2,tem;
	double m,n;
	
	scanf("%d%d%d",&a,&b,&c);
	s=b*b-4*a*c;
	if(s>=0)
	{
		x1=(-b+sqrt(s))/(2*a);
		x2=(-b-sqrt(s))/(2*a);
       if (x1>=x2)
           printf("%.2lf %.2lf\n",x1,x2);
       else
           printf("%.2lf %.2lf\n",x2,x1);
		
		printf("%.2f %.2f",x1,x2);
	}
	else
	{
		m=-b/(2*a);
		n=sqrt(-s)/(2*a);
		printf("%.2f+%.2fi %.2f-%.2fi",m,n,m,n);
	}
	return 0;
}








#include<stdio.h>   
int main()  
{     
   double a,b,c,x1,x2,m,n;  
   scanf("%lf %lf %lf",&a,&b,&c); 
   if(a==0)
   printf("%.2f %.2f\n",-c/b,-c/b); 
   else if(b*b-4*a*c<0)
   {
     m=-b/(2*a);  
  n=sqrt(4*a*c-b*b);
     if(a>0)
  printf("%.2f+%.2fi %.2f-%.2fi\n", m,n/(2*a),m,n/(2*a) );
     else 
  printf("%.2f+%.2fi %.2f%.2fi\n", m,-n/(2*a),m,n/(2*a));
   }
   else
    {
     x1=(-b+sqrt(b*b-4*a*c))/(2*a);  
     x2=(-b-sqrt(b*b-4*a*c))/(2*a);  
     if(x1>x2)printf("%.2f %.2f",x1,x2);  
     else printf("%.2f %.2f",x2,x1);  
    } 
    return 0;  
} 
