#include <stdio.h>
#include <stdlib.h>
#include "Person.h"


//#include "Table.h"
//
//int MyHashFunc(int k)
//{
//	return k % 100;
//}
//
//int main(void)
//{
//	Table myTbl;
//	Person* np;
//	Person* sp;
//	Person* rp;
//
//	TBLInit(&myTbl, MyHashFunc);
//
//	//저장
//	np = MakePersonData(20120003, "Lee", "Seoul");
//	TBLInsert(&myTbl, GetSSN(np), np);
//
//	np = MakePersonData(20130012, "Kim", "Jeju");
//	TBLInsert(&myTbl, GetSSN(np), np);
//
//	np = MakePersonData(20170049, "Han", "Kangwon");
//	TBLInsert(&myTbl, GetSSN(np), np);
//	
//	//탐색
//	sp = TBLSearch(&myTbl, 20120003);
//	if (sp != NULL)
//		ShowPerInfo(sp);
//
//	sp = TBLSearch(&myTbl, 20130012);
//	if (sp != NULL)
//		ShowPerInfo(sp);
//
//	sp = TBLSearch(&myTbl, 20170049);
//	if (sp != NULL)
//		ShowPerInfo(sp);
//
//	//삭제
//	rp = TBLDelete(&myTbl, 20120003);
//	if (rp != NULL)
//		free(rp);
//
//	rp = TBLDelete(&myTbl, 20130012);
//	if (rp != NULL)
//		free(rp);
//
//	rp = TBLDelete(&myTbl, 20170049);
//	if (rp != NULL)
//		free(rp);
//
//	return 0;
//}


//체이닝 해쉬

#include "Table2.h"

int MyHashFunc(int k)
{
	return k % 100;
}

int main(void)
{
	Table myTbl;
	Person* np;
	Person* sp;
	Person* rp;

	TBLInit(&myTbl, MyHashFunc);

	//추가
	np = MakePersonData(900254, "Lee", "Seoul");
	TBLInsert(&myTbl, GetSSN(np), np);

	np = MakePersonData(900139, "Kim", "Jeju");
	TBLInsert(&myTbl, GetSSN(np), np);

	np = MakePersonData(900827, "Han", "Kangwon");
	TBLInsert(&myTbl, GetSSN(np), np);

	//탐색
	sp = TBLSearch(&myTbl, 900254);
	if (sp != NULL)
		ShowPerInfo(sp);

	sp = TBLSearch(&myTbl, 900139);
	if (sp != NULL)
		ShowPerInfo(sp);

	sp = TBLSearch(&myTbl, 900827);
	if (sp != NULL)
		ShowPerInfo(sp);

	//삭제
	rp = TBLDelete(&myTbl, 900254);
	if (rp != NULL)
		free(rp);

	rp = TBLDelete(&myTbl, 900139);
	if (rp != NULL)
		free(rp);

	rp = TBLDelete(&myTbl, 900827);
	if (rp != NULL)
		free(rp);


	return 0;
}