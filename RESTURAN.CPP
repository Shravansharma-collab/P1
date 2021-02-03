#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main ()
{
clrscr ();
int ch,qt,ans;
xyz:

gotoxy(25,3);
textcolor(RED+198);
textbackground(4);
cprintf("WELCOME TO CHOTIWALA RESTURANT!");

printf("\n\nMENU:");
printf("\n1 BPM RS 100");
printf("\n2 SAHI PANEER RS 120");
printf("\n3 KADHAI PANEER RS 150");
printf("\n4 FRIED RICE RS 80");
printf("\n5 ZEERA RICE RS 90");
printf("\n6 BUTTER NAAN RS 30");
printf("\n7 BUTTER TANDORI RS 20");
printf("\n8 DRY PAPAD RS 10");
printf("\n9 MAWA BATI RS 50");
printf("\n10 ICECREAM RS 70");
printf("\n\n SIR WHAT YOU WISH TO HAVE FROM OUR MENU");
scanf("%d",&ch);
if(ch==1)
{
printf("\n You selected BPM RS 100");
printf("\n How many do you want");
scanf("\n%d",&qt);
printf("\n Total bill = %d",qt*100);
printf("\n Thank you sir visit again");
}
else if(ch==2)
{
printf("\n You selected Sahi paneer RS 120");
printf("\n How many do you want");
scanf("\n%d",&qt);
printf("\n Total bill =%d",qt*120);
printf("\n Thank you sir visit again");
}
else if(ch==3)
{
printf("\n You slected kadhai paneer RS 150");
printf("\n How many do you want");
scanf("\n%d",&qt);
printf("\n Total bill =%d",qt*150);
printf("\n Thank you sir visit again");
}
else if(ch==4)
{
printf("\n You selected Fried rice RS 80");
printf("\n How many do you want");
scanf("\n%d",&qt);
printf("\n Total bill =%d",qt*80);
printf("\nTHANK YOU SIR VISIT AGAIN");
}
else if(ch==5)
{
printf("\n You selected Zeera rice RS 90");
printf("\n How many do you want");
scanf("%d",&qt);
printf("\n Total bill =%d",qt*90);
printf("\n THANK YOU SIR VISIT AGAIN");
}
else if(ch==6)
{
printf("\n You selected Butter naan rs 30");
printf("\n How many do you want");
scanf("%d",&qt);
printf("\n Total bill =%d",qt*30);
printf("\n Thank you sir visit again");
}
else if(ch==7)
{
printf("\n You selected Butter tandori rs 20");
printf("\n How many do you want");
scanf("%d",&qt);
printf("\n Total bill =%d",qt*20);
printf("\n Thank you sir visit again");
}
else if(ch==8)
{
printf("\n You selected dry papad rs 10");
printf("\n How many do you want");
scanf("%d",&qt);
printf("\n Total bill =%d",qt*10);
printf("\n Thank you sir visit again");
}
else if(ch==9)
{
printf("\n You selected mawa bati rs 50");
printf("\n How many do you want");
scanf("%d",&qt);
printf("\n Total bill =%d",qt*50);
printf("\n Thank you sir visit again");
}
else if(ch==10)
{
printf("\n You selected Ice cream Rs 70");
printf("\n How many do you want");
scanf("%d",&qt);
printf("\n Total bill =%d",qt*70);
printf("\n Thank you sir visit again");
}
else

{
textcolor(GREEN);
textbackground(9);
cprintf("\n\n We are really sorry sir, this is not in our menu so please choose some other dish which is mention above!");
}

printf("\nDo you want to have some more 1 for yes 2 for no ");
scanf("%d",&ans);

if(ans==1)
goto xyz;


getch ();
}