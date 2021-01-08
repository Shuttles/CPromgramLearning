/*************************************************************************
	> File Name: main.c
	> Author: 少年宇
	> Mail: 
	> Created Time: 2021年01月07日 星期四 15时24分36秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <haizei/test.h>
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

TEST(testFunc, add) {
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_EQ(add(5, 3), 9);
    EXPECT_EQ(add(6, 7), 9);
}

TEST(testFunc, add2) {
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_EQ(add(5, 3), 9);
    EXPECT_EQ(add(6, 7), 14);
}

TEST(test, Funcadd) {
    EXPECT_EQ(add(5, 3), 8);
    EXPECT_EQ(add(5, 3), 9);
    EXPECT_EQ(add(6, 7), 13);
}

int main(int argc, char *argv[]) {
    return RUN_ALL_TESTS();
}
