/* Program to Create a binary file "stu.dat" containing student type records with following conditiions:
   1.Roll No. must be unique
   2.Marks must be in the range 0-100
   3.Set value 1 if record is valid ,otherwise set value 0 indicating the record is mark for deletion
      Define modules to add new records and also define modules to modify existing records
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int rno;
    char nm[15];
    int mrk;
    int state;
} STU;

FILE *fs;

STU s;

// function to update STU Data
void update(int no)
{
    s.rno = no;

    printf("\nName: ");
    scanf("%s", s.nm);

    do
    {
        printf("\nMarks: ");
        scanf("%d", &s.mrk);
    } while ((s.mrk < 0) || (s.mrk > 100));

        s.state = 1;
}

// function to display STU Data
void display()
{
    printf("\nStudent Data: ");
    printf("\nRoll No.:%d", s.rno);
    printf("\nName: %s", s.nm);
    printf("\nMarks: %d", s.mrk);
    printf("\nState: %d", s.state);
}

// function to Search STU record roll no. wise
// return -1 if not found, otherwise return begin byte no.of found record
int search(int no)
{
    int pos = 0;
    rewind(fs); // Shifts file ptr fs to the BOF(Begin of File)

    while (1)
    {
        fread(&s, sizeof(STU), 1, fs);

        if (feof(fs))
        {
            pos = -1;
            break;
        }

        if (s.rno == no)
        {
            break;
        }

        pos = ftell(fs); // tells present file ptr position in bytes from BOF
    }

    return pos;
}

// function to add new STU record to the file
void add()
{
    int no, pos;

    printf("\nEnter Roll No.: ");
    scanf("%d", &no);

    pos = search(no);

    if (pos >= 0)
    {
        printf("\nRecord Exists");
        return;
    }

    update(no);

    fwrite(&s, sizeof(STU), 1, fs);
}

// function to modify existing STU record
void mod()
{
    int no, pos;

    printf("\nEnter Roll No.: ");
    scanf("%d", &no);

    pos = search(no);

    if (pos == -1 || s.state == 0)
    {
        printf("\nRecord not exists");
        return;
    }

    update(no);

    fseek(fs, pos, SEEK_SET); // it shifts file ptr fs to the byte no. pos from BOF

    fwrite(&s, sizeof(STU), 1, fs);
}

// SEEK_SET ->from BOF

// function to delete existing STU  recordd
void del()
{
    int no, pos;

    printf("\nEnter Roll No.: ");
    scanf("%d", &no);

    pos = search(no);

    if (pos == -1 || s.state == 0)
    {
        printf("\nRecord not Exists");
        return;
    }

    s.state = 0;

    fseek(fs, pos, SEEK_SET); // it shifts file ptr fs to byte no. pos from BOF

    fwrite(&s, sizeof(STU), 1, fs);
}

// function to display all STU records
void displayAll()
{
    rewind(fs);

    while (1)
    {
        fread(&s, sizeof(STU), 1, fs);

        if (feof(fs))
        {
            break;
        }

        display();
    }
}

int main()
{
    int opt, sv, pos;

    fs = fopen("stu.dat", "r+b");

    if (fs == NULL)
    {
        fs = fopen("stu.dat", "wb");

        fclose(fs);

        fs = fopen("stu.dat", "r+b");
    }

    while (1)
    {
        printf("\nMenu:\n1.Add\n2.Mod\n3.Del\n4.Search\n5.Display\n6.Exit\nOption: ");
        scanf("%d", &opt);

        if (opt > 5)
        {
            break;
        }

        switch (opt)
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

        case 5:
            displayAll();
            break;

        case 4:
            printf("\nRoll No.: ");
            scanf("%d", &sv);

            pos = search(sv);

            if (pos == -1)
            {
                printf("\nNot Found");
            }
            else
            {
                display();
            }
        }
    }

    fclose(fs);
    return 0;
}
