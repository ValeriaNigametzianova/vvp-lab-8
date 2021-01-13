#include <stdio.h>
#include<math.h>

int main()
{
	int fileSizeBt;
	printf("enter file size(in Bait): ");
	scanf_s("%d", &fileSizeBt);
	double fileSizeKb = fileSizeBt / 1024;
	fileSizeKb =  ceil(fileSizeKb);
	printf("size file (in Kilobait): %.0lf", fileSizeKb);
	return 0;
}