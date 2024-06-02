# include <iostream>

int main(){
    int* per = new int[8];
    
    per[0] = 1;
    per[1] = 2;
    per[2] = 3;

    std :: cout << per[0] << std :: endl;
    std :: cout << per << std :: endl;

    per = per + 1;
    std :: cout << "--new--" << std :: endl;
    std :: cout << per[0] << std :: endl;
    std :: cout << per[1] << std :: endl;
    std :: cout << per << std ::endl;
    per = per - 1;
    
    delete [] per;

    int per_1[8] = {1,2,3,4,5,6};
    std :: cout << per_1[0] << std :: endl;
    std :: cout << per_1 << std :: endl; // 从输出就可以看出来此时per_1就是代表动态数组的地址 
    // 使用上述写法本质上和用指针建立8个整数的数组效果是一样的

    return 0;
}