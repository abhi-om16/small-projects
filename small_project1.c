#include <stdio.h>
int main() {
int n,i,sum = 0,max,busiestHour = 1;
float average = 0;
printf("Enter number of hour: \n");
scanf("%d",&n);
int vehicle[n];
printf("Enter number of vehicle: \n");
for(i = 0;i < n;i++){
    printf("Hour %d: ",i + 1);
    scanf("%d",&vehicle[i]);
    sum += vehicle[i];
}
//Find max of array or BusiestHour
max = vehicle[0];
for(i = 0;i < n;i++){
    if(vehicle[i] > max){
        max = vehicle[i];
        busiestHour = i + 1;
    }
}
average = (float)sum / n;  //Finding Average
printf("Traffic Report: \n");
printf("Number of hours = %d\n",n);
 printf("Busiest Hour =  %d with %d vehicles\n", busiestHour, max);
printf("Average vehicle per hour = %.2f\n",average);
//Traffic indication"
if(average < 20){
    printf("Parking demand: LOW");
}
else if(average >=20 && average < 50){
    printf("Parking demand: MEDIUM");
}
else if(average >= 50){
    printf("Parking demand: HIGH");
}
return 0;
}
