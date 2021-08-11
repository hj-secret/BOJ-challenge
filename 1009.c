#include <stdio.h>

int main() {
  int t;
  scanf("%d",&t);
  for(int j=0; j<t; j++)
  {
  int a,b;
  int k=1;
  scanf("%d %d",&a,&b);
  for(int i=0; i<b; i++){
    k=k*a;
    k%=10;
  }
  if(k==0) printf("10\n");
  else printf("%d\n",k);
}

}
