#include "sqlist.h"
typedef char ElemType;
int main()
{   SqList * L;
    ElemType e;
	printf("˳���Ļ�����������:\n");
    printf("(1)��ʼ��˳���L\n");
	   InitList(L);
	printf("(2)���β���a,b,c,d,eԪ��\n");
	 ListInsert(L,1,'a');
 	 ListInsert(L,2,'b');
	 ListInsert(L,3,'c');
 	 ListInsert(L,4,'d');
	 ListInsert(L,5,'e');
    printf("(3)���˳���L:\n");DispList(L);
    printf("(4)˳����ȣ�%d\n",ListLength(L));
	printf("(5)˳���LΪ%s\n",(ListEmpty(L)?"��":"�ǿ�"));
	   GetElem(L,3,e);
	printf("(6)˳���L�ĵ�����Ԫ�أ�%c\n",e);
	printf("(7)Ԫ��a��λ�ã�%d\n",LocateElem(L,'a'));
	printf("(8)�ڵ��ĸ�Ԫ��λ���ϲ���fԪ��\n");
	ListInsert(L,4,'f');
	printf("(9)���˳���L:\n"); DispList(L);
	printf("(10)ɾ��L�ĵ�����Ԫ��\n");
		ListDelete(L,3,e);
	printf("(11)���˳���L��\n"); DispList(L);
	printf("(12)�ͷ�˳���L\n");
		DestroyList(L);
	return 1;
}
