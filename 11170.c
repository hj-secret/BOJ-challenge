// 문자열으로 해결하는 방법
#include <stdio.h>
#include<string.h>

int main() {
  
  int t;
  int n,m;
  char str[8];
  int count;
  scanf("%d",&t);

  for(int i=0; i<t; i++){
    count=0;
    scanf("%d %d",&n,&m);

    for(int k=n; k<=m; k++){
      sprintf(str,"%d",k);

      for(int j=0; j<strlen(str); j++){
        if(str[j]=='0') count++;
      }
    }

    printf("%d",count);
  }

}

//나머지를 이용해 해결하는 방법
#include <stdio.h>

int main() {
  
  int t;
  int n,m;
  int q;
  int count;
  scanf("%d",&t);
  
  for(int i=0; i<t; i++){
    count=0;
    scanf("%d %d",&n,&m);

    for(int k=n; k<=m; k++){
      q=k;

      while(q>0){
        if(q%10==0) count++;
        if(q>=10)q/=10;
        else break;
      }

      if(q==0) count++;
    }

    printf("%d\n",count);
  }

}
