#include<stdio.h>
void fun(int n,int sum,int avg,int count ){
while(n>0){
sum=sum+(n%10);
n=n/10;
count++;
}
if(count>0){
avg=sum/count;
printf("avg:%d\n",avg);
printf("the sum:%d\n:",sum);
}


}
int main()
{
fun(1236,0,0,0);
}
