#include<stdio.h>
#include<string.h>

int main(){
   int n;
   scanf("%d",&n);
   char str1[51];
   char str2[51];
   scanf("%s",str1);
   strcpy(str2, str1);
   int k=strlen(str2);

   for(int i=1; i<n; i++){
     scanf("%s",str1);
     for(int j=0; j<k; j++){
       if(str1[j]!=str2[j]) str2[j]='?';
     }
   }
   printf("%s",str2);
}
