#include<stdio.h>

int main()
{
int n,i,j,k,l=0,temp;
printf("enter the number of array element:");
scanf("%d",&n);
int a[n];
printf(" enter array element:\n ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
for(j=0;j<i+1;j++){
if(a[j]>a[i]){
temp=a[i];
for(k=i;k>=j;k--){
a[k]=a[k-1];}
a[j]=temp;
}  
       }printf ("passes%d :",i);  
    for(int k=0;k<n;k++) {
        printf("%d  ",a[k]);
    }
      printf ("\n");
   }
printf("the sorted array is:\n");
for(i=0;i<n;i++)
{printf("%d  ",a[i]);}
 return 0;   
}
