#include "graphics.h"
#include <iostream>
void point(int a,int b)
{
	line(a-8,b-8,a+8,b+8);
	line(a-8,b+8,a+8,b-8);
}
void pointl(int a,int b)
{
	line(a,b,a+8,b-8);
	line(a,b,a+8,b+8);
}
void pointr(int a,int b)
{
	line(a,b,a-8,b-8);
	line(a,b,a-8,b+8);
}
void main()
{
	int driver=DETECT,model;
	initgraph(&driver,&model," ");
	int i;

	setcolor(4);
	//框
	line(10,10,370,10);
	line(10,10,10,415);
	line(10,415,370,415);
	line(370,415,370,10);
	
	//纵行上
	line(55,10,55,190);
	line(100,10,100,190);
	line(145,10,145,190);
	line(190,10,190,190);
	line(235,10,235,190);
	line(280,10,280,190);
	line(325,10,325,190);
	line(370,10,370,190);
	//纵行下
	line(55,235,55,415);
	line(100,235,100,415);
	line(145,235,145,415);
	line(190,235,190,415);
	line(235,235,235,415);
	line(280,235,280,415);
	line(325,235,325,415);
	line(370,235,370,415);
	
	
	//横行
	
	line(10,55,370,55);
	line(10,100,370,100);
	line(10,145,370,145);
	line(10,190,370,190);//河界
	
	line(10,235,370,235);//河界
	line(10,280,370,280);
	line(10,325,370,325);
	line(10,370,370,370);
	line(10,415,370,415);
	//城上
	line(145,10,235,100);
	line(235,10,145,100);
	//城下
	line(145,415,235,325);
	line(235,415,145,325);
	//点上
	point(55,100);
	point(325,100);
	
	pointl(10,145);
	point(100,145);
	point(190,145);
	point(280,145);
	pointr(370,145);
	
	
	
	//点下
	point(55,325);
	point(325,325);
	
	
	pointl(10,280);
	point(100,280);
	point(190,280);
	point(280,280);
	pointr(370,280);
	std::cin>>i;
	closegraph();
}
/* line(200,300,300,300);//画线

  rectangle(100,100,200,200);//画矩形
  
	setcolor(7);//设置画笔颜色
	
	  circle(50,50,40);//画圆
	  std::cin>>i;
	  closegraph();
	  
*/