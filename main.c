#include "myStdio.h"

int main(){
    FILE_ *fp = fopen_("./log.txt", "w");
    if(fp == NULL){
        return 1;
    }

    int cnt = 10;
    const char *msg = "hello myStdio";
    while(cnt--){
        fwrite_(msg, strlen(msg), fp);
        sleep(1);
    }

    fclose_(fp);

    return 0;
}
