#include<stdio.h>
//#include<stdlib.h>
#include "head.h"
int average;





int main()
{
    printf("number of students in you school\n");
    int n;
    scanf("%d",&n);
    student ob[n];
    for(int i=0;i<n;i++)
    {
    printf("enter reg no\n");
      scanf("%d",&ob[i].reg_no);
     printf("enter name\n");
      scanf("%s",ob[i].name);
    printf("enter maths_mar and eng and telugu marks\n");
    scanf("%d%d%d",&ob[i].maths_mar,&ob[i].eng_mar,&ob[i].telugu_mar);
    int x=avg(ob[i].maths_mar,ob[i].eng_mar,ob[i].telugu_mar);
    printf("average marks of the student is %d\n",x);
    char ch= grade(x);
     printf("grade of the student is %c\n",ch);
    //printf("%d",ob[i].maths_mar);
    //avg(ob[i].maths_mar,ob[i].eng_mar,ob[i].telugu_mar);
    }
    return 0;
}
