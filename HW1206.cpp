#include <iostream>
#include <cmath>
#define MAX 10000
using namespace std;
#define FL(i,j,k) for(int i=j;i<k;++i)

int main(){
    int T, score[3];
    printf("******************************\n•* 彰化高中資訊組成績登錄系統   *\n******************************\n1、輸入成績\n2、輸出成績\n3、計算成績(會幫你該根號乘以十，放心，你還是會被當掉)\n4、結束離開\n");
    while (~scanf("%d",&T)) {
        if(T==4)break;
        if(T==1){
            printf("輸入三個分數：");
            FL(i,0,3)scanf("%d",&score[i]);
        }
        else if(T==2){
            printf("幫你印出你悲慘的分數\n");
            FL(o,0,3)printf("%d ",score[o]);
            printf("\n");
        }else if(T==3){
            int sum=0;
            FL(i, 0, 3)sum+=score[i];
            printf("%f\n",sqrt(sum)*10);
        }
        printf("下一個步驟：");
    }
    
    
}
