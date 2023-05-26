#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100];
    scanf("%[^\n]", s);
    for(int i=0; i<strlen(s); i++){
        if(s[i]==' ' || s[i]=='\n')
            printf("\n");
        else
            printf("%c",s[i]);                                        
    }
    return 0;
}
