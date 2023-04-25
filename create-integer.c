 #include "main.h"
  
   /************************* PRINT INT *************************/
   /**
    * print_int - Print int
    * @types: Lists of arguments
    * @buffer: Buffer array to handle print
    * @flags: Calculates active flags
    * @width: get width.
 1  * @precision: Precision specification
 1  * @size: Size specifier
 1  * Return: Number of chars printed
 1  */
 1 int print_int(va_list types, char buffer[],
 1         int flags, int width, int precision, int size)
 1 {
 1         int i = BUFF_SIZE - 2;
 1         int is_negative = 0;
 1         long int n = va_arg(types, long int);
 2         unsigned long int num;
 2
 2         n = convert_size_number(n, size);
 2
 2         if (n == 0)
 2                 buffer[i--] = '0';
 2
 2         buffer[BUFF_SIZE - 1] = '\0';
 2         num = (unsigned long int)n;
 2
 3         if (n < 0)
 3         {
 3                 num = (unsigned long int)((-1) * n);
 3                 is_negative = 1;
 3         }
 3
 3         while (num > 0)
 3         {
 3                 buffer[i--] = (num % 10) + '0';
 3                 num /= 10;
 0         }
 4
 4         i++;
 4
 4         return (write_number(is_negative, i, buffer, flags, width, precision, size));
 4 }
