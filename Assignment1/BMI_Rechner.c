//---------------------------------------------------
// Das Programm berechnet und kategorisiert den 
// BMI (Bodymassindex) eines Benutzers.
// BMI = (Körpergewicht in kg) / (Körpergröße in m)²
//---------------------------------------------------
#include <stdio.h>
#include <string.h>

int main()
{	
	int gewicht;
	int groesse;
	float bmi;
	char category[30];

	printf("Bitte geben Sie Ihr Gewicht in kg ein:\n");
	scanf("%d", &gewicht);

	printf("Bitte geben Sie Ihre Koerpergroesse in cm ein:\n");
	scanf("%d", &groesse);

	bmi = gewicht / ((groesse / 100.0f) * (groesse / 100.0f));

	if (bmi < 16.0f)
	{
		strcpy(category, "Starkes Untergewicht");
	}
	else if (bmi >= 16.0f && bmi < 17.0f)
	{
		strcpy(category, "Maessiges Untergewicht");
	}
	else if (bmi >= 17.0f && bmi < 18.5f)
	{
		strcpy(category, "Leichtes Untergewicht");
	}
	else if (bmi >= 18.5f && bmi < 25.0f)
	{
		strcpy(category, "Normalgewicht");
	}
	else if (bmi >= 25.0f && bmi < 30.0f)
	{
		strcpy(category, "Praeadipositas");
	}
	else if (bmi >= 30.0f && bmi < 35.0f)
	{
		strcpy(category, "Adipositas Grad I");
	}
	else if (bmi >= 35.0f && bmi < 40.0f)
	{
		strcpy(category, "Adipositas Grad II");
	}
	else if(bmi >= 40.0f)
	{
		strcpy(category, "Adipositas Grad III");
	}

	printf("BMI: %.1f\n", bmi);
	printf("Kategorie: %s\n", category);

	return 0;
}