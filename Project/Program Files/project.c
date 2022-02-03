//documentation section//
/* Library management system
Authors: 
1.	Abiral Chalise    (077BCE006)
2.	Anuj Kunwar       (077BCE017)
3.	Ashma Sharma      (077BCE022)
4.	Avishek Pokhrel   (077BCE025)
Date: 2021/8/7 */


//link section//
#include<stdio.h>//for standard functions
#include<string.h>//for string handling functions
#include<stdlib.h>//for using :exit(); and system("cls"); functions
#include<conio.h>//for using :getch(); function


//definition section//
#define clrscr(); system("cls"); //Is to be done in VS code(modern C complier) in older compliers it is pre defined in header file #include<conio.h>.


//global declaration section//
FILE *f;//for storing information of books
FILE *lp;//for storing login information
struct library1//for storing book information
{
    char book_title[100];
    char author_name[100];
    int  acc ;
    char category[20];
    char sname[50];
    char sroll[50];
    int day,month,year;
}library;
struct login{//for storing login information
    char username[50];
    char password[50];
}l;
char filename[30];//for storing file name


//function prototyping//
void headMessage(char *);
void welcomeMessage();
void init();//loading login credentials
void login();//log in process
void mainmenu();//main part of program for managing library management
void update();//update login credentials
void add_book();//adding book information in file
void disp_book();//displaying book information from file
void delete_book();//deleting book information from file
void search();//searching book information from file
void modify();//modifing book information in file

// main() function section//
int main()
{
	init();	
    welcomeMessage();
    login();	
	return 0;
}


//sub program section//
void headMessage(char *message)
{
    clrscr();
    printf("\t\t\t###########################################################################");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t############      Library management System Project in C       ############");
    printf("\n\t\t\t############                                                   ############");
    printf("\n\t\t\t###########################################################################");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t%s",message);
    printf("\n\t\t\t----------------------------------------------------------------------------\n");
}

void welcomeMessage()
{
    headMessage("www.pulchowklibrarysystem.com");
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}

void init()
{
	if( lp=fopen("login.txt","r")){//look if the file exist
		fread(&l,sizeof(l),1,lp);//read the credentails from file if exist
		fclose(lp);
	}
	else{
		strcpy(l.username,"user");//assign default crededtials if file doesn't exist
		strcpy(l.password,"pass");
	}
}

void login()
{
    int L=0;
    char user[50], pass[50];
    headMessage("Login Screen");
    do
	{
		printf("\n\t\t\t\tEnter Username and Password");
		printf("\n\t\t\t\tUsername:");
		scanf(" %[^\n]" ,user);
	
		printf("\n\t\t\t\tPassword:");
		scanf(" %[^\n]" ,pass);
		if((strcmp(user,l.username)==0)&& (strcmp(pass,l.password)==0))//check if the username and password are correct
		{
			printf("\n\t\t\t\tLogged Into System.");
			printf("\n\t\t\t\tPress any key to go next.....");
			printf("\n------------------------------------------------------------------------------------------------");
			getch();
			mainmenu();//calling mainmenu function if the credentials are correct
		}
		else
		{			
			printf("\t\t\t\tLogin Failed Enter Again Username & Password Again\n\n");
			L++;
		}
	}while(L<3);	

	if(L>=3){//wrong credentials multiple times
        headMessage("Login Failed");
		printf("\t\t\tSorry,Unknown User.");
		getch();
	}	
}

void mainmenu()
{
    int choice;
    strcpy(filename,"libraryrecords.txt");//giving filename
	do
    {
        headMessage("MAIN MENU");
		printf("\n\n\t\t\t1.Add Book Information");
		printf("\n\n\t\t\t2.Display Book Information");
		printf("\n\n\t\t\t3.Delete Book Records");
		printf("\n\n\t\t\t4.Search Specified Book");
		printf("\n\n\t\t\t5.Modify Book Records");
		printf("\n\n\t\t\t6.Update Login Information");
		printf("\n\n\t\t\t0.Exit");
		printf("\n\n\n\t\t\t Enter choice => ");
		scanf("%d",&choice);
		switch(choice)
		{
	    	case 1:
	    	add_book();
	    	break;
	    	case 2:
	    	disp_book();
	    	break;
	    	case 3:
			delete_book();
			break;
			case 4:
			search();
			break;
			case 5:
			modify();
			break;
			case 6:
			update();
			break;
			case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            getch();
			exit(0);
			default:
            headMessage("MAIN MENU");
			printf("\t\t\tTry valid character: 0 1 2 3 4 5 6");
            printf("\n\n\n\t\t\tpress any key to continue");
            getch();
		}
	}	while(choice!=0);
}

