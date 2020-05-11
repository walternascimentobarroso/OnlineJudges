#include <stdio.h>

int main() {
	int dA, hA, mA, sA, totalA, dB, hB, mB, sB, totalB, dF, hF, mF, sF, totalF;
	scanf(" Dia %d\n", &dA);
	scanf("%d : %d : %d\n", &hA, &mA, &sA);
	scanf("Dia %d\n", &dB);
	scanf("%d : %d : %d\n", &hB, &mB, &sB);
	fflush(stdin);
	
	totalA = dA*86400 + hA*3600 + mA*60 + sA;
    totalB = dB*86400 + hB*3600 + mB*60 + sB;
    totalF = totalA - totalB;
	if(totalF>=60){
		dF = totalF/86400;
		hF = (totalF%86400)/3600;
		mF = ((totalF%86400)%3600)/60;
		sF = ((totalF%86400)%3600)%60;
	} else {
		dF = (totalF/86400) * -1;
		hF = ((totalF%86400)/3600) * -1;
		mF = (((totalF%86400)%3600)/60) * -1;
		sF = (((totalF%86400)%3600)%60) * -1;
	}
	
	printf("%d dia(s)\n", dF);
	printf("%d hora(s)\n", hF);
	printf("%d minuto(s)\n", mF);
	printf("%d segundo(s)\n", sF);
	return 0;
}

