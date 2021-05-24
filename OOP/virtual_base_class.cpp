#include<iostream>
using namespace std;
class B{
    public:
         int x=100;
};
class C1:public B{ //Inheriting class B
    public:
        int a=1;
};
class C2:public B{ //Inheriting class B
    public:
        int a=2;
};
class C3:public B{ //Inheriting class B
    public:
        int a=3;
};

/*Class D: public C1,C2,C3 { 
    
    Inherits class C1 in public mode, C2.C3 in private mode(Default access specifier)
}
*/
class D1: public C1,public C2,public C3{ //Multiple Inheritance   
    public:
        int b=500;
};

class C4:virtual public B{ //Inheriting  class B virtually
    public:
        int a=4;
};
class C5:virtual public B{ //Inheriting class B virtually
    public:
        int a=5;
};
class C6: virtual public B{ //Inheriting class B virtually
    public:
        int a=6;
};

class D2: public C4,public C5,public C6{ //Multiple + Multilevel Inheritance
    public:
        int b=1000;
};
int main(){
    D1 d1;
    // In d1 there are 3 copies of attribute 'a' each belonging to class C1,C2,C3
    //Referring d1.a creates ambiguity to compiler if you refer without resolving scope and hence results error.
    cout<<d1.C1::a<<endl; 
    cout<<d1.C2::a<<endl;
    cout<<d1.C3::a<<endl;
    // In d1 there are 3 copies of attribute 'x' all belonging to class B.
    // You cannot even resolve the scope to access the attribute X that is present in class B, 
    // Hence referring as d1.B::x also creates an error (Ambiguious). To overcome this problem inherit base class in virtual mode
    D2 d2;
     // In d2 there are 3 copies of attribute 'a' belonging to class C4,C5,C6 
     // But d2 has only one copy of attribute 'x' as class B is inherited virtually in C4,C5,C6
    cout<<d2.C4::a<<endl; 
    cout<<d2.C5::a<<endl;
    cout<<d2.C6::a<<endl;
    cout<<d2.x<<endl;
    cout<<d2.C4::x<<endl;  //Similarly C5::x, C6::x also refer to same x.
    return 0;
}