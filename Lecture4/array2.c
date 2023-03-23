#include<stdio.h>
// Concept 1 : 2D Strings
// Concept 2 : Printing strings
// Concept 3 : Printing each character from the 2Dstring
// Concept 3 : Significance of '\0' at end of string 
int main(){
    int i,j;
    char names[3][20];
    for ( i = 0; i < 3; i++)
    {
        printf("\nEnter the %dth name:",i+1);
        scanf("%s",&names[i]);
    }
    
   /* for ( i = 0; i < 3; i++)
    {
        printf("\n The %dth name is :%s",i+1,names[i]);
        
    }
    */

    printf("\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 10; j++){
            if(names[i][j]=='\0')
            break;
            printf("%c ",names[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}