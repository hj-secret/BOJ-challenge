#include<stdio.h>

  int max[3];
  int min[3];
  int arr[3];

void big(){
  int l1;
  int l2;
  int m1;
  int m2;
  int m3;
  int r1;
  int r2;
  l1=max[0]+arr[0];
  l2=max[1]+arr[0];
  m1=max[0]+arr[1];
  m2=max[1]+arr[1];
  m3=max[2]+arr[1];
  r1=max[1]+arr[2];
  r2=max[2]+arr[2];
  max[0]=l1;
  if(l2>max[0]) max[0]= l2;
  max[1]=m1;
  if(m2>max[1]) max[1]= m2;
  if(m3>max[1]) max[1]= m3;
  max[2]=r1;
  if(r2>max[2]) max[2]= r2;
}

void small(){
  int l1;
  int l2;
  int m1;
  int m2;
  int m3;
  int r1;
  int r2;
  l1=min[0]+arr[0];
  l2=min[1]+arr[0];
  m1=min[0]+arr[1];
  m2=min[1]+arr[1];
  m3=min[2]+arr[1];
  r1=min[1]+arr[2];
  r2=min[2]+arr[2];
  min[0]=l1;
  if(l2<min[0]) min[0]= l2;
  min[1]=m1;
  if(m2<min[1]) min[1]= m2;
  if(m3<min[1]) min[1]= m3;
  min[2]=r1;
  if(r2<min[2]) min[2]= r2;
}

int main(void){
 
  int n;
  scanf("%d",&n);
  scanf("%d %d %d",&max[0],&max[1],&max[2]);
  min[0]=max[0];
  min[1]=max[1];
  min[2]=max[2];

  for(int i=0; i<n-1; i++){
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    big(); small();
  }
  int mx=max[0];
  if(max[1]>mx) mx=max[1];
  if(max[2]>mx) mx=max[2];
  int mn=min[0];
  if(min[1]<mn) mn=min[1];
  if(min[2]<mn) mn=min[2];
  printf("%d %d",mx,mn);
}
