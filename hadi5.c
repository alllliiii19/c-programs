#include<stdio.h>
#include<math.h>

int main() {
double b,a,c,dis;
double root1,root2;

dis=b*b-4*a*c;

//condition for real and different roots
if(dis > 0) {
root1=(-b+ sqrt(dis))/(2*a);
root2=(-b- sqrt(dis))/(2*a);
printf("root1=%.2lf and root2=%.2lf",root1,root2);
}
//conditon for real and equal roots
else if(dis==0) {
root1=root2=-b/(2*a);
printf("root1= root2 = %.2lf",root1,root2)
}
