#include<stdio.h>

union pqr
{
    int a;
    float b;
    char c;
};

struct abc
{
    union pqr p;
    char flg;
};

int main()
{
    int i=0;

    float tmp;

    struct abc x[10];

    scanf("%f",&tmp);

    while(i<10)
    {
        printf("\nType\ni-int\nf-float\nc-char\nChoice: ");
        scanf("%c",&x[i].flg);

        switch(x[i].flg)
        {
            case 'i':
                  printf("\nInt data\n");
                  scanf("%d",&x[i].p.a);
                  break;

            case 'f':
                  printf("\nFloat data\n");
                  scanf("%f",&x[i].p.b);
                  break;

            case 'c':
                  printf("\nChar data\n");
                  scanf("%c",&x[i].p.c);
        }

        i++;
    }

    for(i=0;i<10;i++)
    {
        switch(x[i].flg)
        {
            case 'i':
                   printf("\n%d",x[i].p.a);
                   break;
            
            case 'f':
                   printf("\n%f",x[i].p.b);
                   break;

            case 'c':
                   printf("\n%c",x[i].p.c);
        }
    }


    return 0;
}


/*
   struct civil
   {
      int tmrk[4];
      int omrk[2];
   };

   struct mech
   {
       int tmrk[5];
       int omrk[2];
   };

   struct  cse
   {
       int tmrk[3];
       int omrk[4];
       int pmrk[3];     
   };

   union marks
   {
       struct civil c;
       struct mech m;
       struct cse s;
   };

   struct result
   {
      int rno;
      char trade;
      union marks mrk;
   }K;

   K.trade='m';
   K.rno=17;
   K.mrk.m.tmrk[0]        
             :
             :
   K.mrk.m.tmrk[4]

   K.mrk.m.omrk[0]
   k.mrk.m.omrk[1]


*/