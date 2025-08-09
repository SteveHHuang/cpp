#include <iostream>

using namespace std;

/*
三种访问权限: 
public 类内类外都可以访问
protected 类内可以访问、类外不可访问、子类不可访问
private 类内可以访问、类外不可访问、子类可以访问
*当一个class不加任何权限的时候。成员变量默认是private
**后两个成员虽然不可访问，但可通过设置public函数来控制读写权限以及data validation

B -> A

A是父类、基类       名字、房子、支付密码
B是子类、派生类     public、protected、private

B可以访问A的protected成员

*/


class people{

public:
    int mem_id;

protected:
    int mem_houseid;

private:
    int mem_paypwd;

public:
    void work(){
        mem_id = 2;
        mem_houseid = 1001;
        mem_paypwd = 1234; 
        //所有类型的成员变量在类内都可以访问
    }
};

int main(){
    // 通过类来生成对象的过程 叫做 实例化
    people hh;
    // 访问对象属性
    hh.mem_id = 300; // public成员在类外可以访问
    // hh.mem_houseid = 300; // protected成员在类外不可访问
    // hh.mem_paypwd = 1110; // private成员在类外不可访问

    

    return 0;

}