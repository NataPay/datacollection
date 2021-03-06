#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef long long ll;

char data[ 20000 ];

int main(void){

    int T;
    scanf("%d",&T);

    for(int round = 0;round < T;++round){
        // スモール特化。
        // まず左右方向にガガガガッと振って、Xをあわせる。
        // 次に、縦方向は、目的地が飛び越え範囲に入ってしまっているなら、
        // 2回飛び越えて、ガガガガッとやる。
        // 入ってないなら、目的地方向に飛んでガガガガッとやる。
        int x = 0;
        int y = 0;
        int gx;
        int gy;
        scanf("%d %d",&gx,&gy);
        int turn = 0;
        // X 方向
        while(x != gx){
            data[ turn ] = 'E';
            x += ++turn;
            if( x == gx ) break;
            data[ turn ] = 'W';
            x -= ++turn;
            if( x == gx ) break;
        }
        // Y 方向
        // turn + 1 でジャンプして、
        // 飛び越えないなら、それでいい。
        // 飛び越えるようなら、逆に飛ぶ。
        int sig = gy < 0 ? -1 : 1;
        if( y != gy ){
            if( sig > 0 ){
                if( y < y + turn + 1 ){
                    // 飛び越えちゃう
                    sig = -sig;
                }
            }else{
                if( y > y - turn - 1 ){
                    sig = -sig;
                }
            }
            while(y != gy){
                if( sig > 0 ){
                    data[ turn ] = 'N';
                }else{
                    data[ turn ] = 'S';
                }
                y += ++turn * sig;
                sig = -sig;
            }
        }
        data[ turn ] = 0;
        printf("Case #%d: %s\n",round+1,data);
   }
   return 0;
}