#include<stdio.h>
int fun(int a,int b,int c){
return a+b;
//o
return c;
}
int main(){
int r=fun(1,2,"pre");
printf("%d\n",r);

}

