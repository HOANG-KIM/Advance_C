#include <stdio.h>

int StringEqual(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] == str2[i]){
            i++;
        }
        else{
            return 0;
        }
    }
    return 1;
    
}

int main(int argc, char const *argv[])
{
    char str1[] = "abcd";
    char str2[] = "abc";
    printf("%d", StringEqual(str1, str2));
}
