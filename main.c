#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
#include "server.h" 
int main(int argc, char *argv[])  //here argc represents the number of inputs on the command line
								 //here argv[] represents a array which holds the string values in the command line 
{ 
    FILE *fp1,*fp2; //fp1,fp2 are file pointers
    putenv("PFILE=~/Environment/abc");//Environment variable
    printf("PFILE=%s\n",getenv("PFILE"));
    fp1=fopen("passwd.txt","r"); //fp1 points to the file passwd.txt
    fp2=fopen("shadow.txt","r");//fp2 points to the file shadow.txt
    char UID[100]; //UID is used to store the USER ID
    char GID[100]; //GID is used to store the GROUP ID
    char comments[100];//comments is used to store the additional information of the user
    char name[100];//name is used to store the username
    char expiry_date[100];//expiry_date is used to store the expiry_date
    int i=3;
    while(argv[i])
    {
    switch(i)
    {
    case 3:
    strcat(UID,argv[i]);   //This copies the user id from the command line to UID.
    break;
    case 5:
    strcpy(GID,argv[i]);   //This copies the group id from the command line to GID.
    break;
    case 7:
    strcpy(comments,argv[i]); //This copies the additional information of the user from the command line to comments
    break;
    }
    strcpy(name,argv[8]);  //This copies the user id from the command line to UID.
    i=i+2;
    }
if(argc>8)
{
strcpy(expiry_date,agrv[10]);
}
else
{
strcpy(expiry_date,"never\0");
}
password(UID,GID,comments,name,expiry_date); //function call to password
shadow(name);//function call to shadow
fclose(fp1);
fclose(fp2);
}
