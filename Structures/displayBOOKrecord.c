#include<stdio.h>
#include<conio.h>

typedef struct book
{
    int bno;
    char bnm[20];
    int bprice;
    int bstate;     // 1-valid  0-invalid
}BOOK;

BOOK bk[10];

int rpos=-1;  //last updated element position


//function to update BOOK type data
void update(BOOK *b,int no)
{
    b->bno=no;

    printf("\nBOOK Name: ");
   // gets(b->bnm);
     scanf("%s",b->bnm);
    
    printf("Price: ");
    scanf("%d",&b->bprice);

    b->bstate=1;
}

//function to display BOOK data
void display(BOOK *b)
{
    printf("\nNo.: %d",b->bno);
    printf("\nName: %s",b->bnm);
    printf("\nPrice: %d",b->bprice);
    printf("\nState: %d",b->bstate);

}

//function to delete record
void delete(BOOK *b)
{
    b->bstate=0;
}

//Return -1 if record not record & otherwise found
int search(int no)
{
    int pos=-1,i=0;

    while(i<=rpos)
    {
        if(bk[i].bno==no)
        {
            pos=i;
            break;
        }
        i++;;
    }

    return pos;
}

//function to return
void add()
{
    int res,no;

    if(rpos==9)
    {
        printf("\nOverflow");
        return;
    }

    printf("\nBOOK No.: ");
    scanf("%d",&no);

    res=search(no);

    if(res>=0)
    {
        printf("\nRecord Exist");;
       return;
    }
    
    rpos++;

    update(bk+rpos,no);

}

//function to modify existing book record
void mod()
{
    int no,res;

    if(rpos==-1)
    {
        return;
    }

    printf("\nEnter Book No.: ");
    scanf("%d",&no);

    res=search(no);

    if(res==-1)
    {
        printf("\nMissing Book Record");
        return;
    }

    if(bk[res].bstate==0)
    {
        printf("\nRecord Deleted....Cannot Modify");
        return;
    }

    update(bk+res,no);

    printf("\nRecord Modified");   

}

//function to delete book type
void del()
{
    int no,res;
    
    if(rpos==-1)  //No valid Book Entry Exist
    {
        return;
    }

    printf("\nEnter Book NO.: ");
    scanf("%d",&no);

    res=search(no);

    if(res==-1)
    {
        printf("\nMissing Book Record..");
        return;
    }

    if(bk[res].bstate==0)
    {
        printf("\nRecord Deleted...Cannot Delete");
        return;
    }

    delete(bk+res);

    printf("\nRecord Deleted");
    
}

//function to display Book Records
void displayAll()
{
    int i=0;

    if(rpos==-1)
    {
        printf("\nNo Updated Records");
        return;
    }

    for(i=0;i<=rpos;i++)
    {
        display(bk+i);
    }

}


int main()
{
    int opt;
    
    while(1)
    {
        printf("\nMenu\n1.Add\n2.Mod\n3.Del\n4.Display All\n5.Exit\nOption: ");
        scanf("%d",&opt);

        if(opt>4)
        {
           break;
        }

        switch(opt)
        {
            case 1:
                  add();
                  break;
           
            case 2:
                  mod();
                  break;
                
            case 3:
                  del();
                  break;

            case 4:
                  displayAll();
                  break;
        }
    }

    return 0;
}



