//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
////类做友元
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//参观函数，访问Building中的属性
//	Building* building;
//};
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
////类外写成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	// 创建建筑物对象
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "friend visiting:" << building->m_SittingRoom << endl;
//}
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	return 0;
//}
//
