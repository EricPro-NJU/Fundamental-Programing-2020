# 级数求和

### 题目背景

本题满分10分

### 题目描述

对于某个输入正整数$n$和正数$x$，求和：
$$
1+x+\frac{x^2}{2!}+\frac{x^3}{3!}+...+\frac{x^n}{n!}
$$
**注意：**本题$x$类型是浮点数，且计算阶乘及乘方时，数据规模可能溢出基本数据类型所能表示的数据范围，请思考如何用**迭代**的方法解决这个问题。

### 输入格式

一行两个数，一个正整数$n$和一个正浮点数$x$

### 输出格式

求和的值，**保留3位小数**。

### 输入输出样例

#### input1

````
1 1
````

#### output1

```
2.000
```

#### input2

```
4 3
```

#### output2

```
16.375
```



### 说明

#### 输入数据规模

$1<=n<=100$

$0<x<=10$