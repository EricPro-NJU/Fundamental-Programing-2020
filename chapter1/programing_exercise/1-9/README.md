# 整数的位数

### 题目背景

关于整数位数的循环是我们今后要学习的一个专题，今天先来个最简单的。

本题满分5分

### 题目描述

输入一个正整数n，判断n是几位数。

### 输入格式

一个正整数n

### 输出格式

一个正整数，代表n的位数。

### 输入输出样例

#### 输入1

```
1354
```

#### 输出1

```
4
```

#### 输入2

```
15
```

#### 输出2

```
2
```

### 数据规模约定

$0<n<=10^9$

### 警告

**不允许使用**以下算法计算位数：

```c++
if(n>=1 && n<=9){ //禁止使用这种方法。
	res = 1;
}
else if(n>=10 && n<=99){
	res = 2;
}
else ...
```
