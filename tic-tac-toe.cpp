// Programmed by MAKB

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
#include <unistd.h>
char A[7][7] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' '},
        };
        
int color(int x)
 {
	HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, x);
	return 0;
 }
 int co11=0,co22=0;

void gotoxy(short x,short y)
 {
 	COORD pos= {x,y};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
 }

void jadval(int x,int y)
 {
 	system ("color D8") ;
 	color(9);
 	int i,j,k,g,z;
 	printf(" ");
 	for(i=1;i<=x;i++)
 	 {
 	 	system ("color D8") ;
 	 	sleep(1) ;
 	 	printf("   %d  ",i);
// 	 	printf("\a");
	 }
	sleep(2) ;
	system ("color D8") ;
	color(15);
	printf("\n");
	system ("color D8") ;
	printf("               ");
	for(i=0;i<y-1;i++)
	{
		for(g=0;g<=x;g++)
		{	
			system ("color D8") ;
			printf("%c%c",179,179);
			printf("    ");
		}
		system ("color D8") ;
	    printf("\n");
	    printf("               ");
	    printf("%c%c",195,195);
		for(z=0;z<x-1;z++)
			{
				system ("color D8") ;
				printf("%c%c%c%c",205,205,205,205);
            	printf("%c%c",197,197);
			}
			system ("color D8") ;
			printf("%c%c%c%c",205,205,205,205);
            printf("%c%c\n",180,180);
            printf("               ");
            
	    }
		for(g=0;g<=x;g++)
		{
			printf("%c%c",179,179);
			printf("    ");
		}
	printf("\n");
	printf("               ");
	printf("%c%c",192,192);
	for(k=0;k<x-1;k++)
	{
	printf("%c%c%c%c",196,196,196,196);
	printf("%c%c",193,193);
	}
	printf("%c%c%c%c",196,196,196,196);
	printf("%c%c",217,217);	
	+
	printf("\n\n\n");
 }
int game1(int j)
 {
 	
 	int k,p=6,i,o,m=2,l,w,u=6;
 	
  	for(k=1;k<=p;k++)
 	 	 {
  	 	 	for(w=1;w<=u;w++)
 	 	 	{	
			}					
 	 		gotoxy(17+6*(j-1),16+2*k);
 	 		color(9);
 	 		if(A[j][k]=' ')
 	 		 {	
 				if(A[j][k+1]!=' ')
				 {
 					A[j][k]=219;
		 			printf("%c%c%c%c",A[j][k],A[j][k],A[j][k],A[j][k]);
 					break;
				 }
				else
				 {
				  	if(k<w-1)
 			 	 	 {
 		 		 		A[j][k]=219;
 		 				printf("%c%c%c%c",A[j][k],A[j][k],A[j][k],A[j][k]);
 		 				Sleep(500);
 			 			gotoxy(17+6*(j-1),16+2*k);
 			 			A[j][k]=' ';
 						printf("%c%c%c%c",A[j][k]=' ',A[j][k]=' ',A[j][k]=' ',A[j][k]=' ');					
			 		 }
			 		 if(k==6)
			 		 {
					  	A[j][k]=219;
						printf("%c%c%c%c",A[j][k],A[j][k],A[j][k],A[j][k]);
					 }
				 }
			 }
		 }
	gotoxy(20,16);
 }
 
