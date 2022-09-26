#include <stdio.h>
#include "CSet.h"
#include "iostream"

using namespace std;
		
int main()
{
	setlocale(LC_ALL, "Russian");
	
	//1.2
/*
A a;
B b;
C c;
A *pa;
B *pb;
C *pc;

pc=&c;
b.xa=3.4;
cout«"value xa= "«b.xa«endl;
//pc->z=1.2;// ???€???±???°
//pc->xa=1.5;// ???€???±???°
b.z=2.3;
cout«"value z= "«b.z«endl;

pb=&b;
pa=pb;
pa=(A*)pb;

//pa=pc;// ???€???±???°

pa=(A*)pc;

pa->xa=4.2;
// cout«c.getxa()«endl; //???€???±???°

a=b;
cout«"value xa= "«a.xa«endl;
*/
//////////////////////////////////////////////////////////////////////
//1.3
/* Y1 y;
y.Y1::f2(5);
cout«"ix1="«y.Y1::f3()«endl;
cout«"ix1*ix1="«y.Y1::Y1_X()«endl;

Z2 z;
z.vivod_ix2();
cout«"ix2*ix2*ix2="«z.Y2::Y2_X()«endl;

thm t1(1,2,3);
double d1;
d1=t1.vol();
cout«"vol="«d1«'\n';*/
//////////////////////////////////////////////////////////////////////
//1.4
/* B b;
b.Set_xa(4);
cout«"start xa="«b.Get_xa()«endl;
b.Y();
cout«"xa/2="«b.Get_xa()«endl;
b.A::Y();
cout«"xa*2="«b.Get_xa()«endl;*/
//////////////////////////////////////////////////////////////////////
//1.5
/*
A a1;
B b1;
A *pa;
B *pb;
a1.Set_xa(4);
b1.Set_xa(4);
pb=&b1;
pb->Y();
cout«"xa object a1="«a1.Get_xa()«endl;
cout«"xa object b1="«b1.Get_xa()«endl;
pa=pb;
pa->Y();
cout«"xa object a1="«a1.Get_xa()«endl;
cout«"xa object b1="«b1.Get_xa()«endl;
pb=(B*)&a1;
pb->Y();
cout«"xa object a1="«a1.Get_xa()«endl;
cout«"xa object b1="«b1.Get_xa()«endl;

*/
///////////////////////////////////////////////////////////////////////
//2.1
/* C c;
c.B::x=1;
cout«"c in B class="«c.B::x«endl;
c.A::x=2;
cout«"c in A class="«c.A::x«endl;*/
/////////////////////////////////////////////////////////////////////
//2.2

D d;
F f;
cout<<"sizeof(d)="<<sizeof(d)<<endl;
cout<<"sizeof(f)="<<sizeof(f)<<endl;


////////////////////////////////////////////////////////////////
//2.3
//A a;

//////////////////////////////////////////////////////////////
//2.4
// B b;
//////////////////////////////////////////////////////////////
//2.5
/* A a;
B b;
A *pa;
B *pb;
pb=&b;
pa=pb;
pa->xa=4;
cout«"xa object a1="«a.Get_xa()«endl;
cout«"xa object b1="«b.Get_xa()«endl;
pa->Y();
cout«"xa object a1="«a.Get_xa()«endl;
cout«"xa object b1="«b.Get_xa()«endl;*/
	
	return 0;
}
