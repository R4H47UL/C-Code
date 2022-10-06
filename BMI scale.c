#include<stdio.h>
#include<math.h>
int main(){
    int which, BMI_max, BMI_min;
    float weight, height_inch, BMI, height_meter, weight_min, weight_max;
    printf("Which one do you need?\n1. Find your BMI.\n2. Find your perfect Weight?\n=");
    scanf("%d",&which);
    if (which==1)
    {
        printf("\nYou chose 'FIND YOUR BMI'\nWhat is your weight in Kilogram?\n=");
        scanf("%f",&weight);
        printf("What is your Height in Inch?\n=");
        scanf("%f",&height_inch);
        height_meter=height_inch/39.37;
        BMI=weight/pow(height_meter,2);
        if (BMI<18.5)
        {
            printf("Your BMI is=%0.1f\nLow body weight. Gain weight by eating in moderation. Thank You :)",BMI);
        }
        else if (BMI>=18.5&&BMI<=24.9)
        {
            printf("Your BMI is=%0.1f\nYou are in Ideal standard of good health. Good Job :)",BMI);
        }
        else if (BMI>=25&&BMI<=29.9)
        {
            printf("Your BMI is=%0.1f\nExcess body weight. Exercise is necessary to lose excess weight. Thank You :)",BMI);
        }
        else if (BMI>=30&&BMI<=34.9)
        {
            printf("Your BMI is=%0.1f\nFirst stage of obesity. Diet and exercise are necessary. Thank You :)",BMI);
        }
        else if (BMI>=35&&BMI<=39.9)
        {
            printf("Your BMI is=%0.1f\nSecond stage of obesity. Diet and exercise are must. Thank You :)",BMI);
        }
        else
        {
            printf("Your BMI is=%0.1f\nFull form of obesity. You are at the risk of death. take the suggestions from the doctor.",BMI);
        }
    }
    else if (which==2)
    {
        printf("\nYou chose 'FIND YOUR PERFECT WEIGHT'\nWhat is your Height in Inch?\n=");
        scanf("%f",&height_inch);
        height_meter=height_inch/39.37;
        BMI_min=19;
        BMI_max=24;
        weight_min=BMI_min*pow(height_meter,2);
        weight_max=BMI_max*pow(height_meter,2);
        printf("Your perfect weight would be within %0.3f KG - %0.3f KG.\nTry to maintain your weight within here.\nThank You :)", weight_min, weight_max);
    }
    else
    {
        printf("Are you kidding me? :(");
    }
    return 0;
}