int game2(int j)
 {
 	
 	int k,p=6,i,o,m=2,l,w,u=6;
	
 	 	for(k=1;k<=p;k++)
 	 	 {
	   	 	for(w=1;w<=u;w++)
 	 	 	{
 	 	 		
			}

 	 		gotoxy(17+6*(j-1),16+2*k);
 	 		color(4);
 	 		if(A[j][k]=' ')
 	 		 {
				
 				if(A[j][k+1]!=' ')
				 {
 					A[j][k]=223;
		 			printf("%c%c%c%c",A[j][k],A[j][k],A[j][k],A[j][k]);
 					break;
				 }
				else
				 {
				  	if(k<w-1)
 			 	 	 {
 		 		 		A[j][k]=223;
 		 				printf("%c%c%c%c",A[j][k],A[j][k],A[j][k],A[j][k]);
 		 				Sleep(500);
 			 			gotoxy(17+6*(j-1),16+2*k);
 			 			A[j][k]=' ';
 						printf("%c%c%c%c",A[j][k]=' ',A[j][k]=' ',A[j][k]=' ',A[j][k]=' ');
						
			 		 }
				 }
				if(k==6)
				 {
				 	A[j][k]=223;
		 			printf("%c%c%c%c",A[j][k],A[j][k],A[j][k],A[j][k]);
				 }


			 }
		 }

	gotoxy(20,16);
 }

  int win(int turn,char content[][7]){
	char playerChar;
	int counter=0,hold;
	
	int score=0;
	
	int i,j,k,f;

	if(turn == 1){
		playerChar = 219;
	}else{
		playerChar = 223;
	}
	
	//ofoghi
	
	for(i=1;i<=6;i++){
		
		for(j=1;j<=6;j++){
			
			if(j==1){
				counter = 1;
				hold = content[i][j];
				
			}else{
				
				if(content[i][j] == hold){
					hold = content[i][j];
					counter++;
					
				}else{
					hold = content[i][j];
					counter = 1;
				}
				
				if(counter == 4){
					if(content[i][j] == playerChar){
						score++;
					}
				}
				
			}
			
		}
		
	}
//	printf("\nsaatr: %d ",score);
	//amodi

	for(i=1;i<=6;i++){
		
		for(j=1;j<=6;j++){
			
			if(j==1){
				counter = 1;
				hold = content[j][i];
				
			}else{
				
				if(content[j][i] == hold){
					hold = content[j][i];
					counter++;
					
				}else{
					hold = content[j][i];
					counter = 1;
				}
				
				if(counter == 4){
					if(content[j][i] == playerChar){
						score++;
					}
				}
				
			}
			
		}
		
	}
	
//		printf("\nsoton: %d ",score);
//		getch();
	
	//back-slash(\)e
	
	for(i=1;i<=6;i++){
		k=i;
		for(j=1;j<=6;j++){
			
			if(j==1){
				counter = 1;
				hold = content[j][k];
				
			}else{
				
				if(content[j][k] == hold){
					hold = content[j][k];
					counter++;
					
				}else{
					hold = content[j][k];
					counter = 0;
				}
				
				if(counter == 4){
					if(content[j][k] == playerChar){
						score++;
					}
				}
				
			}

			k++;
			
			if(k>=5){
				break;
			}
			
		}
		
	}
//	
//	//back-slash(\)e payin mosalasi
//	
        for(i=1;i<=6;i++){
		   k=i;
		    for(j=1;j<=6;j++){
			
			if(j==1){
				counter = 1;
				hold = content[j][k];
				
			}else{
				
				if(content[j][k] == hold){
					hold = content[j][k];
					counter++;
					
				}else{
					hold = content[j][k];
					counter = 0;
				}
				
				if(counter == 4){
					if(content[j][k] == playerChar){
						score++;
					}
				}
				
			}
			k++;
			
			if(k>=5){
				break;
			}
			
		}
		
	}
//	
//		//slash(/)e bala mosalasi
	k=1;
	for(i=0;i<6;i++){
		f = 5- k;
		for(j=0;j<6-k;j++){
			
			if(j==0){
				counter = 1;
				hold = content[f][j];
				
			}else{
				
				if(content[f][j] == hold){
					hold = content[f][j];
					counter++;
					
				}else{
					hold = content[f][j];
					counter = 0;
				}
				
				if(counter == 4){
					if(content[f][j] == playerChar){
						score++;
					}
				}
				
				
				
			}
			f--;
			
		}
		
		k++;
		
	}
	
//	//back-slash(\)e payin mosalasi
//	
        k=1;
	for(i=1;i<=5;i++){
		f = 6;
		for(j=1+k;j<=6;j++){
			
			if(j==1+k){
				counter = 1;
				hold = content[f][j];
				
			}else{
				
				if(content[f][j] == hold){
					hold = content[f][j];
					counter++;
					
				}else{
					hold = content[f][j];
					counter = 0;
				}
				
				if(counter == 4){
					if(content[f][j] == playerChar){
						score++;
					}
				}
								
			}
			f--;
			
		}
		
		k++;
		
	}
	
	return score;
	
}

void Hello()
 {
 	color(4);
 	int i;
 	gotoxy(30,5);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,6);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,7);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,8);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,9);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,10);
 	Sleep(100);
 	printf("%c",186);
 	
 	gotoxy(30,11);
 	Sleep(100);
 	printf("%c",204);
 	
 	gotoxy(31,11);
 	Sleep(100);
 	printf("%c",205);
 	gotoxy(32,11);
 	Sleep(100);
 	printf("%c",205);
 	gotoxy(33,11);
 	Sleep(100);
 	printf("%c",205);
 	gotoxy(34,11);
 	Sleep(100);
 	printf("%c",205);
 	gotoxy(35,11);
 	Sleep(100);
 	printf("%c",205);
 	gotoxy(36,11);
 	Sleep(100);
 	printf("%c",205);
 	gotoxy(37,11);
 	Sleep(100);
 	printf("%c",205);
 	gotoxy(38,11);
 	Sleep(100);
 	printf("%c",205);
 	
 	gotoxy(39,11);
 	Sleep(100);
 	printf("%c",185);
 	
 	gotoxy(30,12);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,13);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,14);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,15);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,16);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(30,17);
 	Sleep(100);
 	printf("%c",186);
 	
 	gotoxy(39,5);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,6);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,7);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,8);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,9);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,10);
 	Sleep(100);
 	printf("%c",186);
 	
 	gotoxy(39,12);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,13);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,14);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,15);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,16);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(39,17);
 	Sleep(100);
 	printf("%c",186);
 	
 	
 	
 	
 	gotoxy(45,5);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,6);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,7);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,8);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,9);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,10);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,11);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,12);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,13);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,14);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,15);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,16);
 	Sleep(100);
 	printf("%c",186);
 	gotoxy(45,17);
 	Sleep(100);
 	printf("%c",186);
 	
 	gotoxy(27,19);
 	
 }
