#include "main.h"                                                          

/**                                                                        
 *
 * print_alpabet_x10 -> function to print abc 10 times                                   
 *                                                                   
 * Return: 0                                                           
 */                                                                        

void print_alphabet(void)                                                  
{                                                                        
	        int c, i;

		for(i = 0; i <= 9; i++)
		{
			
		        for(c = 'a'; c <= 'z'; c++)        
	                {
				_putchar(c);
			}
			_putchar('\n');
		}
}
