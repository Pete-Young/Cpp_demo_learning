#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Point
{
private:
	void setX(int x)
	{
		m_X = x;
	}
	int getX()
	{
		return m_X;
	}
	void setY(int y)
	{
		m_Y = y;
	}
	int getY()
	{
		return m_Y;
	}
// Y......------
private:
	int m_X;
	int m_Y;
};
class Circle
{
public:
	// 设置半径，获取半径，设置圆心，获取圆心；
	void setR(int r)
	{
		m_R = r;
	}
	int getR()
	{
		return m_R;
	}
	void setCenter(Point center)
	{
		m_Center = center;
	}
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;
	Point m_Center;

};

// 判断点园关系
void isInCircle(Circle& c, Point& p)
{
	int distance = pow(c.getCenter().getX() - p.getX()) + pow(c.getCenter().getY() - p.getY())
		int rDistance = c.getR() * c.getR;
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX() = 10;
	center.setY() = 0;

}
