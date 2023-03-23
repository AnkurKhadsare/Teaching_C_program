#include<stdio.h>
#include<string.h>

int charMatcher(char c,int length ,char wordlist[]);
int main(){
    char word[]="coding";
    char wordlist1[]="cdoginsdxs";
    char wordlost2[]="kldajfldf";
    int i,length,result;
    int wordlength1;
    length =strlen(word);
    printf("Length of word is %d",length);
    wordlength1 = strlen(wordlist1);
    result=0;
    for(i=0;i<length;i++){
        result =result+charMatcher(word[i],wordlength1,wordlist1);
        printf("Result %d is :%d\n",i,result);
    }
    printf("\n%d\n",result);
    if (result==length)
    {
        printf("\nWord can be created \n",result);
    }
   
    return 0;

}

int charMatcher(char c,int length ,char wordlist[]){
    int i;
    for(i<0;i<length;i++){
        if(wordlist[i]==c)
        {
            return 1;
        }
       
    }
    return 0;
}