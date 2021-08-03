#include <stdio.h>

int main() {
  
  int n,m;
  scanf("%d %d",&n,&m);
  int p[101][101]={0,};

  int x1,y1,x2,y2;
  for(int i=0; i<n; i++){
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    for(int x=x1; x<=x2; x++){
      for(int y=y1; y<=y2; y++){
        p[x][y]+=1;
      }
    }
  }
  int count=0;

  for(int i=1; i<=100; i++){
    for(int j=1; j<=100; j++){
      if(p[i][j]>m) count++;
    }
  }

  printf("%d",count);


}
