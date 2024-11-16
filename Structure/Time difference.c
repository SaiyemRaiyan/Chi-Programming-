#include <stdio.h>
struct TIME {
    int min;
    int hou;
};

void Timedifference(struct TIME ST, struct TIME ET, struct TIME *diff);

int main() {
    struct TIME ST,ET,diff;
    printf("Enter the time of first city: \n");
    printf("Enter hours, minutes: ");
    scanf("%d %d",&ST.hou,&ST.min);
    printf("Enter the time of second city: \n");
    printf("Enter hou, min: ");
    scanf("%d %d",&ET.hou,&ET.min);


    Timedifference(ST,ET,&diff);
    printf("\nTime difference: %d hours %d minutes-");
    printf("%d hours %d minutes",ET.hou,ET.min);
    printf("= %d hours %d minutes\n",diff.hou,diff.min);
    return 0;
}

void Timedifference(struct TIME ST,struct TIME ET,struct TIME*diff) {
    if (ET.min>ST.min) {
        --ST.hou;
        ST.min+= 60;
    }
    diff->min =ST.min-ET.min;

    diff->hou=ST.hou-ET.hou;

}
