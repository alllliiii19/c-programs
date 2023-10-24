/* Display the following pattern:
 *
 **
***
****  */

int main() {

for(int i=1;i<=4;i++)
{
for(int k=1;k<=4-i;k++)
{
printf(" ",k);
}
for(int j=1;j<=i;j++)
{
    printf("*",j);
}
printf("\n");
}
return 0;
}
