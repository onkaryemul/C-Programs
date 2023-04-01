/* 
   Bitwise Operators:
      1.These Operators are applicable only for the data type int and char
      2.The Operational unit is bit
*/

#include <stdio.h>

int main()
{
    /*       
        //1.Bitwise AND Operator: &
        //The operator is used to check the state of a particular byte either ON or OFF
      

        int x = 23;

        if (x & 8)
        {
          printf("\n3rd Bit ON");
        }
        else
        {
           printf("\n3rd Bit OFF");
        }

    */

    /*  
        // 2.Bitwise OR Operator: |
        //    The operator is used to make OFF bit ON.
       
        int x=23;
        printf("\nx:%d",x);

        x=x|8;

        printf("\nx:%d",x);

    */

    /*
        // 3.Bitwise XOR Operator: ^
        //  This operator is used in C Graphics for animation Purpose
    */

    /*
        // 4.Bitwise LEFT SHIFT Operator: <<
        // The operator is used to shift entire bit patterns towards the left by n positions inserting n zero's at right

        int x=23;
        printf("\nx:%d",x);

        x=x<<2;

        printf("\nx:%d",x);

    */

    /*
        // 5.Bitwise RIGHT SHIFT Operator: >>
        // This operator is used to shift entire bit pattern towards the right by n positions inserting n zero's at left

        int x=23;
        printf("\nx:%d",x);

        x=x>>2;

        printf("\nx:%d",x);

    */

    /*
        // 6.Bitwise 1's Compliment Operator: ~
        // This Operator makes all OFF bit ON and ON bits OFF

        int x=23;
        printf("\nx:%d",x);

        x=~x;

        printf("\nx:%d",x);
    
    */
   
        return 0;
}
