#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int binarySearch(int arr[], int len, int num);
int main_45() {
	//前提：必须是有序数据
	//原理:每次排除一半的查找范围
	int arr[] = { 7,23,79,81,103,127,131,147 };
	int len = sizeof(arr) / sizeof(int);
	//需要被寻找的数据
	int num;
	scanf("%d", &num);
	//调用二分查找函数
    int index =	binarySearch(arr, len, num);
	printf("%d", index);

	return 0;
}
int binarySearch(int arr[], int len, int num) {
//1.确定范围
	int min = 0;
	int max = len - 1;
	
	while(min<=max){
		int mid = (min + max) / 2;
		/*改进二分查找是的mid更加精确
		 mid = min + (key-arr[min]/arr[max]-arr[min])*(max-min)
		              key即本题中的num，需要寻找的数据
		*/
		if (arr[mid] < num) {
			//范围在右边
			min = mid + 1;
		}
		else if (arr[mid] > num) {
			//范围在左边
			max = mid - 1;
		}
		else {
			return mid;
		}
	}
	//如果min>max，数据不存在，返回-1

	return -1;
}
