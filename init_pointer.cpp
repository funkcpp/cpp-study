# include<iostream>

int main(){
    int var = 8;
    int* ptr = &var;
    
    std :: cout << ptr << std :: endl;
    std :: cout << *ptr << std :: endl;

    *ptr = 99;
    std :: cout << *ptr  << std :: endl;

    std:: cout << var << std::endl;

    std :: cout << ptr << std::endl;
    
    return 0;
}