void add_book()
{ 
	char test;
    if((f=fopen(filename,"a+"))==NULL)
    {
		printf("Cannot open the file");
		exit(1);
    }
    while(1)
    {
        headMessage("ADD NEW BOOKS");
		printf("\n\n\n\n\n\t\t\tEnter the details of the book:\n");
		fflush(stdin);//clear (or flush) the output buffer. 
		printf("\n\n\n\t\t\tName:");
		scanf(" %[^\n]",library.book_title);
		printf("\n\t\t\tAuthor:");
		scanf(" %[^\n]",library.author_name);
		printf("\n\t\t\tAccession no:");
		scanf(" %d",&library.acc );
		printf("\n\t\t\tCategory:");
		scanf(" %[^\n]",library.category);
        printf("\n\t\t\tStudent's name:");
		scanf(" %[^\n]",library.sname);
        printf("\n\t\t\tStudent's roll:");
		scanf(" %[^\n]",library.sroll);
        printf("\n\t\t\tDate of issue(day-month-year):");
		scanf(" %d-%d-%d",&library.day,&library.month,&library.year);
		fwrite(&library,sizeof(library),1,f);
		fflush(stdin);
		printf("\n\n\n\t\t\t\tEnter esc key to exit");
		test=getch();
		if(test==27)//The ASCII value of escape key (ESC) is 27.
		break;
    }
    fclose(f);
}

void disp_book()
{
	if((f=fopen(filename,"r"))==NULL)
    {
		printf("Cannot open the file");
		exit(1);
    }

    while((fread(&library,sizeof(library),1,f))==1)
    {
        headMessage("DISPLAY BOOKS DETAILS");
		printf("\n\n\t\t\tDETAILS OF BOOKS IN LIBRARY\n");
		printf("\t\t\t**************************");
		printf("\n\n\n\t\t\tName:%s\n\n\n\t\t\tAuthor:%s\n\n\n\t\t\tAccesion No:%d\n\n\n\t\t\tCategory:%s\n\n\n\t\t\tStudent's name:%s\n\n\n\t\t\tStudent's roll:%s\n\n\n\t\t\tDate of issue(day-month-year):(%d-%d-%d)"
        ,library.book_title,library.author_name,library.acc ,library.category,library.sname,library.sroll,library.day,library.month,library.year);
		getch();//Hold the screen until user press any key.
    }
    headMessage("DISPLAY BOOKS DETAILS");
	printf("\n\n\t\t\tDETAILS OF BOOKS IN LIBRARY\n");
	printf("\t\t\t**************************");
	printf("\n\n\n\n\n\n\t\t\t::No Records Available::");
    printf("\n\n\n\t\t\tpress any key to continue");
	getch();
    fclose(f);
}

void delete_book()
{
    FILE *temp;//for storing all inforamtions except the the inforamtion to be deleted
    int flag;
    int a;//for storing given accession code
    headMessage("Delete Books Details");
    printf("\n\n\n\t\t\tEnter the accession no of the book to be deleted:\n\n\t\t\t\t");
    fflush(stdin);
    scanf(" %d",&a);
	f=fopen(filename,"r");
    if(f==NULL)
    {
	    printf("Cannot open the file");
	    exit(1);
    }

    temp=fopen("tempfile","w");
    if(temp==NULL)
	{
		printf("Cannot open the file");
		exit(1);
	}
    
    flag=1;//initialized to 1
    while(fread(&library,sizeof(library),1,f)==1)
    {
        if(a==library.acc)
        {
		    flag=0;//will be 0 if the given accesion no. match
	        continue;//writing is skipped for given accession no's book informations
        }
        else
	    fwrite(&library,sizeof(library),1,temp);//temp contains all the informations except the one should be deleted
    }
    fclose(f);
    fclose(temp);
    remove(filename);//deleting the file initailly containing all the inforamtion including the one to be deleted 
    rename("tempfile",filename);//the updated file after deleting renamed as the initail file i.e updated file replacing the inital file
    
    if(flag==0)
    {
        printf("\n\n\n\t\t\tRecord Deleted");
    }
    else
    {
        printf("\n\n\n\t\t\t::No such Record::");
    }
    printf("\n\n\n\t\t\tpress any key to continue");
	getch();
}

