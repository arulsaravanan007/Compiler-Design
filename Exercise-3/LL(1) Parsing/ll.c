#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s[20],stack[20];
int main()
{
  char m[5][6][10]={"tb","","","tb","","","","+tb","","","n","n","fc","","","fc","","","","n","*fc","","n","n","i","","","(c)","",""};
  int size[5][6]={2,0,0,2,0,0,0,3,0,0,1,1,2,0,0,2,0,0,0,1,3,0,1,1,1,0,0,3,0,0};
  int i,j,k,n.str1,str2;
  printf("Enter the input string:");
  scanf("%s",s);
  strcat(s,"$");
  n=strlen(s);
  stack[0]='$';
  stack[1]='e';
  i=1;j=0;
  printf("\nStack \t Input\n");
  printf("____\t___\n");
  while(stack[i]!='$' && s[j]!='$'){
      if(stack[i]==s[j]){
          i--; j++;
      }
      else{
          switch(stack[i]){
              case 'e':str1=0;break;
              case 'b':str1=1;break;
              case 'c':str1=2;break;
              case 't':str1=3;break;
              case 'f':str1=4;break;
          }
          switch(s[j]){
              case 'i': str2=0;break;
              case '+': str2=1;break;
              case '*': str2=2;break;
              case '(': str2=3;break;
              case ')': str2=4;break;
              case '$': str2=5;break;
          }
          if(strlen(m[str1][str2]==0){
               printf("\nERROR: no rule for [%c,%c]\n",stack[i],s[j]);
               exit(0);
          }
          else if(m[str1][str2][0]=='n'){
              i--;
          }
          else{
             i--;
             for(k=size[str1][str2]-1;k>=0;k--){
                 stack[++i]=m[str1][str2][k];
             }
          }
      }
      for(k=0;k<=i;k++) printf("%c",stack[k]);
      printf("\t%s\n",s+j);
  }
  if(stack[i]=='$' && s[j]=='$')
    printf("\nSUCCESS:string accepted\n");
  else
    printf("\nFAILURE: string rejected\n");
  return 0;
}
