#include <stdio.h>

int main(){
    int n,i,a[20],key=i,k=0;
     {
    printf("enter the no of element in array");
    scanf("%d",&n);}
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
printf("array element are:\n");
for(i=0;i<n;i++){

printf("a[%d]=%d\n",i,a[i]);}
printf(" enter the key");
scanf("%d",&key);
for(i=0;i<n;i++){
if(key==a[i])
{
k=1;
break;
}}
if(k==1){
    printf("\nelement is present at %d position",i);
}
   else{ 
       
        printf("\nelement %d not present",key);
    }
return 0;
}