void search()
{
    char c,name[100],roll[100];
    int flag,a;//a for storing given accession code
    f=fopen(filename,"r");
    if(f==NULL)
    {
	    printf("Cannot open the file");
	    exit(1);
    }
    headMessage("SEARCH BOOKS");
	printf("\n\n\n\n\t\t\tWhat do you know about the book?\n\n\n\n\t\t\t1. The name of the book(N/n)\n\n");
	printf("\t\t\t2. The roll of the student(R/r)\n\n\t\t\t3. The accesion code of the book(C/c)\n\t\t\t");
	printf("\n\n\n\t\t\t Enter choice => ");
	scanf(" %c",&c);
	switch(c)
	{
        case 'N':
        case 'n':
        headMessage("SEARCH BOOKS");
        printf("\n\n\n\n\t\t\tEnter the name of the book:");
        fflush(stdin);
        scanf("%[^\n]",name);
        flag=1;//flag intialized to 1
        while(fread(&library,sizeof(library),1,f)==1)
        {
            if((strcmp(library.book_title,name))==0)
            flag=0 ;//flag will be 0 if match for searched inforamtion exist
            else
            continue;
            if(flag==0)//displaying the searched  inforamtion
            {
                printf("\n\n\n\t\t\tName:%s\n\n\n\t\t\tAuthor:%s\n\n\n\t\t\tAccesion No:%d\n\n\n\t\t\tCategory:%s\n\n\n\t\t\tStudent's name:%s\n\n\n\t\t\tStudent's roll:%s\n\n\n\t\t\tDate of issue(day-month-year):(%d-%d-%d)"
                ,library.book_title,library.author_name,library.acc ,library.category,library.sname,library.sroll,library.day,library.month,library.year);
                printf("\n\n\n\t\t\tpress any key to continue");
                getch();
                headMessage("SEARCH BOOKS");
            }
	    }

        if(flag==1)
        {
            printf("\n\n\n\t\t\t::No such Record::");
            printf("\n\n\n\t\t\tpress any key to continue");
            getch();
        }
	    break;

        case 'R':
        case 'r':
        headMessage("SEARCH BOOKS");
        printf("\n\n\n\n\t\t\tRoll of the student:");
        fflush(stdin);
        scanf("%[^\n]",roll);
        flag=1;
        while(fread(&library,sizeof(library),1,f)==1)
        {
            if((strcmp(library.sroll,roll))==0)
            flag=0 ;
            else
            continue;
            if(flag==0)
            {
                printf("\n\n\n\t\t\tName:%s\n\n\n\t\t\tAuthor:%s\n\n\n\t\t\tAccesion No:%d\n\n\n\t\t\tCategory:%s\n\n\n\t\t\tStudent's name:%s\n\n\n\t\t\tStudent's roll:%s\n\n\n\t\t\tDate of issue(day-month-year):(%d-%d-%d)"
                ,library.book_title,library.author_name,library.acc ,library.category,library.sname,library.sroll,library.day,library.month,library.year);
                printf("\n\n\n\t\t\tpress any key to continue");
                getch();
                headMessage("SEARCH BOOKS");

            }
        }
        if(flag==1)
        {
            printf("\n\n\n\t\t\t::No such Record::");
            printf("\n\n\n\t\t\tpress any key to continue");
            getch();
        }
        break;

        case 'C':
        case 'c':
        headMessage("SEARCH BOOKS");
        printf("\n\n\n\n\t\t\tAccesion No:");
        fflush(stdin);
        scanf("%d",&a);
        flag=1;
        while(fread(&library,sizeof(library),1,f)==1)
        {
            if(library.acc==a)
            flag=0 ;
            else
            continue;
            if(flag==0)
            {
                printf("\n\n\n\t\t\tName:%s\n\n\n\t\t\tAuthor:%s\n\n\n\t\t\tAccesion No:%d\n\n\n\t\t\tCategory:%s\n\n\n\t\t\tStudent's name:%s\n\n\n\t\t\tStudent's roll:%s\n\n\n\t\t\tDate of issue(day-month-year):(%d-%d-%d)"
                ,library.book_title,library.author_name,library.acc ,library.category,library.sname,library.sroll,library.day,library.month,library.year);
                printf("\n\n\n\t\t\tpress any key to continue");
                getch();
                headMessage("SEARCH BOOKS");

            }
        }
        if(flag==1)
        {
            printf("\n\n\n\t\t\t::No such Record::");
            printf("\n\n\n\t\t\tpress any key to continue");
            getch();
        }
        break;

        default:
        headMessage("SEARCH BOOKS");
        printf("\n\n\t\t\tWRONG ENTRY");
        printf("\n\n\t\t\tTRY ANY VALID CHARACTER:(N,R,C)\n");
        getch();
    }
    fclose(f);
}

