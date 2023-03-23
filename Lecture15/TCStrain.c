#include<stdio.h>
#include<string.h>
//the train problem TCS
int main(){
    float time;
    int hrs,min;
    int i,rec[]={0,4,9,15,19,22};
    
    scanf("%f",&time); 
    hrs=(int)time;  
    min= ((int)(100*time))%(100*hrs);
    //printf("%d\n",hrs);
    //printf("%d\n",min);
    if((hrs<0||hrs>23)||(min<0||min>59)){
        printf("INVALID INPUT");
    }
    else{
        for(i=0;i<6;i++){
            if(min+rec[i]>=60){
                if(hrs<23)
                    printf("%.2f ",hrs+1+(0.01*((min+rec[i])%60)));
                else
                    printf("%.2f ",0+(0.01*((min+rec[i])%60)));
            }
            else{
                printf("%.2f ",hrs+0.01*(min+rec[i]));//10+0.01*(0+9)
            }
        }
    }
    printf("\n");
    return 0;
}

