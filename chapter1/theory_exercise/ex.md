# 新手题库2020——程序设计理论练习一

**本次练习主要考察：基本数据类型、表达式、条件与循环控制语句**

**1.** 已知有两个变量x、y定义如下：`int x=1, y;` 。如果计算`y = (x++)`后，x和y的值将变为：c

A. 1, 1	B. 1, 2	C. 2, 1	D. 2, 2

**2.** 已知`int a = 3;` ，根据表达式的运算规则，计算下面表达式的值：a

```
((3<a++)||(!(6==5*1+1)))==(2-1)
```

A. 0	B. 1	C. 3	D. 6

**3.** 关于数据的强制类型转换，下列说法**错误**的是：c

A. 对于两个类型不同的数据之间进行算数运算时，如果程序没有显示地给出强制类型转换，编译程序往往会将其中一个操作数作隐式强制类型转换后再进行算术运算。

B. 对于一个int类型的变量n，表达式n/3和表达式n/3.0的值可能不一样。

C. 使用强制类型转换将unsigned int型数转化为int数，数据的值一定不会发生改变。

D. 使用强制类型转换将浮点数转化为整型数，可能会丢失精度。

**4.** 下面能够作为合法的C++字面常量的有哪些？（多选）abd

A. 1e-7	B. '\\n'	C. red	D. "Today is Monday."

**5.** 下列逻辑表达式能表示“两位数n不是偶数”的逻辑表达式是 b

A. 10<=n<=99&&n%2	B.(n>=10&&n<=99)&&n%2

C. (n>=10&&n<=99)||n%2	D.(n>=10||n<=99)||n%2

**6.** 已知有如下定义：`int a=3, b=100;`，执行下面的循环后，a,b的值将变为  a

```
while(b/a>5){
	if(b-a>25) a++;
	else b/=a;
}
```

A. 17, 100	B. 16, 100	C. 1, 5	D. 2, 5

**7.** 阅读如下的程序，在给定输入n的情况下，请问下面的程序计算结果res的含义与下面哪个选项一致？a

```
int res = 0;
for(int i = 0; i < n - 1; i ++){
	for(int j = i + 1; j < n; j ++){
		res++;
	}
}
```

A. 在有n个学生的班级中挑选两人的挑法总数

B. 让n个学生排成一路队列的排法总数

C. 所有n*n的0-1矩阵的总数

D. 所有n维0-1列向量的总数

**8.** 阅读下面的程序，该程序总共输出了几个“*”？d

```
for(int i = 0; i < 10; i ++){
	for(int j = 0; j < 10; j ++){
		if(j%2==1) continue;
		if(j>i) break;
		cout << "*";
	}
}
```

A. 1	B. 12	C. 20	D. 30

**9.** 阅读下面的程序，判断下面的程序能否计算所有2-100素数的个数，结果存入变量res中。x

```
int res = 0;
for(int i=2; i<=100; i++){
	res++;
	for(int j=2; j<=i; j++){
		if(i%j==0){
			res--;
			break;
		}
	}
}

```

**10.** 阅读下面的程序，判断下面的程序能否用于交换int型变量a、b的值。v

```
a = a+b;
b = a-b;
a = a-b;
```

**11.** 写出程序运行结果：(x, y输入均为0)

注意：写出程序输出时，请严格按照输出格式填写答案，格式不正确的答案将不予通过。

```
#include <iostream>
using namespace std;
int main() {
	int x, y, a = 0, b = 0;
	cin >> x >> y;
	switch (x) {
	case 0:
		switch (y) {
		case 0:a++; break;
		case 1:b++; break;
		}
	case 1:
		a++; b++; break;
	}
	cout << a << " " << b;
	return 0;
}
```

2 1

**12.** 写出程序运行结果：

```
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int m, k;
	for (k = 1, m = 0; k <= 50; k++) {
		if (m >= 10) break;
		if (m % 2 == 0) {
			m += 5;
			continue;
		}
		m -= 3;
	}
	cout << m << " " << k;
	return 0;
}
```

11 8

**13.** 写出程序运行结果：

```
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	int i, m = 3;
	for (i = 0; i <= m; i++) ;
	cout << "*";
	return 0;
}
```

*

**14.** 写出程序运行结果：(从键盘输入"cbd2DEF34#")

```
#include <iostream>
using namespace std;
int main(){
	char c;
	int num = 0;
	do{
		cin>>c;
		if(c>='0' && c<='9')
			num++;
		else
			continue;
	}while(c!='#');
	cout<<num;
	return 0;
}
```

3

