#include <stdio.h>

int gcd(int a,int b){
  if(b>a) {
    int c=b;
    b=a;
    a=c;
  }
  int tmp;
  while(b>0){
    tmp=a;
    a=b;
    b=tmp%b;
  }
  return a;
}

int main() {
  int t,a,b;
  int c;
  scanf("%d",&t);
  for(int i=0; i<t; i++){
    scanf("%d %d",&a,&b);
    c=gcd(a,b);
    printf("%d\n",a*b/c);
  }

}
