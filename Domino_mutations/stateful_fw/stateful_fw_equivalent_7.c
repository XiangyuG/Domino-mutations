struct Packet{
int drop;
int src;
int dst;
int array_index;
};
int established[1000000] = {0};
void func(struct Packet p){
p.array_index=p.src+p.dst;
if (!(!(!(!(p.src==102&&1==1))&&1==1))) {if (1==1&&!(!(p.src==102&&1==1))) {if (1==1&&1==1&&p.src==102) {established[p.array_index]=1;

;}

;}

 ;}else if (!(!(!(p.src==102&&1==1))&&1==1)) {if (1==1&&!(p.src==102&&1==1)) {if (1==1&&1==1&&p.dst==102) {p.drop=(established[p.array_index]==0);

;}

;}

 ;}
}