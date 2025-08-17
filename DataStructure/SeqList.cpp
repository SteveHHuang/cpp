#include <iostream>
#define eleType int

using namespace std;


struct SeqList{
    eleType *elements;
    int size;
    int capacity;

};

void initialise(SeqList* list, int capacity){
    list->elements = new eleType[capacity]; //list不是对象，是指针。所以list.elements是错误的
    list->capacity = capacity; //用->来获取结构体指针类型的元素的成员变量
    list->size = 0;
}

void destroyList(SeqList* list){
    delete[] list->elements;
}

int getSize(SeqList* list){
    return list->size;
}

bool isEmpty(SeqList* list){
    return 0 == list->size;
}

void Expansion(SeqList* list){
    int newcapacity = list->capacity *2;
    eleType* newlist = new eleType[newcapacity];
    
    for (int i = 0; i < list->capacity; ++i){
        newlist[i] = list->elements[i];
    }
    delete [] list->elements;
    list->elements = newlist;
    list->capacity = newcapacity;
    
}

void insertNewEle(SeqList* list, eleType element, int index){
    if (index < 0 || index > list->size){
        throw std::invalid_argument("invalid syntax");
    }
    if(list->size == list->capacity){
        Expansion(list);
    }

    for(int i = list->size; i>index; --i){
        list->elements[i] = list->elements[i-1];

    }
    list->elements[index] = element;
    list->size ++;
}

void deleteEle(SeqList* list, int index){
    if (index < 0 || index >= list->size){
        throw std::invalid_argument("invalid syntax");
    }

    for(int i = index; i<list->size; ++i){
        list->elements[i] = list->elements[i+1];
    }
    list->size --;
}  