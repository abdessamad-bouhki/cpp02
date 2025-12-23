// #include <iostream>

// class Animal
// {
//     public:
//     std::string name;
//         Animal(){}
//         Animal ( Animal &obj)
//         {
//             this->name = obj.name;
//             std::cout << "copy constructer\n";
//         }
//         Animal &operator= (const Animal &animal)
//         {
//             if (&animal == this)
//                 return *this;
//             std::cout << "copy-assignment operator\n";
//             this->name = animal.name;
//             return *this;
//         }
// };

// int main()
// {
//     Animal a1;
//     a1.name = "hfddg";

//     Animal a2(a1);
//     std::cout << a2.name <<'\n';
//     Animal a3;
//     a1 = a1;

//     int a = 1;
//     int b = 2;
//     int c = 3;

//     c = b = a;
//     std::cout << c<<"\n";

// }

int main()
{
    int i = 0;
    int j = i++;
    
}