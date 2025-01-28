#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if(a>="a" && a<="z"||a<="A" && a>="Z")
    {
        if(a=="a"|| a=="e"|| a=="i" || a=="o" || a=="u" || a=="A" || a=="I"|| a=="O"|| a=="U" || a=="E")
        {
            printf("Vowels");
        }
        else{printf("Consonants");}
    }
    else if(a<="9" && a>="0")
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}