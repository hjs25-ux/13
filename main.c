#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
       int    ID;
       char   name[10];
       double grade;
};


int main(void)
{
  struct student s1 ={10, "hyejoo", 4.3};
  struct student *stdPtr;
  
  stdPtr = &s1;
  
  s1.ID = 38;
  strcpy(s1.name, "song");
  s1.grade = 3.4;
  
  
  
  printf("ID : %i, name : %s grade : %lf\n", 
             stdPtr->ID, stdPtr->name, stdPtr->grade);
  
  
  
  system("PAUSE");	
  return 0;
}
