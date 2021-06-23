struct Packet {
    int sport;
    int rdata;
    int ttl;
    int id;
};
int seen[10000] = {0};
int last_ttl[10000] = {0};
int ttl_change[10000] = {0};
void func(struct Packet p){
p.id=p.rdata;
if (!(!(!(seen[p.id]==0)&&1==1)) && 1==1) {if (!(seen[p.id]==0)&&1==1 && 1==1) {if (last_ttl[p.id]!=p.ttl&&1==1 && 1==1) {last_ttl[p.id]=p.ttl;
ttl_change[p.id]+=1;

 }

 }

 }else {if (!(!(seen[p.id]==0)&&1==1) && 1==1) {if (seen[p.id]==0&&1==1 && 1==1) {seen[p.id]=1;
last_ttl[p.id]=p.ttl;
ttl_change[p.id]=0;

 }

 }

 }
}