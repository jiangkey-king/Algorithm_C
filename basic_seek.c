#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int order(int arr[], int len, int num);
int main_44() {
    int arr[] = { 11,77,33,99,55 };
    int len = sizeof(arr) / sizeof(int);
    int num;
    scanf("%d", &num);
    int index = order(arr, len, num);
    printf("%d\n", index);

    return 0;
}

//查找数组中的数据
int order(int arr[], int len, int num) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == num) {
            //返回索引
            return i;
        }
    }
    return -1;
}