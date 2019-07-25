#pragma once
#ifndef __Point_H__
#define __Point_H__

typedef struct _point
{
	int xpos;
	int ypos;
} Point;

//Point 변수의 xpos, ypos 값 설정
void SetPointPos(Point* ppos, int xos, int ypos);

//Point 변수의 xpos, ypos 정보 출력
void ShowPointPos(Point* ppos);

//두 Point 변수이ㅡ 비교
int PointComp(Point* pos1, Point* pos2);

#endif
