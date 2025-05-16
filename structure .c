
#include <stdio.h>
# include <string.h>
struct studentinfo{
char name[10];
int rollno;
float cgpa;
char class[10];
};
int main(){
struct studentinfo si[8];
int i,k,d,u,ch,n,p;
for(i=0;i<4;i++){
printf("Enter the Student information\n");
printf("enter the name of student:\n");
scanf("%s",si[i].name);
printf("enter the roll no\n");
scanf("%d",&si[i].rollno);
printf("enter the cgpa\n");
scanf("%f",&si[i].cgpa);
printf("enter the class\n");
scanf("%s",si[i].class);}
for(i=0;i<4;i++){
printf("student information\n");
printf("name of student :%s\n",si[i].name);
printf("roll no ofstudent is:%d\n",si[i].rollno);
printf("cgpa of student is:%f\n",si[i].cgpa);
printf("class of student is:%s\n",si[i].class);}
do{
printf("1.insertion\n 2.deletion\n 3.updating\n 4.exit\n");
printf("enter your choice to perform operation ");
scanf("%d",&ch);
switch(ch)
{
    case 1:printf(" insertion of element \n");
    printf ("positin at which you want insert the element\n");
    scanf("%d",&k);
    printf ("enter information at %d Position\n",k);
    for(i=3;i>=k;i--){
 strcpy(si[i+1].name,si[i].name);
        si[i+1].rollno=si[i].rollno;
        si[i+1].cgpa=si[i].cgpa;
strcpy(si[i+1].class,si[i].class);}
    printf("enter the name of student:\n");
scanf("%s",si[k].name);
printf("enter the roll no\n");
scanf("%d",&si[k].rollno);
printf("enter the cgpa\n");
scanf("%f",&si[k].cgpa);
printf("enter the class\n");
scanf("%s",si[k].class);
for(i=0;i<5;i++){
   printf("name of student :%s\n",si[i].name);
printf("roll no ofstudent is:%d\n",si[i].rollno);
printf("cgpa of student is:%f\n",si[i].cgpa);
printf("class of student is:%s\n",si[i].class);}
    break;
    case 2: printf(" deletion of element");
       printf ("position at which you want delete  the element\n");
    scanf("%d",&d);
    printf ("enter information at %d Position\n",d);
for(i=d;i<=4;i++){
 strcpy(si[i-1].name,si[i].name);
        si[i-1].rollno=si[i].rollno;
        si[i-1].cgpa=si[i].cgpa;
strcpy(si[i-1].class,si[i].class);}
    printf("the modified data is \n");
for(i=0;i<3;i++){
   printf("name of student :%s\n",si[i].name);
printf("roll no ofstudent is:%d\n",si[i].rollno);
printf("cgpa of student is:%f\n",si[i].cgpa);
printf("class of student is:%s\n",si[i].class);}
    break;
    case 3: printf ("updating of eelement");
    printf(" updating  of element \n");
    printf ("positin at which you want update the element\n");
    scanf("%d",&u);
    printf ("enter information at %d Position\n",u);
    for(i=3;i>u;i--){
 strcpy(si[i].name,si[i].name);
        si[i].rollno=si[i].rollno;
        si[i].cgpa=si[i].cgpa;
strcpy(si[i].class,si[i].class);}
    printf("enter the name of student:\n");
scanf("%s",si[u].name);
printf("enter the roll no\n");
scanf("%d",&si[u].rollno);
printf("enter the cgpa\n");
scanf("%f",&si[u].cgpa);
printf("enter the class\n");
scanf("%s",si[u].class);
for(i=0;i<4;i++){
   printf("name of student :%s\n",si[i].name);
printf("roll no ofstudent is:%d\n",si[i].rollno);
printf("cgpa of student is:%f\n",si[i].cgpa);
printf("class of student is:%s\n",si[i].class);}
    break;
    case 4:printf("Exiting program..\n");
    default:printf("wrong choice");
} 
}while(ch!=4);
return 0;
    
}

