#include<bits/stdc++.h>
using namespace std;
//Sometimes you need a class implementation that is same in all classes but only the data types used are different.
//Class Templates make it easy to reuse the code for all data types.

template<class T> // If you want to work with different data types, use multiple templates. 
class Calculator{
    T a,b;
    public: 
        Calculator(T x, T y){a=x;b=y;}
        T add() {return a+b;}
        T subtract(){return a-b;}
        T multiply(){return a*b;}
        T divide(){return a/b;}
};
int main()
{
/*Object creation is quiet different with templates unlike the usage of templates for functions

class_name <data_type> object_name (arguments);  If multiple templates are used, then you must specify pass all the data types

During object creation, memory has to be alloted.

For allocating memory, the variable has to be binded with data type. Hence, it is must to specify the data types for templates (in angular brackets<>) 
*/
    Calculator <int>obj1(1,3); //As you have used only one template, one data type <int> is mentioned. For obj1 you define T to be an int.

    Calculator <float>obj2(1.5,2.5); //For obj2 you define T to be a float.
    cout<< obj1.add()<<endl;
    cout<<obj2.multiply()<<endl;
    return 0;
} 
