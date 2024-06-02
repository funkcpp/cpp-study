// 匿名 union 结构体的使用
 # include<iostream>

struct widget
{
    char band[20];
    int price;
    union
    {
        char id_char[20];
        int id_num;
    }; // 使用匿名 union 时不设置变量名称，存放在同一地址，由程序自行判断
    
};

int main(){
    widget n1 = {"nike",100,100};
    widget n2 = {"adidas",1000,"cool"};

    std :: cout << n1.band << n1.price << n1.id_num << std :: endl;
    std::cout << n2.band<<n2.price << n2.id_char << std :: endl;
}

