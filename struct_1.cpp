// study for struct

// struct 的组成部分由 

// 关键字: struct
// 标记成为的新类型的名称
// 结构成员

// 组成

// 例如

// struct study{
//     int name;
//     char hat[20];
//     double price;
// };

// 设置完成后可以直接用新类型定义变量了

// 也可以用 . 来访问内部成员信息

// 例子

# include<iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(){
    // 初始化结构体

    inflatable guest = {
        "David Tao",  // name value
        1.88,   // volume value
        29.99  // pricr value
    };

    // 结构体初始化和数组初始化十分类似,都是用逗号初始化
    
    std :: cout << guest.name << ' ';
    std :: cout << guest.volume << ' ';
    std:: cout << guest.price << ' ';


    return 0;
}
