# 数的性质

### 题目背景

本题开始，我们将开始练习`if` `switch` 分支语句的使用。条件判断的语法只是一个工具，重要的是如何根据题意，选取合适的表达式，达到条件分支的要求。

本题我们将对整数的一些性质进行判断，请选取合适表达式，运用条件分支语句，完成下面的题目。

**本题满分5分。**

### 题目描述

对于一个正整数$n$，小蓝鲸给出了如下5个性质：

- $n$在模3的意义下，与1同余；
- $n$是一个偶数；
- $n$是一个两位数；
- $n$能同时被2和3整除；
- $n$满足不等式$n^2-10n+21>0$；
- $n$的个位数字不是4的倍数。（0也是4的倍数）

对于给定的正整数$n$，请你帮小蓝鲸判断一下，以上有几句话是真的？

### 输入格式

一行，一个正整数$n$

### 输出格式

一行，一个整数，表示以上六句话中真命题的个数。

### 样例输入输出

**input1**

```
10
```

**output1**

```
4
```

**input2**

```
5
```

**output**

```
1
```

### 备注

#### 数据规模约定：

$$
0 <n\leq200
$$
