#include <stdio.h>
#include <stdlib.h>

char *clean(char *s);

int main() {
    printf("%s\n",clean(" bloup"));
    printf("%s\n",clean("toc toc "));
    printf("%s\n",clean(" des deux  côtés "));
}

int size(char *s){
    int size = 0;
    while (*s ++ != '\0')
        size ++;
    return size ;
}

char* clean(char *s){
    int N = size(s)+1;
    char *copy = malloc(N * sizeof ( char ));
    int i;
    int j = 0;
    for(i = 0;i<N;i++){
        if(i==0 & s[i]!=' '){
            copy[j] = s[i];
            j++;
        }
        if(i == N & s[i]!=' '){
            copy[j] = s[i];
            j++;
        }
        if(i>0){
            copy[j] = s[i];
            j++;
        }
    }
    return copy;
}