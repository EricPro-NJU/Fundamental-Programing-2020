#include <iostream>  
#include<string.h>
using namespace std;
int main()
{
	int v1, v2, t, s, l;
	cin >> v1 >> v2 >> t >> s >> l;
	int sg = 0, st = 0;
	int tm = 0, wait = 0;
	while (1) {
		if (sg >= l || st >= l)break;
		//一次循环是1秒 
		tm++;
		sg += v2;//乌龟每次循环都加 
		if (wait == 0)
			st += v1;
		else
			wait--;
		if (st - sg >= t)
			wait = s;
	}
	if (sg >= l && st < l)
		cout << "Victory";
	else if (sg < l && st >= l)
		cout << "Defeat";
	else
		cout << "Draw";
	return 0;

}

//https://blog.csdn.net/huanting74/article/details/79754983
//Thanks blogger Miqiuhua