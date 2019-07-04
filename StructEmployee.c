#include<stdio.h>
int main()
{
	struct employee
	{
		int salary,id;
		char name[100];
	}s[100],s1[100];
	int n,i,j,index=0;
	printf("Enter number total no. of Employee=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Employee[%d]-id=\n",i);
		scanf("%d",&s[i].id);
		
		printf("Employee[%d]-name=\n",i);
		scanf("%s",s[i].name);
		
		printf("Employee[%d]-salary=\n",i);
		scanf("%d",&s[i].salary);
	}
	
	for(i=0;i<=n;i++)
	{
		s1[i]=s[i];
	
	}

	printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",s[i].id,s[i].name,s[i].salary);
	}
	
	/*printf("printing another structure\n");
	printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",s1[i].id,s1[i].name,s1[i].salary);
	}*/
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(s[j].salary<s[j+1].salary)
			{
				s[j].salary=s[j].salary ^ s[j+1].salary;
				s[j+1].salary=s[j].salary ^ s[j+1].salary;
				s[j].salary=s[j].salary ^ s[j+1].salary;
			}
		}
	}
	/*printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\n",s[i].id,s[i].name,s[i].salary);
	}*/
	printf("Sorted By Salary is=\n\n");
	
	printf("\nID\tNAME\tSALARY\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i].salary==s1[j].salary)
			index=j;
		}
		printf("%d\t%s\t%d\n",s1[index].id,s1[index].name,s1[index].salary);
		
	}
	return 0;
}
