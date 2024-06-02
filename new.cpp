# include<iostream>
# include<cstring>
#include <string.h>
int main(){
    int* per = new int;

    std :: cout <<"per_address:"<< per << std :: endl;

    std :: cout << "per_val:" << *per << std :: endl;

    // 给地址赋值

    *per = 1001;

    std :: cout << "per_val:" << *per << std :: endl;

    // 利用 int 数组来建立内存空间

    int* per_1 = new int[10];
    std :: cout << "per_address:" << per << std :: endl;
    std :: cout << "size of per_1"<< sizeof(*per_1) << std :: endl; 
    memset(per_1,1,1);
    std :: cout << "size of per_1" << sizeof(*per_1) << std :: endl;
    std :: cout << *per_1 << std :: endl;
    memset(per_1,1,2);
    std :: cout << *per_1 << std :: endl;
    delete [] per_1;

    std :: cout << *per_1 << std :: endl; // delete 就出现奇怪的数字，估计是默认内存了
    std :: cout << "t"<<per_1 << std :: endl; // 地址也和之前不一样了
    // delete 只会释放掉指针指向的内存，而不会将整个指针删除，还可以继续调用指针，譬如说

    int a = 1000;
    per_1 = &a;
    std :: cout << per_1 << std :: endl;
    std :: cout << *per_1 << std :: endl;


    // 利用 char 数组来建立内存空间
    char* per_2 = new char[20];
    memset(per_2,1,10);
    std :: cout <<  *per_2 << std :: endl;
    memset(per_2,67,10);
    std :: cout <<  *per_2 << std :: endl;
    memset(per_2,'_',20);
    std :: cout <<  *per_2 << std :: endl;
    delete [] per_2;
    return 0;
}