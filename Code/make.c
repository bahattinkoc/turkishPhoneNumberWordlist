#include <stdio.h>

int main()
{
	int i1,i2,i3,i4,i5,i6,i7,val;
	
	char a[11] = {'0', '2', '1', '2', '0', '0', '0', '0', '0', '0', '0'};
	
	FILE *fs;
	printf("Area Code ..\n[0] with ZERO\n[1] withOUT ZERO\n\nChose: ");
	scanf("%d", &val);
	if(val == 0){
		fs = fopen("D://withZERO.txt", "a");
		for(i1 = 0; i1 < 10; i1++)
			for(i2 = 0; i2 < 10; i2++)
				for(i3 = 0; i3 < 10; i3++)
					for(i4 = 0; i4 < 10; i4++)
						for(i5 = 0; i5 < 10; i5++)
							for(i6 = 0; i6 < 10; i6++)
								for(i7 = 0; i7 < 10; i7++)
								{
									a[4] = i1 + '0'; a[5] = i2 + '0'; a[6] = i3 + '0';
									a[7] = i4 + '0'; a[8] = i5 + '0'; a[9] = i6 + '0';
									a[10] = i7 + '0';
									
									a[0] = '0'; a[1] = '2'; a[2] = '1'; a[3] = '2';//0212
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '2'; a[2] = '1'; a[3] = '6';//0216
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '0';//0530
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '1';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '2';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '3';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '4';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '5';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '6';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '7';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '8';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '3'; a[3] = '9';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '6'; a[3] = '1';//0561
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '0'; a[3] = '1';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '0'; a[3] = '5';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '0'; a[3] = '6';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '0'; a[3] = '7';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '5'; a[3] = '1';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '5'; a[3] = '2';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '5'; a[3] = '3';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '5'; a[3] = '4';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '5'; a[3] = '5';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '5'; a[3] = '9';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '0';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '1';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '2';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '3';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '4';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '5';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '6';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '7';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '8';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '0'; a[1] = '5'; a[2] = '4'; a[3] = '9';
									fwrite(a, 1, 11, fs);
									fwrite("\n", sizeof(char), 1, fs);
								}
							}
	else if(val == 1){
		fs = fopen("D://withOUTZERO.txt", "a");
		for(i1 = 0; i1 < 10; i1++)
			for(i2 = 0; i2 < 10; i2++)
				for(i3 = 0; i3 < 10; i3++)
					for(i4 = 0; i4 < 10; i4++)
						for(i5 = 0; i5 < 10; i5++)
							for(i6 = 0; i6 < 10; i6++)
								for(i7 = 0; i7 < 10; i7++)
								{
									a[3] = i1 + '0'; a[4] = i2 + '0'; a[5] = i3 + '0';
									a[6] = i4 + '0'; a[7] = i5 + '0'; a[8] = i6 + '0';
									a[9] = i7 + '0';
									
									a[0] = '2'; a[1] = '1'; a[2] = '2';//212
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '2'; a[1] = '1'; a[2] = '6';//216
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '0';//530
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '1';//531
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '2';//532
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '3';//533
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '4';//534
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '5';//535
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '6';//536
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '7';//537
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '8';//538
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '3'; a[2] = '9';//539
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '6'; a[2] = '1';//561
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '0'; a[2] = '1';//501
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '0'; a[2] = '5';//505
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '0'; a[2] = '6';//506
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '0'; a[2] = '7';//507
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '5'; a[2] = '1';//551
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '5'; a[2] = '2';//552
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '5'; a[2] = '3';//553
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '5'; a[2] = '4';//554
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '5'; a[2] = '5';//555
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '5'; a[2] = '9';//559
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '0';//540
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '1';//541
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '2';//542
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '3';//543
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '4';//544
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '5';//545
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '6';//546
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '7';//547
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '8';//548
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
									
									a[0] = '5'; a[1] = '4'; a[2] = '9';//549
									fwrite(a, 1, 10, fs);
									fwrite("\n", sizeof(char), 1, fs);
								}
							}
	else printf("Wrong chose!!");
	fclose(fs);
	return 0;
}

