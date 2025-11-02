//２次元クラスTwoDimensional

#pragma once

///２次元クラス（抽象基底クラス）
class TwoDimensional {
public:

	virtual ~TwoDimensional() = 0;

	virtual double get_area() const = 0;
};

//純粋仮想デストラクタ
inline TwoDimensional::~TwoDimensional(){ }
