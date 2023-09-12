#include<stdio.h>

struct Candidate{
	char name[50];
	int id;
	int total;
};

void display(struct Candidate c){
	
	if(c.total>=9)
	{
		printf("Name = %s id = %d  RED\n",c.name,c.id);
	}
else if(c.total>=7)
	{
		printf("Name = %s id = %d  GREEN\n",c.name,c.id);
	}
else if(c.total>=5)
	{
		printf("Name = %s id = %d  BLUE\n",c.name,c.id);
    }
else if(c.total>=3)
	{
		printf("Name = %s id = %d  YELLOW\n",c.name,c.id);
    }
else if(c.total>=1)
	{
		printf("Name = %s id = %d  ORANGE\n",c.name,c.id);
    }
else if(c.total=0)
	{
		printf("Name = %s id = %d  BLACK\n",c.name,c.id);
    }
}
int main()
 {
 	int i;
 	struct Candidate c[5];
 	for(i=0;i<5;i++)
	 {
 		printf("Enter candidate name :");
 		scanf("%s",&c[i].name[50]);
 		printf("Enter candidate ID :");
 		scanf("%d",&c[i].id);
 		printf("Enter Total marks :");
 		scanf("%d",&c[i].total);
	 }
	 for(i=0;i<5;i++)
	 
	 	display(c[i]);
	 
	 return 0;
 	
 }
