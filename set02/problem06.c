//reversing a string
#include<stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

void main()
{
  char string[50];
  input_string(&string);
  int k;
  for (k=0;string[k]!='\0';k++);
  char reversed_string[k-1];
  str_reverse(&string,&reversed_string);
  output(&string,&reversed_string);
}

void input_string(char *a)
{
  printf("Enter the String\n");
  scanf("%s",a);
}

void str_reverse(char *str, char *rev_str)
{
  int i,j;
  for (j=0;str[j]!='\0';j++);
  
  for (i=0;str[i]!='\0';i++)
    {
      rev_str[i]=str[j-1-i];
    }
  rev_str[j]='\0';
}

void output(char *a, char *reverse_a)
{
    printf("the reverse of the string %s is %s",a,reverse_a);
}