#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book_tickets
{
char b_name[32];
char b_nmbr[11];
char b_password[10];
char b_source[30];
char b_destination[30];
unsigned int b_seats;
};
main()
{
struct book_tickets  b[4];
strcpy(b[0].b_name,"ravi");
strcpy(b[0].b_nmbr,"9704340313");
strcpy(b[0].b_password,"r123");
	strcpy(b[1].b_name,"satish");
        strcpy(b[1].b_nmbr,"9989075863");
        strcpy(b[1].b_password,"s123");
char n[11],p[10],temp[30];
int opt,subopt,i=2,c,count=2,l1,d,a,l2,e;
while(1)
{
 printf("0.exit\n1.login\n2.register\n");
 scanf("%d",&opt);
 switch(opt)
 {
  case 0:
         exit(0);
	     break;
	
  case 1:
         printf("please login to book ticket\n");
	     printf("enter nmbr:");
	     scanf("%s",n);
	     printf("enter password:");
	     scanf("%s",p);
         int n1,p1;
	     for(i=0;i<4;i++)
	     {
	      n1=strcmp(b[i].b_nmbr,n);
	      p1=strcmp(b[i].b_password,p);
	      if((n1==0)&&(p1==0))
	      break;
	     }
       c=i;
	   if((n1==0)&&(p1==0))
	   {
		printf("enter source:");
		scanf("%s",b[c].b_source);
		printf("enter destination:");
		scanf("%s",b[c].b_destination);
		printf("enter nmbr of seats:");
		scanf("%d",&b[i].b_seats);
		printf("name:%s\nnumber:%s\nsource:%s\ndestination:%s\nnumber of seats:%d\n",b[c].b_name,b[c].b_nmbr,b[c].b_source,b[c].b_destination,b[i].b_seats);
       	}
	   else
       {
        printf("please register and login again\n");
	   }	
	   break;
case 2:
       if(count==4)
       {
        printf("registrations are closed\n");
       }
       else
       {
       int c=0;
  num2:printf("enter name:");
	   scanf("%s",temp);
       for(c=0;c<i;c++)
       {
        a=strcmp(temp,b[c].b_name);
		if(a==0)
        break;
	   }
	   if(a==0)
	   {
		printf("username alrdy exist\n");
		goto num2;
	   }
	  strcpy(b[i].b_name,temp);
NUM:  printf("enter nmbr:");
	  scanf("%s",b[i].b_nmbr);
      l2=strlen(b[i].b_nmbr);
      if((l2>10)||(l2<10))
      {
       printf("please re-enter ur 10 digit mobile nmbr\n");
       goto NUM;
      }
      if((b[i].b_nmbr[0]<54)||(b[i].b_nmbr[0]>57))
      {
       printf("numder should start either 9 or 8 or 7 or 6 series only\n");
       goto NUM;
      }
      for(d=0;d<10;d++) 
      {
if((b[i].b_nmbr[d]<48)||(b[i].b_nmbr[d]>57))
{
printf("invalid number\n");
goto NUM;
}
}
	pass:printf("enter password:");
		scanf("%s",b[i].b_password);

printf("please re-enter your password");
scanf("%s",p);
int p2;
p2=strcmp(b[i].b_password,p);
l1=strlen(b[i].b_password);

if((p2==0)&&(l1==4))
{
printf("registration successfull\nplease login to book ticket\n");
count++;
i++;
}
else
{
printf("re entered password is wrong\n");
goto pass;
}
} 
break;
default: printf("please select valid option\n");
}
}
}

