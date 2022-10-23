
#include <stdio.h>
#include <math.h>

#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
  float valueOne;
  float valueTwo;
//   char operator[]={'+',"-","/","*","^"};
  char operator;


  float answer;
  char exception;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &valueOne, &operator, & valueTwo);

  switch(operator)
    {
    case '/': 
               
                    answer= valueOne/valueTwo;
               
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    // case '^': answer = pow(valueOne,valueTwo);
    //   break;
    // case ' ': answer = sqrt(valueTwo);
    //   break;
    default: goto fail;
    }

   if((valueOne==exception) ||(valueTwo==exception) )//|| (operator==operator)
   {
    printf("please type value1 oparator value2(1+1)");
    
   }  else if(valueTwo==0){
                    printf("Invalid quation!!!");
                } else{ 
  printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);

                }
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}