#include <stdio.h>
#include <math.h>
double tool(double a,double b,double c,double d){
double x=sqrt(((c-a)*(c-a))+(d-b)*(d-b));
return x;
}
double masahat(double a,double b,double c,double d,double e,double f){
double x=(c-a)*(f-b)-(d-b)*(e-a);
if(x>=0){
return x/2;
}
else{
return -x/2;
}
}
int maxim(int x,int y){
if(x>y){
return x;
}
else{
return y;
}
}
int main(){
int n;
scanf("%d",&n);
int i=1;
double a,b,c,d,e,f,g,h;
double mohit;
double maxx=0;
for(i=1;i<=n;i++){
        scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&g,&h);\
mohit=tool(a,b,c,d)+tool(c,d,e,f)+tool(e,f,g,h)+tool(g,h,a,b);
double masahatkol;
masahatkol=masahat(a,b,c,d,e,f)+masahat(a,b,e,f,g,h);
printf("%.02lf",masahatkol);
printf("\n");
printf("%.02lf",mohit);
if((masahatkol/mohit)>maxx)
    maxx=masahatkol/mohit;
    printf("\n");
}
printf("%.02lf",maxx);
return 0;
}
