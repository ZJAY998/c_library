/*************************************************************************
> FileName: clib_who_example.c
> Author  : DingJing
> Mail    : dingjing@live.cn
> Created Time: 2019年11月07日 星期四 10时00分21秒
 ************************************************************************/
#include <stdio.h>
#include "clib_who.h"
int main (int argc, char* argv[]) {

    printf("There are %d user logged!\n", who_user_num ());
    printf("There are %d user logged!\n", who_user_num ());
    printf("There are %d user logged!\n", who_user_num ());
    return 0;
}
