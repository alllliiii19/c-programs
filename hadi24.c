/*Display the following pattern:
**
***
****
*****   */


#include<stdio.h>

int main() {

for(int i=1;i<=4;i++)
{
for(int j=1;j<=i+1;j++)
{
printf("*",j);
}
printf("\n");
}
return 0;
}




