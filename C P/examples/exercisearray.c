#include<stdio.h>
int main(){
    int sum =  0;
    int i,j;
    int items[3][2] = { 
       {1,500},
       {3,600},
       {4,700}
};
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
    if(j==1){
        
        sum += items[i][j];
    }
    }
}
    printf("%d ", sum);
}

