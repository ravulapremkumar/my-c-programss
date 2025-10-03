
#include<stdio.h>
int fun(){
int n=123;
return n%2;
}

int main(){
int result=fun();

if(result==0)
printf("evn");
else
printf("odd");
}
