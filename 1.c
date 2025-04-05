#include <stdio.h>
#include<stdbool.h>
bool valid(int l[9][9]){
  for(int i=0;i<9;i++){
    bool check[9]={false};
    for(int j=0;j<9;j++){
      if (l[i][j]<1||l[i][j]>9){return false;}
      if (check[l[i][j]-1]){return false;}
      check[l[i][j]-1]=true;
    }
  }
  // printf("completed check 1");
  for(int i=0;i<9;i++){
    bool check[9]={false};
    for(int j=0;j<9;j++){
      if (check[l[j][i]-1]){return false;}
      check[l[j][i]-1]=true;
    }
  }
  // printf("completed check 2");

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      int check[9]={false};
      for(int k=0;k<3;k++){
        for(int y=0;y<3;y++){
          int idx1=3*i+k;
          int idx2=3*j+y;
          // printf("%d %d\n",idx1,idx2);
          if (check[l[idx1][idx2]-1]){return false;}
          check[l[idx1][idx2]-1]=true;
        }
      }
    }
  }
  return true;
}
int main() {
  FILE *fptr;
  fptr = fopen("input.txt", "r");
  
  int l[9][9];
  for(int i=0;i<9;i++){

    for(int j=0;j<9;j++){
      fscanf(fptr,"%d",&l[i][j]);
    }
  }
  bool ans=valid(l);
  if (ans){printf("1");}
  else{printf("0");}
  fclose(fptr); 
}
