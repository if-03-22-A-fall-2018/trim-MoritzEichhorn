/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"

int trim(char* source, char* trimmed_string){
int end = -1;
int start = -1;
int count = strlen(source);

  if(count > 0)
  {
    count--;
    while((end == -1) && (count >= 0))
    {
      if(source[count] != ' ')
      {
        end = count;
      }
      count--;
    }

    count = 0;
    while((start == -1) && (count < strlen(source)))
    {
      if(source[count] != ' ')
      {
        start = count;
      }
      count++;
    }
  }

  count = 0;
  for (int i = start; i <= end; i++) {
    trimmed_string[i-start] = source[i];
  }
  return count;
}
