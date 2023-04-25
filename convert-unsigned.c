 #include "main.h"
   
   /**
    * convert_size_unsgnd - Casts a number to the specified size
    * @num: Number to be casted
    * @size: Number indicating the type to be casted
    *
    * Return: Casted value of num
    */
 1 long int convert_size_unsgnd(unsigned long int num, int size)
 1 {
 1         if (size == S_LONG)
 1                 return (num);
 1         else if (size == S_SHORT)
 1                 return ((unsigned short)num);
 1
 1         return ((unsigned int)num);
 1 }
