#include <stdio.h>
#include <string.h>

int main() {
   char s1[] = "And i give up forever to touch you, Cause i know that you feel me somehow ";
   char s2[] = "i";

   int n = 0;
   int m = 0;
   int times = 0;
   int len = strlen(s2);

   while(s1[n] != '\0')
   {
      if(s1[n] == s2[m])
	  {     
	  
         while(s1[n] == s2[m]  && s1[n] !='\0')
		 {
            n++;
            m++;
         }
         if(m == len && (s1[n] == ' ' || s1[n] == '\0'))
         {
            times++;
         }
         else
		 {
            while(s1[n] != ' ') 
			{
            	n++;
            	if(s1[n] == '\0')
            	break;
            }
         }
      }
      n++;
      m=0;
   }

   if(times > 0)
   {
      printf("'%s' appears %d time(s)\n", s2, times);
   }
   else
   {
      printf("'%s' does not appear in the sentence.\n", s2);
   }
   return 0;
}
