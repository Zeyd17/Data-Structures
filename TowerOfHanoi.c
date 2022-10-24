#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);

int main(){
	int e;
	printf("Enter the no of disks : ");
	scanf("%d",&e);
	
	TOH(e,'A','B','C');
	getch();
	
}
void TOH(int n,char Beg,char Mid,char End)
{
	if(n>=1){
		TOH(n-1,Beg,End,Mid);
		printf("%d disc move %c to %c \n",n,Beg,End);
		TOH(n-1,Mid,Beg,End);
	}
}

