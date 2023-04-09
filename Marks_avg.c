#include<stdio.h>
int main()
 {
     int sum = 0,i,n;
     float avg; ;
     int marks[100];
     printf ("Enter marks of 10 students:" ) ;
     for(i=0;i<=9;i++)
     {
         scanf("%d",&marks[i]);
         sum=sum+marks[i];
     }
     avg = sum/10 ;
     printf("Average marks = %0.2f", avg);
     return 0;
 }
