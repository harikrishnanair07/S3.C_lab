#include<stdio.h>
#include<string.h>
int main(){
char s[100];
int i,n,c=0;
printf("Enter the string:"\n);
gets(s);
n=strlen(s);
for(i=0;i<n/2;i++){
if(s[i]==s[n-i-1]){
c++;
}
}
if(c==1){
printf("String is a palindrome\n");
}
else{
printf("String is not palindrome\n");
}
return 0;
}