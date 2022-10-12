#include <stdio.h>
#include <stdlib.h>
int biggest(int a,int b, int c){
int big=0;
if (a>b && a >c){
 big=a;
}
else if (b>a && b>c){
 big=b;
 }
 else if (c>a && c>b){
 big=c;
 }
return big;
}
int main()
{
 printf("The biggest of them all is,%d",biggest(10,2,5));
 return 0;
}