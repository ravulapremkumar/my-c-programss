#include<stdio.h>
int fun(int a){
return a%2;
}
int main(){
int result=fun(123);
if(result==0)
printf("even");
else
printf("oddd");
}


