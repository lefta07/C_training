//comment

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printlen(size_t len, char* moji);

int main(void){
    setbuf(stdout, NULL);
    int i = 21;
    char moji[i];
    char scpt;
    int loop, mode, key;
    size_t len;

    loop = 0;
    mode = 0;
    
    printf("%d文字以内で入力してください:", i-1);
    while(1){
        scpt = getchar();
        printf("%c", scpt);
        moji[loop] = scpt;
        loop ++;

        if ((i == loop) && (mode==1)){
            printf("\n%d文字より多く入力されました。\n", i-1);
            return EXIT_FAILURE;
        }else if(scpt=='\n'){
            if((i < loop) && (mode==0)){
                printf("\n%d文字より多く入力されました。\n", i-1);
            }
            break;
        }
    }
    printlen(len, moji);
}

void printlen(size_t len, char* moji){
    len = strlen(moji);
    printf("入力された文字のbyte数は%ldでした", len-1);
    puts("");
}
