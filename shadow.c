#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
#include<sys/stat.h>
#include "server.h"
#define MAXSIZE 1024
void shadow(char *name)
{
FILE *fptr1; //File pointers
FILE *fptr2;//File pointers
fptr1=fopen("shadow.txt","a+");//fptr1 points to shadow.txt
fptr2=fopen("passwd.txt","a+");//fptr2 points to passwd.txt
char passwrd[MAXSIZE],c[MAXSIZE];//passwrd stores the user input(ie password) from the user
printf("enter the password to be encrypted:");
scanf("%s",passwrd);
encrypt(passwrd,fptr1,name);//function call to encrypt the passwrd
}


void encrypt(char*str,FILE *fptr1,char *name)
{
	int n=0;//stores the index of the encrypted password.
	char *p=str;//p stores the user entered password.
	char q[MAXSIZE];//q stores the encrypted password.
	while(*p)
	{
	 if(islower(*p))//checks if the character is in lower case.
	 {
		 if((*p>='a')&&(*p<'x'))
			 q[n]=toupper(*p + (char)3);
		 else if(*p=='x')
			 q[n]='A';
		 else if(*p=='y')
			 q[n]='B';
		 else
			 q[n]='C';
	 }
	 else
	 {
		 q[n]=*p;
	 }
	 n++; p++;
	}
	q[n++]='\0';//adds a null character at the end of the password to terminate the string 
	fprintf(fptr1,"%s:%s\n",name,q);//This adds the username:encrypted password in the shadow.txt file.
	fclose(fptr1);
} 
