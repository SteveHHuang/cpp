#include <iostream>

using namespace std;
// OOP三大特性：封装、继承、多态

/*
封装语法：

class 类名 {

访问权限:
    属性——成员变量
    行为——成员函数
}；


*/


class hero{
// 三种访问权限 public, private, protected
public:
    int mem_id;
    int mem_hp;

    void add_hp(int hp){
        mem_hp += hp;
    };

    void subtract_hp(int hp){
        mem_hp -= hp;
    }
};

int main(){
    // 通过类来生成对象的过程 叫做 实例化
    hero h;
    // 访问对象属性
    h.mem_id = 5;
    h.mem_hp = 300;
    h.add_hp(100);

    cout << h.mem_id << '\n';
    cout << h.mem_hp << '\n';



}