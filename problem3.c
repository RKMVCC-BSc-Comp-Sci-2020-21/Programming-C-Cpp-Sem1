#include<stdio.h>
int main(){
int i=-3,j=3;
printf("!i=%d",!i);
printf("\n !j*1=%d",!j*1);
if(!i+!j*1)
printf("\n Inside if");
else printf("\n Inside else");
return 0;
}
