#include<stdio.h>
#define N 3
struct Student
{
	int  m_cNum[10];
	char m_strName[20];
	char m_strSex[5];
}stu[N];
 
 int main()
 {
	int i;
	int n;
 	printf("Student information increase:\n");
 	printf("Please input the student's Num¡¢Name¡¢Sex:\n");
 	for (n=0; n<N; n++)
 	{
 		scanf("%d %s %s",&stu[n].m_cNum,stu[n].m_strName,stu[n].m_strSex);
	}
	for (i=0; i<N; i++)
	{ 
	    printf("Num     \tName     \tSex     \t\n");
	    printf("%d     \t%s     \t%s     \t\n",stu[i].m_cNum,stu[i].m_strName,stu[i].m_strSex);
    } 
    return 0;
 }
