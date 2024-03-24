#include<stdio.h>
struct player_score
{
    int player;
    int score;
}p1;
int main()
{
    struct player_score p1;
    scanf("%d",&p1.player);
    int i,sum=0;
    for(i=0;i<p1.player;i++){
        scanf("%d",&p1.score);
        sum = sum + p1.score;
    }
    printf("%d",sum);

}