/* Name:Harsh Patel.
   Date:11/3/18.
   Program: This code is used to run TIC TAC TOE(O,X) game on console.
*/
#include<stdio.h>
#include<conio.h>
int x,u,i,k,j,turn,a[3][3];
char c[3][3];
void input(char*b)
{
	printf("-----------%s Turn.",b);
	printf("-------Enter position:  ");
	scanf("%d",&x);
	if(turn==0)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]==x)
				{
					if(c[i][j]=='X' || c[i][j]=='O')
					{
						printf("----------------This position is already occupied.-----------\n");
						input(b);
					}
					else
					{
						c[i][j]='X';
					}

				}
			}
		}
	}
	else
	{

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j]==x)
				{
					if(c[i][j]=='X' || c[i][j]=='O')
					{
						printf("--------------This position is already occupied.-----------\n");
						input(b);
					}
					else
					{
						c[i][j]='O';
					}
				}
			}
		}
	}

}
void display()
{
	for(i=0;i<3;i++)
	{
		printf("\t   ");
		for(j=0;j<3;j++)
		{
			printf("%c|",c[i][j]);
		}
		printf("\n\t   ------\n");
	}


}
void check(char*q)
{
	for(i=0,j=0;i<3;i++)
	{
		if(c[i][0]=='X' && c[i][0]==c[i][1] && c[i][0]==c[i][2])
		{
			printf("%s WON\n",q);
			k=1;
			break;
		}
		else if(c[i][0]=='O' && c[i][0]==c[i][1] && c[i][0]==c[i][2])
		{
			printf("%s WON\n",q);
			k=1;
			break;
		}
	}
	for(i=0,j=0;j<3;j++)
	{
		if(c[0][j]=='X' && c[0][j]==c[1][j] && c[0][j]==c[2][j])
		{
			printf("%s WON\n",q);
			k=1;
			break;
		}
		else if(c[0][j]=='O' && c[0][j]==c[1][j] && c[0][j]==c[2][j])
		{
			printf("%s WON\n",q);
			k=1;
			break;
		}
	}
	if(c[0][0]=='X' && c[0][0]==c[1][1] && c[0][0]==c[2][2])
				{
					printf("%s WON\n",q);
					k=1;
				}
	else if(c[0][0]=='O' && c[0][0]==c[1][1] && c[0][0]==c[2][2])
				{
					printf("%s WON\n",q);
					k=1;
				}

	else if(c[0][2]=='X' && c[0][2]==c[1][1] && c[0][2]==c[2][0])
				{
					printf("%s WON\n",q);
					k=1;
				}
	else if(c[0][2]=='O' && c[0][2]==c[1][1] && c[0][2]==c[2][0])
				{
					printf("%s WON\n",q);
					k=1;
				}
}
int main()
	{
	int n=1;
	char s1[10],s2[10];
    //clrscr();
	printf("Enter Name of 1st Player :");
	scanf("%s",&s1);
	printf("Enter Name of 2nd Player :");
	scanf("%s",&s2);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=n;
			printf("%d|",a[i][j]);
			n++;
		}
		printf("\n------\n");

	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]='\0';
		}
	}
	turn=0;
	for(i=0;i<9;i++)
	{
		if(k==1 || u==9)
		{
		   break;
		}
		else
		{
			if(turn==0)
			{
				input(s1);
				printf("\n");
				display();
				check(s1);
				turn=1;
				u++;
			}
			else
			{
				input(s2);
				printf("\n");
				display();
				check(s2);
				turn=0;
				u++;
			}

		}
	}
	if(k==1)
	{
		if(turn==0)
		{
			printf("\n-----------%s is WINNER-------\n-------THANK YOU FOR PLAYING-------",s2);
		}
		else
		{
			printf("\n-----------%s is WINNER-------\n-------THANK YOU FOR PLAYING-------",s1);
		}
	}
	else
	{
		printf("\n-----------GAME TIED----------\n-------THANK YOU FOR PLAYING-------");
	}
	return 0;
	getch();

}
