#include<stdio.h>
int main(){
int n,i,c=0;
printf("Enter a natural number:");
scanf("%d",&n);
for(i=0;i<n/2;i++){
if(n%i==0){
printf("%d is not a prime number:",n);
break;
}
}
if(c==0){
printf("%d is a prime number",n);
}
return 0;
}