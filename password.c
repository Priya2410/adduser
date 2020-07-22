#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
#include<sys/stat.h>
#include "server.h"
void password(char *UID,char *GID,char *comments,char *name)
{
    FILE *fp;//file pointer
    fp=fopen("passwd.txt","a+");//points to the file passwd.txt and it appends the changes.
    fprintf(fp,"%s:%c:%s:%s:%s:%s:%s\n",name,'x',UID,GID,comments,"/user/home","/bin/bash");
    //This stores the user id,group id,additional information and name in this format.
    //oracle:x:100:200:Oracle user:/user/home:/bin/bash.
}
