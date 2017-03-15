#define P_HEIGHT 20
#define P_WIDTH 30

#include <stdio.h>
#include <Windows.h>

void InitArray();
void DrawBuffer();
void PaintChar(int iHeight, int iWidth, char cChangeChar);

//�г� ����
char cPaintPanel[P_HEIGHT][P_WIDTH] = {
	{ ' ', ' ', ' ', 'N', ' ', ' ', 'N', ' ', ' ', ' ', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', ' ', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', 'N', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', 'N', 'N', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N' },
	{ ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', 'N', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', 'N', 'N', 'N', ' ', 'N', ' ', 'N', ' ', 'N', 'N', ' ', ' ', ' ', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N' },
	{ 'N', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', 'N', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N' },
	{ ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ ' ', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ 'N', 'N', ' ', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ 'N', 'N', ' ', 'N', 'N', ' ', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', 'N', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', ' ', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ ' ', 'N', 'N', 'N', ' ', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', ' ', 'N', ' ', ' ' },
	{ ' ', ' ', 'N', 'N', ' ', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N' },
	{ 'N', 'N', ' ', 'N', ' ', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' }
};

void main()
{
	while (1){
		system("cls");
		InitArray();

		DrawBuffer();
		Sleep(3000);

		PaintChar(2, 3, '.');
		Sleep(3000);
	}
}

//�г� �ʱ�ȭ
void InitArray()
{
	int i, j;
	for (i = 0; i < P_HEIGHT; i++){
		for (j = 0; j < P_WIDTH; j++){
			if (cPaintPanel[i][j] == '.')
				cPaintPanel[i][j] = 'N';
		}
	}
}

//�г� ��ü�� �׸���
void DrawBuffer()
{
	int h, w;

	for (h = 0; h < P_HEIGHT; h++){
		for (w = 0; w < P_WIDTH; w++)
			printf("%c", cPaintPanel[h][w]);
		printf("\n");
	}
}

//Ư�� ���� ����
void PaintChar(int iHeight, int iWidth, char cChangeChar)
{
	if (((iHeight < 0) && (iHeight + 1 > P_HEIGHT)) ||
		((iWidth < 0) && (iWidth + 1 > P_WIDTH)))
		return;

	if (cPaintPanel[iHeight][iWidth] == 'N'){
		cPaintPanel[iHeight][iWidth] = cChangeChar;
		system("cls");
		DrawBuffer();
		Sleep(30);
	}
	else {
		return;
	}

	PaintChar(iHeight, iWidth + 1, cChangeChar);
	PaintChar(iHeight - 1, iWidth, cChangeChar);
	PaintChar(iHeight, iWidth - 1, cChangeChar);
	PaintChar(iHeight + 1, iWidth, cChangeChar);
}
//�ӵ��� ������(������ ȣ�� ��, �˻���)
//but ���������� ����