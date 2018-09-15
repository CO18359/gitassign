#include <stdio.h>

#include <stdlib.h>

 

int ip_valid(char *bytes)

{

    char *octeto []={"byt1","byt2","byt3","byt4"};

     

    int *aux;

    int i,j,find;

//---------------------------------------------------------------------------

    i=0;

     

    while ((bytes[i]!=0)&&(bytes[i]!='.'))

        i++;

   if (bytes[i] ==0)

        return 0;

    aux=bytes +i;

    find=0;

    for (j = 0; j < 4&&!find; j++)

        if (!strcmp(octeto[j],aux))

           find=1;

    if (!find)

        return 0;

     

    return 1;

}

 

 void main (void)

 {

      

     int i, num,result;

     char by[60];

     char numip1[20],numip2[20],numip3[20],numip4[20];

      

      

      

     printf ("numero de IP:");

     gets (numip1);

     num=atoi(numip1) ;

 }
 while((num<0||num>255)&&(strcmp(numip1,".")!=0))
 {
 	 result= ip_valid(&by);
 }
    
 

if (result==1)

    printf("valida");

else

   printf("No valida");

 



 

}

