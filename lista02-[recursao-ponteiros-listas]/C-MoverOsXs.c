#include <stdio.h>
#include <string.h>

int qtdX(char*string){
    int contador=0;
    if(*string=='x'){contador++; return contador+ qtdX(string+1);}
    else{if(*string=='\0'){return 0;} return qtdX(string+1);}
}

int printX(int quantidade){
    if(quantidade>0){printf("%c",'x'); return printX(quantidade-1);}
    if(quantidade==0){return 0;}
}

void printNotX(char*string){
    if(*string!='x' && *string!='\0'){
        printf("%c",string[0]);
        if(string+1!='\0'){
            printNotX(string+1);
        }
    }
    if(*string=='x'){if(string+1!='\0'){printNotX(string+1);}}
    else{return;}

}

int main(){
    char arr[1000];
    scanf("%s",arr);
    int countX = qtdX(arr);
    printNotX(arr);
    printX(countX);
    printf("\n");
}
