 
 
                             // Hotel Management

#include<stdio.h>
#include<conio.h>
//#include<string.h>
#include<time.h>
#include<stdlib.h>
int main ()
{
				               
     char uname,password;           
    printf ("\n  **************************  LOGIN FORM  **************************  ");
    printf (" \n                       ENTER USERNAME:-");
	scanf ("%s", &uname); 
	printf (" \n                       ENTER PASSWORD:-");
	scanf ("%c\n",password);
	system("CLS");
	
    printf ("\t\t                                                 \n");
    printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*        WELCOME TO HOTEL DESERT CAVE           *\n");
	printf("\t\t*       -----------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*    Anonymous four lagend in this hotel        *\n");
	printf("\t\t*                 haramy                        *\n");
	printf("\t\t*     CONTACT US:03493237141                    *\n");
	printf("\t\t*************************************************\n\n\n");
	
	int main();
	{     	
	int i=0;
	
	time_t t;
	time(&t);
	char customername;
	char choice;
	
		for(i=0;i<80;i++)
		printf("-");
	printf("\n ANONYMOUS ITs Current date and time : %s",ctime(&t));
}
	
  char name,address,nationality,emailid;
 printf (".............WELCOME TO GHUMTEE RIVIERA RESTAURANT AND LODGE..............\n");
 printf("Please enter your details before moving to the main page!\n");
 printf("please enter your name:");
 scanf("%c\n",name);
 printf("enter your address:");
 scanf("%c\n",address);
 printf("enter your nationality:");
scanf("%c\n",nationality);
 printf("enter your email_id:");
 scanf("%c\n",emailid);
 system("cls");




  int decide;
  
 printf ("\n-----------------------HOME PAGE--------------------------\n");
 printf("\n HOW CAN WE HELP YOU?\n\n");
 printf("\n1.Book a room\n2.Program\n3.mini casino\n4.show my details\n5.complaints orsuggestions\n6.check out\n7.about us\n");
 scanf("%d",&decide);
 
 
{

 int type_of_rooms;
 char ch,person,c;
 int roomno =0;
 if(person) roomno == 0;
 printf("\nWhat type of room do u want to book?\n");
 printf("\n1.Basic Room Rs 1000\n2.Medium room Rs 2000\n3.DELUXE ROOM Rs 3000\n4.I don't want to choose anything\n");
 scanf("%d",&type_of_rooms);
 fflush(stdin);
 if(type_of_rooms==1){
 printf("\nDo you accept this room?(y/n)\n");
 fflush(stdin);
 scanf("%c",&c);
 if (c=='y'){
 system("cls");
 printf("\nYou choose basic room. Enjoy your stay\n");
 printf("your room no is 121");
 person_roomno = 121;
 person.roomtype = "basic";
 person.billprice += 1000;
 begin();
 }
 else
 begin();
 }
 if(type_of_rooms==2){
 printf("\nDo you accept this room?(y/n)\n");
 scanf("%c",&c);
 if(c=='y'){
 system("cls");
 printf("\nYou choose medium room. Enjoy your stay\n");
 printf("your room no is 212");
 person.billprice += 2000;
 person.roomno = 212;
 person.roomtype = "medium";
 begin();}
 else
 begin();
 }
 if(type_of_rooms==3){
 printf("\nDo u accept this room?(y/n)\n");
 scanf("%c",&c);
 if(c=='y'){
 system("cls");
 printf("\nYou choose deluxe room. Enjoy your stay\n");
 printf("your room no is 312");
 person.billprice += 3000;
 person.roomtype = "deluxe";
 person.roomno = 312;
 begin();
 }
 else
 begin();
 }
 if(type_of_rooms==4)
 begin();
 }
 else
 printf("you have already booked a room");
}
void program(void){
 system("cls");
 int p;
 printf("\nWhich program do you want to choose?\n");
 printf("\n 1.Jungle Walk \n 2.Jungle Jeep Drive\n 3.Canoe ride \n 4. Cultural show ");
 scanf("%d",&p);
 switch(p){
 case 1:
 	system("cls");
 printf("\nYou choose jungle walk\n");
 person.program = "Jungle walk";
 person.billprice += 1000;
 begin();
 break;
 case 2:
 printf("\nYou choose jungle jeep drive\n");
 person.program = "Jeep Drive";
 person.billprice += 2000;
 begin();
 break;
 case 3:
 printf("\nYou choose canoe ride\n");
 person.billprice+= 800;
 person.program = "Canoe Ride";
 begin();
 break;
 case 4:
 printf("\nYou choose cultural show\n");
 person.billprice+= 1000;
 person.program = "Cultural show";
 begin();
 break;
 default:
 begin();
 }
}
void show_details(void){
 system("cls");
 time_t timer = time(NULL);
 printf("you can get your details in hotel.txt file\n");
 FILE *ifp;
 ifp = fopen("hotel.txt","w+");
 if(ifp == NULL){
 printf("file cant be opened\n");
 }
 {
 
printf("You win ! The numbers are as follows: ");
printf("\"%c %c %c\" ", num[0], num[1], num[2]);
printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
}
else {
(*inhand_cash) -= amount_bet;
printf("You Loose ! The numbers are as follows: ");
printf("\"%c %c %c\" ", num[0], num[1], num[2]);
printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
}
}
void mini_casino()
{
int amount_bet, inhand_cash;

 printf("\n////////-WELCOME TO MINI CASINO-\\\\\\\\\\\\ \n");
printf("\n----Enter the inhand_cash you have right now---- :\n ");
scanf("%d", &inhand_cash);
while (inhand_cash > 0) {
printf("\nEnter the amount_bet you want to play for : \n");
scanf("%d", &amount_bet);


}
if (inhand_cash == 0 || amount_bet > inhand_cash) {
printf("\n\n\nSorry you don't have enough cash to play more,\n ");
printf("\nDo come next time \n\n");
printf("\nThank You for playing \n");}
}
getch();
}