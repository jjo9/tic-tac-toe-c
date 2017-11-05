#include <stdio.h>
#include <stdlib.h>
#define FLUSHIN(c) while((c = getchar()) != EOF && c != '\n')

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	
	int i,p1,p2,p3,p4,p5,p6,p7,p8,p9,pp,c1,c2,c3,l1,l2,l3,d1,d2,t,pt,coiso,j1,j2;
	char p[8],c;
	//posicoes para coiso
	p1=401;
	p2=402;
	p3=403;
	p4=404;
	p5=405;
	p6=406;
	p7=407;
	p8=408;
	p9=409;
	//posicoes iniciais para ecra
	p[0]='1';
	p[1]='2';
	p[2]='3';
	p[3]='4';
	p[4]='5';
	p[5]='6';
	p[6]='7';
	p[7]='8';
	p[8]='9';
	t=0;        /* turncounter */
	pt=1;       /* player turn */
	//colunas
	c1=0;
	c2=0;
	c3=0;
	//linhas
	l1=0;
	l2=0;
	l3=0;
	//diagonais
	d1=0;
	d2=0;
	printf("jogador 1 X\n\njogador 2 O\n\n");
	system("pause");
	system("cls");
	do
	{
		//tabela inicial
		printf("#########################\n");
		printf("#       #       #       #\n");
		printf("#   %c   #   %c   #   %c   #\n",p[0],p[1],p[2]);
		printf("#       #       #       #\n");
		printf("#########################\n");
		printf("#       #       #       #\n");
		printf("#   %c   #   %c   #   %c   #\n",p[3],p[4],p[5]);
		printf("#       #       #       #\n");
		printf("#########################\n");
		printf("#       #       #       #\n");
		printf("#   %c   #   %c   #   %c   #\n",p[6],p[7],p[8]);
		printf("#       #       #       #\n");
		printf("#########################\n");
		printf("\n");
		if(pt==1)
		{
			do
			{
				printf("jogador 1: ");
				scanf("%d",&j1);
				FLUSHIN(c);
				if((p1==1||p1==2)&&j1==1)
				{
					j1=101;
					printf("posicao ocupada\n");
				}
				else
				{
					if((p2==1||p2==2)&&j1==2)
					{
						j1=102;
						printf("posicao ocupada\n");
					}
					else
					{
						if((p3==1||p3==2)&&j1==3)
						{
							j1=103;
							printf("posicao ocupada\n");
						}
						else
						{
							if((p4==1||p4==2)&&j1==4)
							{
								j1=104;
								printf("posicao ocupada\n");
							}
							else
							{
								if((p5==1||p5==2)&&j1==5)
								{
									j1=105;
									printf("posicao ocupada\n");
								}
								else
								{
									if((p6==1||p6==2)&&j1==6)
									{
										j1=106;
										printf("posicao ocupada\n");
									}
									else
									{
										if((p7==1||p7==2)&&j1==7)
										{
											j1=107;
											printf("posicao ocupada\n");
										}
										else
										{
											if((p8==1||p8==2)&&j1==8)
											{
												j1=108;
												printf("posicao ocupada\n");
											}
											else
											{
												if((p9==1||p9==2)&&j1==9)
												{
													j1=109;
													printf("posicao ocupada\n");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			while(j1>9||j1<=0);
			t=t+1;
			system("cls");
			pt=2;
			switch (j1)
			{
				case(1):
				{
					p1=1;
					p[0]='X';
					break;
				}
				case(2):
				{
					p2=1;
					p[1]='X';
					break;
				}
				case(3):
				{
					p3=1;
					p[2]='X';
					break;
				}
				case(4):
				{	
					p4=1;
					p[3]='X';
					break;
				}
				case(5):
				{
					p5=1;
					p[4]='X';
					break;
				}
				case(6):
				{
					p6=1;
					p[5]='X';
					break;
				}
				case(7):
				{
					p7=1;
					p[6]='X';
					break;
				}
				case(8):
				{
					p8=1;
					p[7]='X';
					break;
				}
				case(9):
				{
					p9=1;
					p[8]='X';
					break;
				}
			}
		}
		else
		{
			do
			{
				printf("jogador 2: ");
				scanf("%d",&j2);
				FLUSHIN(c);
				if((p1==1||p1==2)&&j2==1)
				{
					j2=101;
					printf("posicao ocupada\n");
				}
				else
				{
					if((p2==1||p2==2)&&j2==2)
					{
						j2=102;
						printf("posicao ocupada\n");
					}
					else
					{
						if((p3==1||p3==2)&&j2==3)
						{
							j2=103;
							printf("posicao ocupada\n");
						}
						else
						{
							if((p4==1||p4==2)&&j2==4)
							{
								j2=104;
								printf("posicao ocupada\n");
							}
							else
							{
								if((p5==1||p5==2)&&j2==5)
								{
									j2=105;
									printf("posicao ocupada\n");
								}
								else
								{
									if((p6==1||p6==2)&&j2==6)
									{
										j2=106;
										printf("posicao ocupada\n");
									}
									else
									{
										if((p7==1||p7==2)&&j2==7)
										{
											j2=107;
											printf("posicao ocupada\n");
										}
										else
										{
											if((p8==1||p8==2)&&j2==8)
											{
												j2=108;
												printf("posicao ocupada\n");
											}
											else
											{
												if((p9==1||p9==2)&&j2==9)
												{
													j2=109;
													printf("posicao ocupada\n");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			while(j2>9||j2<=0);
			t=t+1;
			system("cls");
			pt=1;
			switch (j2)
			{
				case(1):
				{
					p1=2;
					p[0]='O';
					break;
				}
				case(2):
				{
					p2=2;
					p[1]='O';
					break;
				}
				case(3):
				{
					p3=2;
					p[2]='O';
					break;
				}
				case(4):
				{	
					p4=2;
					p[3]='O';
					break;
				}
				case(5):
				{
					p5=2;
					p[4]='O';
					break;
				}
				case(6):
				{
					p6=2;
					p[5]='O';
					break;
				}
				case(7):
				{
					p7=2;
					p[6]='O';
					break;
				}
				case(8):
				{
					p8=2;
					p[7]='O';
					break;
				}
				case(9):
				{
					p9=2;
					p[8]='O';
					break;
				}
			}
		}
		if(p[0]==p[1]&&p[1]==p[2])
		{
			l1=1;
		}
		else
		{
			if(p[3]==p[4]&&p[4]==p[5])
			{
				l2=1;
			}
			else
			{
				if(p[6]==p[7]&&p[7]==p[8])
				{
					l3=1;
				}
				else
				{
					if(p[0]==p[3]&&p[3]==p[6])
					{
						c1=1;
					}
					else
					{
						if(p[1]==p[4]&&p[4]==p[7])
						{
							c2=1;
						}
						else
						{
							if(p[2]==p[5]&&p[5]==p[8])
							{
								c3=1;
							}
							else
							{
								if(p[0]==p[4]&&p[4]==p[8])
								{
									d1=1;
								}
								else
								{
									if(p[2]==p[4]&&p[4]==p[6])
									{
										d2=1;
									}									
								}								
							}
						}
					}
				}				
			}
		}
	
	
	}
	while(t<9&&l1==0&&l2==0&&l3==0&&c1==0&&c2==0&&c3==0&&d1==0&&d2==0);
	
	//tabela final
	
	if(l1==1)
	{
		for(i=0;i<=4;i++)
		{
			printf("#########################\n");
			printf("#       #       #       #\n");
			printf("#   %c   #   %c   #  %c    #\n",p[0],p[1],p[2]);
			printf("#       #       #       #\n");
			printf("#########################\n");
		}
	}
	else
	{
		if(l2==1)
		{
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("#########################\n");
			printf("#       #       #       #\n");
			printf("#   %c   #   %c   #   %c   #\n",p[3],p[4],p[5]);
			printf("#       #       #       #\n");
			printf("#########################\n");
		}
		else
		{
			if(l3==1)
			{
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("\n");
				printf("#########################\n");
				printf("#       #       #       #\n");
				printf("#   %c   #   %c   #   %c   #\n",p[6],p[7],p[8]);
				printf("#       #       #       #\n");
				printf("#########################\n");
			}
			else
			{
				if(c1==1)
				{
					printf("#########\n");
					printf("#       #\n");
					printf("#   %c   #\n",p[0]);
					printf("#       #\n");
					printf("#########\n");
					printf("#       #\n");
					printf("#   %c   #\n",p[3]);
					printf("#       #\n");
					printf("#########\n");
					printf("#       #\n");
					printf("#   %c   #\n",p[6]);
					printf("#       #\n");
					printf("#########\n");
				}
				else
				{
					if(c2==1)
					{
						printf("        #########\n");
						printf("        #       #\n");
						printf("        #   %c   #\n",p[1]);
						printf("        #       #\n");
						printf("        #########\n");
						printf("        #       #\n");
						printf("        #   %c   #\n",p[4]);
						printf("        #       #\n");
						printf("        #########\n");
						printf("        #       #\n");
						printf("        #   %c   #\n",p[7]);
						printf("        #       #\n");
						printf("        #########\n");
					}
					else
					{
						if(c3==1)
						{
							printf("                #########\n");
							printf("                #       #\n");
							printf("                #  %c    #\n",p[2]);
							printf("                #       #\n");
							printf("                #########\n");
							printf("                #       #\n");
							printf("                #   %c   #\n",p[5]);
							printf("                #       #\n");
							printf("                #########\n");
							printf("                #       #\n");
							printf("                #   %c   #\n",p[8]);
							printf("                #       #\n");
							printf("                #########\n");
						}
						else
						{
							if(d1==1)
							{
								printf("#########                \n");
								printf("#       #                \n");
								printf("#   %c   #                \n",p[0]);
								printf("#       #                \n");
								printf("#################        \n");
								printf("        #       #        \n");
								printf("        #   %c   #\n",p[4]);
								printf("        #       #        \n");
								printf("        #################\n");
								printf("                #       #\n");
								printf("                #   %c   #\n",p[8]);
								printf("                #       #\n");
								printf("                #########\n");
							}
							else
							{
								if(d2==1)
								{
									printf("                #########\n");
									printf("                #       #\n");
									printf("                #  %c    #\n",p[2]);
									printf("                #       #\n");
									printf("        #################\n");
									printf("        #       #        \n");
									printf("        #   %c   #        \n",p[4]);
									printf("        #       #        \n");
									printf("#################        \n");
									printf("#       #                \n");
									printf("#   %c   #                \n",p[6]);
									printf("#       #                \n");
									printf("#########                \n");
								}
								else
								{
									printf("##########\n");
									printf("# EMPATE #\n");
									printf("##########\n");
								}									
							}								
						}
					}
				}
			}				
		}
	}
	FLUSHIN(c);
	/*
	//tabela final 
	printf("#########################\n");
	printf("#       #       #       #\n");
	printf("#   %c   #   %c   #  %c    #\n",p[0],p[1],p[2]);
	printf("#       #       #       #\n");
	printf("#########################\n");
	printf("#       #       #       #\n");
	printf("#   %c   #   %c   #   %c   #\n",p[3],p[4],p[5]);
	printf("#       #       #       #\n");
	printf("#########################\n");
	printf("#       #       #       #\n");
	printf("#   %c   #   %c   #   %c   #\n",p[6],p[7],p[8]);
	printf("#       #       #       #\n");
	printf("#########################\n");
	*/
	
	return 0;
}
