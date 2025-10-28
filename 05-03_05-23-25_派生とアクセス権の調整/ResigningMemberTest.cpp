//退会済み会員クラスの利用例

#include<iostream>
#include"ResigningMember.h"

using namespace std;

int main()
{
	ResigningMember zundamon("ずんだもん", 31, 35.0);

	cout << "番号=" << zundamon.no()<<'\n';
	cout << "体重=" << zundamon.get_weight();
}