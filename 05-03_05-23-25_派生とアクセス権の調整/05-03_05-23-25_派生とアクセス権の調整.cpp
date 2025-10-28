//退会済み会員クラスのアップキャストが行えないことの確認、コンパイルエラーになる

#include<iostream>
#include"ResigningMember.h"

using namespace std;

int main()
{
	ResigningMember zundamon("ずんだもん", 31, 35.0);

	Member* m = &zundamon; //アップキャスト不可！
}