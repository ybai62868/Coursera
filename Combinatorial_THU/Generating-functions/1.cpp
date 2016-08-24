#include <iostream>
using namespace std;
// Author: Tanky Woo
// www.wutianqi.com
const int _max = 10001; 
// c1是保存各项质量砝码可以组合的数目
// c2是中间量，保存每一次的情况
int c1[_max], c2[_max];   
int main()
{	//int n,i,j,k;
	int nNum;   // 
	int i, j, k;

	while(cin >> nNum)
	{
		for(i=0; i<=nNum; ++i)   // ---- ①
		{
			c1[i] = 1;
			c2[i] = 0;
		}
		for(i=2; i<=nNum; ++i)   // ----- ②
		{

			for(j=0; j<=nNum; ++j)   // ----- ③
				for(k=0; k+j<=nNum; k+=i)  // ---- ④
				{
					c2[j+k] += c1[j];
				}
				for(j=0; j<=nNum; ++j)     // ---- ⑤
				{
					c1[j] = c2[j];
					c2[j] = 0;
				}
		}
		cout << c1[nNum] << endl;
	}
	return 0;
}
