# include<iostream>

int main(){
    
    void* ptr_0 = nullptr; // cpp建立空指针的一个方法,空指针所对应的地址是0。反过来说，0地址是不能进行任何编译的

    int var = 8;
    void* ptr_1 = &var; // void 类型就是 未声明
    
    std :: cout << ptr_0<< std::endl;
    std :: cout << ptr_1 << std :: endl;
    return 0;
}