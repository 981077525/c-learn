#include <stdio.h>
//�˽�һ��c���Ե�����ѭ�����
int main(){
	//��һ�֣�whileѭ��
	//while (������дѭ������������)
	//{
	//	����дѭ����;
	//}
	//break��whileѭ���е����ã�
	//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ���� ���ԣ�while�е�
	//break������������ֹѭ���ġ�
	//���磺
	int codeline;
	printf("��������Ĵ�������\n");
	scanf("%d", &codeline);
	while (codeline < 10000)
	{
		printf("Ŭ��д������\n");
		codeline++;
	}
	return 0;
}