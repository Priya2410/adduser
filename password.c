#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "server.h"
void password(char *UID,char *GID,char *comments,char *name,char *expiry_date)
{
    FILE *fp;//file pointer
    fp=fopen("passwd.txt","a+");//points to the file passwd.txt and it appends the changes.
    fprintf(fp,"%s:%c:%s:%s:%s:%s:%s\n",name,'x',UID,GID,comments,"/user/home","/bin/bash");
    //This stores the user id,group id,additional information and name in this format.
    //oracle:x:100:200:Oracle user:/user/home:/bin/bash.
    printf("Password expires:%s\n",expiry_date);
    printf("Password inactive:%s\n","never");
    printf("Account expires:%s\n",expiry_date);
    printf("Minimum number of days between password change:%d\n",0);
    printf("Maximum number of days between password change:%d\n",99999);
    printf("Number of days before password expires:%d\n",7);
    fclose(fp);    
}

