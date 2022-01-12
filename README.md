<h1> ADDUSER </h1> 
<h3> Implementation of the adduser command in linux </h3>


## EXECUTION:
- HERE THERE ARE TWO C FILES `password.c` and `shadow.c` and one header file `server.h`
- THE NAME OF THE MAKE FILE IS adduser.mk 
- I have executed the makefile using `make -f adducer.mk`
- There are two text files passwd.txt and shadow.txt.
- The file passwd.txt stores the user information in this format `oracle:c:1021:1020:Oracle user:/user/home:/bin/bash`
and the file shadow.txt stores the user's encrypted password

## ABOUT THE PROGRAM:
- A program in C to mimic the `adduser` command on Linux. 
- This command will add either an ordinary user or a system user. 
- It has to handle 2 files `passwd` and `shadow` 
- Both these files will be in some folder specified by an environment variable PFILE. 
- The program has to take all arguments as command line arguments.

## ASSUMPTIONS:
- User enters in this format `adduser -u UID -g GID -c “Comments” name expirydate`
- Where,UID is USER ID.
- GID is GROUP ID.
- Comments is the additional information.
- Name is the username 
- Expiry date is the validity of password and user_account.
- The make file should be executed in this format `cat -e -v -t makefile_name.mk`
- This program has worked in Linux-OS and Mac-OS
- In this program I have used my own files for `passwd.txt` and `shadow.txt`
- I have used basic encryption technique
- I have added the basic features of adduser(as shown in the pdf issued regarding the details of the project)