void modify()
{
    FILE *temp;
    int flag;
    int a;
    headMessage("MODIFY BOOKS DETAILS");
    printf("\n\n\t\t\tEnter the accession no of the book to be modified:\n\n\t\t\t\t");
    fflush(stdin);
    scanf(" %d",&a);
	f=fopen(filename,"r");
    if(f==NULL)
    {
	    printf("Cannot open the file");
	    exit(1);
    }

    temp=fopen("tempfile","w");
    if(temp==NULL)
	{
		printf("Cannot open the file");
		exit(1);
	}
    
    flag=1;
    
    while(fread(&library,sizeof(library),1,f)==1)
    {
        if(a==library.acc)
        {
		    flag=0;
	        continue;
        }
        else
	    fwrite(&library,sizeof(library),1,temp);
    }
    
    if(flag==0){
		printf("\n\n\t\t\t\t::Enter new records::");
		printf("\n\n\t\t\t\t~~~~~~~~~~~~~~");
		printf("\n\n\n\n\t\t\tBook Name: ");
		fflush(stdin);
		scanf("%[^\n]",library.book_title);
		printf("\n\t\t\tAuthor Name:");
		fflush(stdin);
		scanf("%[^\n]",library.author_name);
		printf("\n\t\t\tAccession No:",library.acc);
		fflush(stdin);
		scanf("%d",&library.acc);
		printf("\n\t\t\tCategory:",library.category);
		fflush(stdin);
		scanf("%[^\n]",library.category);
		printf("\n\t\t\tStudent's name:");
		fflush(stdin);
		scanf("%[^\n]",library.sname);
        printf("\n\t\t\tStudent's roll:");
		fflush(stdin);
		scanf("%[^\n]",library.sroll);
        printf("\n\t\t\tDate of issue(day-month-year)");
		fflush(stdin);
		scanf(" %d-%d-%d",&library.day,&library.month,&library.year);
		fflush(stdin);
		fwrite(&library,sizeof(library),1,temp);
		printf("\n\n\n\t\t\tRecord modified");
	}

    else
    printf("\n\n\n\t\t\t::No such Record::");
	fclose(f);
    fclose(temp);
    remove(filename);
    rename("tempfile",filename);
    printf("\n\n\n\t\t\tpress any key to continue");
	getch();
}

void update()
{
	lp=fopen("login.txt","w");
    if(lp==NULL)
    {
	    printf("Cannot open the file");
	    exit(1);
    }
    headMessage("Update Credential");
	printf("\t\t\tEnter new username: \t");
	scanf(" %[^\n]",l.username);
	printf("\t\t\tEnter new password: \t");
	scanf(" %[^\n]",l.password);
	fwrite(&l,sizeof(l),1,lp);
	fclose(lp);
    fflush(stdin);
	printf("\n\t\t\tUsername and Password has been changed successfully");
    printf("\n\t\t\tLogin Again:");
    getchar();
    exit(1);
}
