#include<stdio.h>
int main(){
int n,r,sum=0,t;
scanf("%d",&n);
t=n;
while(n>0){
r=n%10;
sum+=(rem*rem*rem);
n=n/10;
}
if(t==sum){
printf("%d is an armstrong number",t);
}
else{
("%d is not an armstrong number",t);
}
return 0;
}