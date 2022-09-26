#include <stdio.h>
#include "iostream"

using namespace std;
//1.2
/*
class A
{
public:
float xa;
A(float AA=0)
{
xa=AA;
}
A(const A &AO)
{
xa=AO.xa;
}
~A()
{
delete &xa;
}
float Y()
{
xa=xa*xa;
return xa;
}
float getxa()
{
return xa;
}
};

class B: public A
{
public:
float z;
};

class C: protected A
{
private:
float z;
};
*/
//////////////////////////////////////////////////////////////
//1.3
/*class X1
{
int ix1;
public:
int f1()
{
return ix1;
}
void f2(int ix)
{
ix1=ix;
}
};

class Y1: protected X1
{
public:
int Y1_X()
{
return(f1()*f1());
}
void f2(int ix)
{
X1::f2(ix);
}
int f3()
{
return (X1::f1());
}

};

class Z1: public Y1
{

};

class X2
{
protected:
int ix2=6;
public:
int f2(){}
};

class Y2:X2{
public:
int Y2_X()
{
return(ix2*ix2*ix2);
}
int f4()
{
return ix2;
}
};
class Z2: public Y2
{
public:
void vivod_ix2()
{
cout«"ix2="«Y2::f4()«endl;
}
};

class twom
{
double x,y;
public:
twom(double x1=1, double y1=1):x(x1),y(y1){}
double sq(){return x*y;}
};

class thm: private twom
{
double z;
public:
thm(double x1=1, double y1=1, double z1=1): twom(x1,y1),z(z1){}
double vol(){return sq()*z;}
};*/

///////////////////////////////////////////////////////////////
//1.4
/*
class A
{
private:
float xa;
public:
void Y()
{
xa=xa*xa;
}

float Get_xa()
{
return xa;
}
void Set_xa(float xa2)
{
xa=xa2;
}
};

class B: public A
{
public:
void Y()
{
Set_xa(Get_xa()/2);
}
};
*/
/////////////////////////////////////////////////////////////////
//1.5
/*
class A
{
private:
float xa;
public:
void Y()
{
xa=xa*xa;
cout«"Ymnojenie"«endl;
}

float Get_xa()
{
return xa;
}

void Set_xa(float xa2)
{
xa=xa2;
}
};

class B: public A
{
public:
void Y()
{
Set_xa(Get_xa()/2);
cout«"Delenie"«endl;
}
};
*/
////////////////////////////////////////////////////////////////
//2.1
/*
class A
{
public:
int x, xa;
};

class B
{
public:
int x, xb;
};
class C: public A, public B
{
public:
int xc;
};
*/
////////////////////////////////////////////////////////////////
//2.2

class A
{
public:
int x,xa;
};
class B: public A
{};
class C: public A
{};
class D: public virtual B, public virtual C
{};
class F: public B, public C
{};


////////////////////////////////////////////////////////////////////
//2.3
/*
class A
{
public:
int x,xa;
virtual int f1()=0;
};
class B: public A
{};
class C: public A
{};
class D: public virtual B, public virtual C
{};
class F: public B, public C
{};
*/
/////////////////////////////////////////////////////////////////////
//2.4
/*
class A
{
public:
int x,xa;
virtual void f1()=0;
};
class B: public A
{
public:
void f1() {};
};
class C: public A
{};
class D: public virtual B, public virtual C
{};
class F: public B, public C
{};*/
////////////////////////////////////////////////////////////////////////
//2.5
/*class A
{
public:
float xa;
A(float xa2=0)
{
xa=xa2;
}
A(const A &AA)
{
xa=AA.xa;
}
~A()
{
delete &xa;
}
void virtual Y()
{
xa=xa*xa;
cout«"Ymnojenie"«endl;
}
float Get_xa()
{
return xa;
}

};
class B: public A
{
public:
void Y()
{
xa=xa/2;
cout«"Delenie"«endl;
}
};*/
