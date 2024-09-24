#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//无序中有有序
/*1.block Search
  原则1：前一块的max,小于后一块的min(块内无序，快间有序)
  原则2：块数数量一般等于数字的平方根
  思路：先确定要查找的元素在那一块，然后再挨个查找
*/