void end()
 {
 	
 	gotoxy(20,10);
 	Sleep(100);
 	printf(" _______ .__   __.  _______  \n");
 	gotoxy(20,11);
 	Sleep(100);
 	printf("|   ____||  \\ |  | |       \\ \n");
 	gotoxy(20,12);
 	Sleep(100);
 	printf("|  |__   |   \\|  | |  .--.  |\n");
 	gotoxy(20,13);
 	Sleep(100);
 	printf("|   __|  |  . `  | |  |  |  |\n");
 	gotoxy(20,14);
 	Sleep(100);
 	printf("|  |____ |  |\\   | |  '--'  |\n");
 	gotoxy(20,15);
 	Sleep(100);
 	printf("|_______||__| \\__| |_______/ ");
 }
 
 
 int main ()
 {
 	Hello();
 	sleep(1);
 	printf("press Enter key to start");
 	int h,v,f;
 	char start,j,playagain='\n';
 	
 	while(playagain=='\n')
 	{
	 
 	srand(time(NULL));
 	f = rand() % 2;
	 	
 	scanf("%c",&start);
 	system ("color 8") ;
	sleep(1) ;	
	system ("cls");
	system ("color D8") ;
 	int x=6,y=6,i,l=1,b,k,p1,p2,flag=0,z;
 	

 	
 	char P1[15],P2[15];
 	int co[6];
 	for(b=0;b<6;b++)
 	{
 		co[b]=0;
	 }
// 	printf("Enter x :\n");
// 	scanf("%d",&x);
// 	printf("Enter y :\n");
// 	scanf("%d",&y);
	printf("player 1 enter name:");
	scanf("%s",P1);
	printf("player 2 enter name:");
	scanf("%s",P2);
	system("cls");
	gotoxy(15,17);
	color(15);
 	jadval(x,y);
 	 	
 	for(b=1;b<=6;b++)
 	 {
 	 	for(k=1;k<=6;k++)
 	 	 {

 	 		gotoxy(17+6*(b-1),16+2*k);
 	 		A[b][k]=' ';
 			printf("%c",A[b][k]);
 		 }

	 }
	 gotoxy(0,32);
 	for(i=1;i<=36;i++)
 	 {
 	 	flag=0;
 	 	color(217);
 	 	if(f==0)
 	 	{
 	 		printf("%s ",P1);
		}
		else
		{
		  	printf("%s ",P2);
		}
 	 	printf("Enter colum : \n");
 		j=getche();
 		if(j=='1' || j=='2' || j=='3' || j=='4' || j=='5' || j=='6' )
 		 {
			if(j=='1'&&co[0]!=6){
					z=1;
					flag=1;
					co[0]++;
			}
			if(j=='2'&&co[1]!=6){
				z=2;
				flag=1;
				co[1]++;
			}
			if(j=='3'&&co[2]!=6){
				z=3;
				flag=1;
				co[2]++;
			}
			if(j=='4'&&co[3]!=6){
				z=4;
				flag=1;
				co[3]++;
			}
			if(j=='5'&&co[4]!=6){
				z=5;
				flag=1;
				co[4]++;
			}
			if(j=='6'&&co[5]!=6){
				z=6;
				flag=1;
				co[5]++;
			}
			if(f==0&&flag==1)
			  	 {
			 		game1(z);
			 		f=1;
			 		color(15);
 		 			gotoxy(0,32);
			 		continue;
			  	 }
		 	if(f==1&&flag==1)
			  	 {
			 		game2(z);
			 		f=0;
			 		color(15);
 		 	    	gotoxy(0,32);
			 		continue;
				 }
			 }
			else
			 {
			 	i--;
			 }
	  }

	p1=win(1,A);
	p2=win(2,A);

 	system("cls");
 	Beep(200,1000);
 	
	if(p1==p2)
	 {
	 	gotoxy(28,19);
	 	printf("USERs equal");
	 }
	if(p1>p2)
	 {
	 	printf("%d",P2);
	 	gotoxy(28,19);
	 	printf("USER 1 WIN");
	 }
	if(p1<p2)
	 {
	 	printf("%d",P1);
	 	gotoxy(28,19);
	 	printf("USER 2 WIN");
	 }
	end();
	sleep(5);
	
	system("cls");
	gotoxy(20,15);
	puts("wanna play again?? press enter if so...");
	scanf("%c",&playagain);
 }	//while
	gotoxy(0,36);
 	system("pause");
 	return 0;
 }
