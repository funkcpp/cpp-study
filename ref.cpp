# include<iostream>

int increase (int value){

    value ++;
    return value;
}

int increase_2(int& value){
    value ++;
    return value;
}

int increase_3(int* value){
    (*value) ++;
    return *value;
}
int main(){
    
    int a = 5;
    std :: cout << increase(a) << std::endl;
    std :: cout << a << std :: endl;
    std :: cout << increase_2(a) << std :: endl;
    std :: cout << a << std :: endl; 

    int b = 5;
    int& ref = a;
    std :: cout << "a:" << a <<std :: endl;
    std :: cout <<"ref:"<< ref << std :: endl;
    ref = b;

    std :: cout <<"ref:"<< ref << std :: endl;
    std :: cout <<"a:"<<a << std :: endl;
    
    a = 6;

    std :: cout << a <<' '<< b << std :: endl;

    int* ref_1 = &a;
    std :: cout << "ref_1:"<<*ref_1 << std :: endl;

    ref_1 = &b;

    std :: cout << "ref_1:" << *ref_1 << std :: endl;
    std :: cout << "a:" << a << " " <<"b:"<< b << std :: endl;


    std :: cout << "a:" << a << std :: endl;
    
    std :: cout << increase_3(&a) << std :: endl;

    std :: cout << "a:" << a << std :: endl; 

    return 0;
}

